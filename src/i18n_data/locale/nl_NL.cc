#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Dutch locale for the Netherlands"),.source=tsc("RAP\t\t;\t\tfast_io"),.address=tsc("Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Dutch"),.territory=tsc("Netherlands"),.revision=tsc("1.0"),.date=tsc("2000-06-29")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=1,.n_sign_posn=4},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("zo"),tsc("ma"),tsc("di"),tsc("wo"),tsc("do"),tsc("vr"),tsc("za")},.day={tsc("zondag"),tsc("maandag"),tsc("dinsdag"),tsc("woensdag"),tsc("donderdag"),tsc("vrijdag"),tsc("zaterdag")},.abmon={tsc("jan"),tsc("feb"),tsc("mrt"),tsc("apr"),tsc("mei"),tsc("jun"),tsc("jul"),tsc("aug"),tsc("sep"),tsc("okt"),tsc("nov"),tsc("dec")},.mon={tsc("januari"),tsc("februari"),tsc("maart"),tsc("april"),tsc("mei"),tsc("juni"),tsc("juli"),tsc("augustus"),tsc("september"),tsc("oktober"),tsc("november"),tsc("december")},.d_t_fmt=tsc("%a %d %b %Y %T %Z"),.d_fmt=tsc("%d-%m-%y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %e %b %Y %k:%M:%S %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1jJyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("ja"),.nostr=tsc("nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("31")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_gen=tsc("heer of mevrouw"),.name_miss=tsc("mevrouw"),.name_mr=tsc("heer"),.name_mrs=tsc("mevrouw"),.name_ms=tsc("mevrouw")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Nederland"),.country_ab2=tsc("NL"),.country_ab3=tsc("NLD"),.country_num=528,.country_car=tsc("NL"),.lang_name=tsc("Nederlands"),.lang_ab=tsc("nl"),.lang_term=tsc("nld"),.lang_lib=tsc("dut")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Dutch locale for the Netherlands"),.source=tsc(L"RAP\t\t;\t\tfast_io"),.address=tsc(L"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Dutch"),.territory=tsc(L"Netherlands"),.revision=tsc(L"1.0"),.date=tsc(L"2000-06-29")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=1,.n_sign_posn=4},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"zo"),tsc(L"ma"),tsc(L"di"),tsc(L"wo"),tsc(L"do"),tsc(L"vr"),tsc(L"za")},.day={tsc(L"zondag"),tsc(L"maandag"),tsc(L"dinsdag"),tsc(L"woensdag"),tsc(L"donderdag"),tsc(L"vrijdag"),tsc(L"zaterdag")},.abmon={tsc(L"jan"),tsc(L"feb"),tsc(L"mrt"),tsc(L"apr"),tsc(L"mei"),tsc(L"jun"),tsc(L"jul"),tsc(L"aug"),tsc(L"sep"),tsc(L"okt"),tsc(L"nov"),tsc(L"dec")},.mon={tsc(L"januari"),tsc(L"februari"),tsc(L"maart"),tsc(L"april"),tsc(L"mei"),tsc(L"juni"),tsc(L"juli"),tsc(L"augustus"),tsc(L"september"),tsc(L"oktober"),tsc(L"november"),tsc(L"december")},.d_t_fmt=tsc(L"%a %d %b %Y %T %Z"),.d_fmt=tsc(L"%d-%m-%y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %e %b %Y %k:%M:%S %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1jJyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"ja"),.nostr=tsc(L"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"31")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_gen=tsc(L"heer of mevrouw"),.name_miss=tsc(L"mevrouw"),.name_mr=tsc(L"heer"),.name_mrs=tsc(L"mevrouw"),.name_ms=tsc(L"mevrouw")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Nederland"),.country_ab2=tsc(L"NL"),.country_ab3=tsc(L"NLD"),.country_num=528,.country_car=tsc(L"NL"),.lang_name=tsc(L"Nederlands"),.lang_ab=tsc(L"nl"),.lang_term=tsc(L"nld"),.lang_lib=tsc(L"dut")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Dutch locale for the Netherlands"),.source=tsc(u8"RAP\t\t;\t\tfast_io"),.address=tsc(u8"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Dutch"),.territory=tsc(u8"Netherlands"),.revision=tsc(u8"1.0"),.date=tsc(u8"2000-06-29")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=1,.n_sign_posn=4},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"zo"),tsc(u8"ma"),tsc(u8"di"),tsc(u8"wo"),tsc(u8"do"),tsc(u8"vr"),tsc(u8"za")},.day={tsc(u8"zondag"),tsc(u8"maandag"),tsc(u8"dinsdag"),tsc(u8"woensdag"),tsc(u8"donderdag"),tsc(u8"vrijdag"),tsc(u8"zaterdag")},.abmon={tsc(u8"jan"),tsc(u8"feb"),tsc(u8"mrt"),tsc(u8"apr"),tsc(u8"mei"),tsc(u8"jun"),tsc(u8"jul"),tsc(u8"aug"),tsc(u8"sep"),tsc(u8"okt"),tsc(u8"nov"),tsc(u8"dec")},.mon={tsc(u8"januari"),tsc(u8"februari"),tsc(u8"maart"),tsc(u8"april"),tsc(u8"mei"),tsc(u8"juni"),tsc(u8"juli"),tsc(u8"augustus"),tsc(u8"september"),tsc(u8"oktober"),tsc(u8"november"),tsc(u8"december")},.d_t_fmt=tsc(u8"%a %d %b %Y %T %Z"),.d_fmt=tsc(u8"%d-%m-%y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %e %b %Y %k:%M:%S %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1jJyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"ja"),.nostr=tsc(u8"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"31")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_gen=tsc(u8"heer of mevrouw"),.name_miss=tsc(u8"mevrouw"),.name_mr=tsc(u8"heer"),.name_mrs=tsc(u8"mevrouw"),.name_ms=tsc(u8"mevrouw")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Nederland"),.country_ab2=tsc(u8"NL"),.country_ab3=tsc(u8"NLD"),.country_num=528,.country_car=tsc(u8"NL"),.lang_name=tsc(u8"Nederlands"),.lang_ab=tsc(u8"nl"),.lang_term=tsc(u8"nld"),.lang_lib=tsc(u8"dut")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Dutch locale for the Netherlands"),.source=tsc(u"RAP\t\t;\t\tfast_io"),.address=tsc(u"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Dutch"),.territory=tsc(u"Netherlands"),.revision=tsc(u"1.0"),.date=tsc(u"2000-06-29")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=1,.n_sign_posn=4},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"zo"),tsc(u"ma"),tsc(u"di"),tsc(u"wo"),tsc(u"do"),tsc(u"vr"),tsc(u"za")},.day={tsc(u"zondag"),tsc(u"maandag"),tsc(u"dinsdag"),tsc(u"woensdag"),tsc(u"donderdag"),tsc(u"vrijdag"),tsc(u"zaterdag")},.abmon={tsc(u"jan"),tsc(u"feb"),tsc(u"mrt"),tsc(u"apr"),tsc(u"mei"),tsc(u"jun"),tsc(u"jul"),tsc(u"aug"),tsc(u"sep"),tsc(u"okt"),tsc(u"nov"),tsc(u"dec")},.mon={tsc(u"januari"),tsc(u"februari"),tsc(u"maart"),tsc(u"april"),tsc(u"mei"),tsc(u"juni"),tsc(u"juli"),tsc(u"augustus"),tsc(u"september"),tsc(u"oktober"),tsc(u"november"),tsc(u"december")},.d_t_fmt=tsc(u"%a %d %b %Y %T %Z"),.d_fmt=tsc(u"%d-%m-%y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %e %b %Y %k:%M:%S %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1jJyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"ja"),.nostr=tsc(u"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"31")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_gen=tsc(u"heer of mevrouw"),.name_miss=tsc(u"mevrouw"),.name_mr=tsc(u"heer"),.name_mrs=tsc(u"mevrouw"),.name_ms=tsc(u"mevrouw")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Nederland"),.country_ab2=tsc(u"NL"),.country_ab3=tsc(u"NLD"),.country_num=528,.country_car=tsc(u"NL"),.lang_name=tsc(u"Nederlands"),.lang_ab=tsc(u"nl"),.lang_term=tsc(u"nld"),.lang_lib=tsc(u"dut")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Dutch locale for the Netherlands"),.source=tsc(U"RAP\t\t;\t\tfast_io"),.address=tsc(U"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Dutch"),.territory=tsc(U"Netherlands"),.revision=tsc(U"1.0"),.date=tsc(U"2000-06-29")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=2,.p_sign_posn=1,.n_sign_posn=4},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"zo"),tsc(U"ma"),tsc(U"di"),tsc(U"wo"),tsc(U"do"),tsc(U"vr"),tsc(U"za")},.day={tsc(U"zondag"),tsc(U"maandag"),tsc(U"dinsdag"),tsc(U"woensdag"),tsc(U"donderdag"),tsc(U"vrijdag"),tsc(U"zaterdag")},.abmon={tsc(U"jan"),tsc(U"feb"),tsc(U"mrt"),tsc(U"apr"),tsc(U"mei"),tsc(U"jun"),tsc(U"jul"),tsc(U"aug"),tsc(U"sep"),tsc(U"okt"),tsc(U"nov"),tsc(U"dec")},.mon={tsc(U"januari"),tsc(U"februari"),tsc(U"maart"),tsc(U"april"),tsc(U"mei"),tsc(U"juni"),tsc(U"juli"),tsc(U"augustus"),tsc(U"september"),tsc(U"oktober"),tsc(U"november"),tsc(U"december")},.d_t_fmt=tsc(U"%a %d %b %Y %T %Z"),.d_fmt=tsc(U"%d-%m-%y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %e %b %Y %k:%M:%S %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1jJyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"ja"),.nostr=tsc(U"nee")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"31")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_gen=tsc(U"heer of mevrouw"),.name_miss=tsc(U"mevrouw"),.name_mr=tsc(U"heer"),.name_mrs=tsc(U"mevrouw"),.name_ms=tsc(U"mevrouw")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Nederland"),.country_ab2=tsc(U"NL"),.country_ab3=tsc(U"NLD"),.country_num=528,.country_car=tsc(U"NL"),.lang_name=tsc(U"Nederlands"),.lang_ab=tsc(U"nl"),.lang_term=tsc(U"nld"),.lang_lib=tsc(U"dut")},.measurement={.measurement=1}};


}
}

#include"../main.h"