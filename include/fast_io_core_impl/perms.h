#pragma once

namespace fast_io
{
//https://github.com/gcc-mirror/gcc/blob/master/libstdc++-v3/include/bits/fs_fwd.h
enum class perms : unsigned
{
none		=  0,
owner_read	=  0400,
owner_write	=  0200,
owner_exec	=  0100,
owner_all	=  0700,
group_read	=   040,
group_write	=   020,
group_exec	=   010,
group_all	=   070,
others_read	=    04,
others_write	=    02,
others_exec	=    01,
others_all	=    07,
all		=  0777,
set_uid		= 04000,
set_gid		= 02000,
sticky_bit	= 01000,
mask		= 07777,
unknown		= 0xFFFF,
add_perms	= 0x10000,
remove_perms	= 0x20000,
symlink_nofollow= 0x40000
};

constexpr perms operator&(perms x, perms y) noexcept
{
using utype = typename std::underlying_type<perms>::type;
return static_cast<perms>(static_cast<utype>(x) & static_cast<utype>(y));
}

constexpr perms operator|(perms x, perms y) noexcept
{
using utype = typename std::underlying_type<perms>::type;
return static_cast<perms>(static_cast<utype>(x) | static_cast<utype>(y));
}

constexpr perms operator^(perms x, perms y) noexcept
{
using utype = typename std::underlying_type<perms>::type;
return static_cast<perms>(static_cast<utype>(x) ^ static_cast<utype>(y));
}

constexpr perms operator~(perms x) noexcept
{
using utype = typename std::underlying_type<perms>::type;
return static_cast<perms>(~static_cast<utype>(x));
}

inline constexpr perms& operator&=(perms& x, perms y) noexcept{return x=x&y;}

inline constexpr perms& operator|=(perms& x, perms y) noexcept{return x=x|y;}

inline constexpr perms& operator^=(perms& x, perms y) noexcept{return x=x^y;}

namespace details::perm
{
template<std::integral ch_type,char8_t fillch,std::random_access_iterator raiter>
inline constexpr void print_perm_per_check(raiter i,perms p,perms checked) noexcept
{
	if((p&checked)==perms::none)
	{
		if constexpr(std::same_as<ch_type,char>)
			*i='-';
		else if constexpr(std::same_as<ch_type,wchar_t>)
			*i=L'-';
		else
			*i=u8'-';
	}
	else
	{
		if constexpr(std::same_as<ch_type,char>)
		{
			if constexpr(fillch==u8'r')
				*i='r';
			else if constexpr(fillch==u8'w')
				*i='w';
			else if constexpr(fillch==u8'x')
				*i='x';
		}
		else if constexpr(std::same_as<ch_type,wchar_t>)
		{
			if constexpr(fillch==u8'r')
				*i=L'r';
			else if constexpr(fillch==u8'w')
				*i=L'w';
			else if constexpr(fillch==u8'x')
				*i=L'x';
		}
		else
			*i=fillch;
	}
}

}
template<std::integral char_type>
inline constexpr std::size_t print_reserve_size(io_reserve_type_t<char_type,perms>) noexcept
{
	return 9;
}

namespace details
{
template<std::integral char_type,std::random_access_iterator raiter>
inline constexpr raiter print_status_impl(raiter iter,perms p) noexcept
{
	details::perm::print_perm_per_check<char_type,u8'r'>(iter,p,perms::owner_read);
	details::perm::print_perm_per_check<char_type,u8'w'>(++iter,p,perms::owner_write);
	details::perm::print_perm_per_check<char_type,u8'x'>(++iter,p,perms::owner_exec);
	details::perm::print_perm_per_check<char_type,u8'r'>(++iter,p,perms::group_read);
	details::perm::print_perm_per_check<char_type,u8'w'>(++iter,p,perms::group_write);
	details::perm::print_perm_per_check<char_type,u8'x'>(++iter,p,perms::group_exec);
	details::perm::print_perm_per_check<char_type,u8'r'>(++iter,p,perms::others_read);
	details::perm::print_perm_per_check<char_type,u8'w'>(++iter,p,perms::others_write);
	details::perm::print_perm_per_check<char_type,u8'x'>(++iter,p,perms::others_exec);
	return ++iter;
}
}

template<std::integral char_type,std::random_access_iterator raiter>
inline constexpr raiter print_reserve_define(io_reserve_type_t<char_type,perms>,raiter iter,perms p) noexcept
{
	return details::print_status_impl<char_type>(iter,p);
}

}