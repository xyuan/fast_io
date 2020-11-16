#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Hausa locale for Nigeria"),.source=tsc("fast_io"),.address=tsc("https://github.com/expnkx/fast_io"),.contact=tsc("fast_io"),.email=tsc("pablo@mandriva.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Hausa"),.territory=tsc("Nigeria"),.revision=tsc("0.2"),.date=tsc("2006-02-01")},.monetary={.int_curr_symbol=tsc("NGN "),.currency_symbol=tsc("₦"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Lah"),tsc("Lit"),tsc("Tal"),tsc("Lar"),tsc("Alh"),tsc("Jum"),tsc("Asa")},.day={tsc("Lahadi"),tsc("Litini"),tsc("Talata"),tsc("Laraba"),tsc("Alhamis"),tsc("Juma'a"),tsc("Asabar")},.abmon={tsc("Jan"),tsc("Fab"),tsc("Mar"),tsc("Afi"),tsc("May"),tsc("Yun"),tsc("Yul"),tsc("Agu"),tsc("Sat"),tsc("Okt"),tsc("Nuw"),tsc("Dis")},.mon={tsc("Janairu"),tsc("Faburairu"),tsc("Maris"),tsc("Afirilu"),tsc("Mayu"),tsc("Yuni"),tsc("Yuli"),tsc("Agusta"),tsc("Satumba"),tsc("Oktoba"),tsc("Nuwamba"),tsc("Disamba")},.d_t_fmt=tsc("ranar %A, %d ga %B cikin %r"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%r"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("ranar %A, %d ga %B cikin %r %Z"),.am_pm={tsc("AM"),tsc("PM")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1TtiIYy]"),.noexpr=tsc("^[-0bBaAnN]"),.yesstr=tsc("i"),.nostr=tsc("aʼa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("(%A) %l"),.int_select=tsc("009"),.int_prefix=tsc("234")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Najeriya"),.country_ab2=tsc("NG"),.country_ab3=tsc("NGA"),.country_num=566,.country_car=tsc("WAN"),.country_isbn=978,.lang_name=tsc("Hausa"),.lang_ab=tsc("ha"),.lang_term=tsc("hau"),.lang_lib=tsc("hau")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Hausa locale for Nigeria"),.source=tsc(L"fast_io"),.address=tsc(L"https://github.com/expnkx/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"pablo@mandriva.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Hausa"),.territory=tsc(L"Nigeria"),.revision=tsc(L"0.2"),.date=tsc(L"2006-02-01")},.monetary={.int_curr_symbol=tsc(L"NGN "),.currency_symbol=tsc(L"₦"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Lah"),tsc(L"Lit"),tsc(L"Tal"),tsc(L"Lar"),tsc(L"Alh"),tsc(L"Jum"),tsc(L"Asa")},.day={tsc(L"Lahadi"),tsc(L"Litini"),tsc(L"Talata"),tsc(L"Laraba"),tsc(L"Alhamis"),tsc(L"Juma'a"),tsc(L"Asabar")},.abmon={tsc(L"Jan"),tsc(L"Fab"),tsc(L"Mar"),tsc(L"Afi"),tsc(L"May"),tsc(L"Yun"),tsc(L"Yul"),tsc(L"Agu"),tsc(L"Sat"),tsc(L"Okt"),tsc(L"Nuw"),tsc(L"Dis")},.mon={tsc(L"Janairu"),tsc(L"Faburairu"),tsc(L"Maris"),tsc(L"Afirilu"),tsc(L"Mayu"),tsc(L"Yuni"),tsc(L"Yuli"),tsc(L"Agusta"),tsc(L"Satumba"),tsc(L"Oktoba"),tsc(L"Nuwamba"),tsc(L"Disamba")},.d_t_fmt=tsc(L"ranar %A, %d ga %B cikin %r"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%r"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"ranar %A, %d ga %B cikin %r %Z"),.am_pm={tsc(L"AM"),tsc(L"PM")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1TtiIYy]"),.noexpr=tsc(L"^[-0bBaAnN]"),.yesstr=tsc(L"i"),.nostr=tsc(L"aʼa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"(%A) %l"),.int_select=tsc(L"009"),.int_prefix=tsc(L"234")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Najeriya"),.country_ab2=tsc(L"NG"),.country_ab3=tsc(L"NGA"),.country_num=566,.country_car=tsc(L"WAN"),.country_isbn=978,.lang_name=tsc(L"Hausa"),.lang_ab=tsc(L"ha"),.lang_term=tsc(L"hau"),.lang_lib=tsc(L"hau")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Hausa locale for Nigeria"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://github.com/expnkx/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"pablo@mandriva.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Hausa"),.territory=tsc(u8"Nigeria"),.revision=tsc(u8"0.2"),.date=tsc(u8"2006-02-01")},.monetary={.int_curr_symbol=tsc(u8"NGN "),.currency_symbol=tsc(u8"₦"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Lah"),tsc(u8"Lit"),tsc(u8"Tal"),tsc(u8"Lar"),tsc(u8"Alh"),tsc(u8"Jum"),tsc(u8"Asa")},.day={tsc(u8"Lahadi"),tsc(u8"Litini"),tsc(u8"Talata"),tsc(u8"Laraba"),tsc(u8"Alhamis"),tsc(u8"Juma'a"),tsc(u8"Asabar")},.abmon={tsc(u8"Jan"),tsc(u8"Fab"),tsc(u8"Mar"),tsc(u8"Afi"),tsc(u8"May"),tsc(u8"Yun"),tsc(u8"Yul"),tsc(u8"Agu"),tsc(u8"Sat"),tsc(u8"Okt"),tsc(u8"Nuw"),tsc(u8"Dis")},.mon={tsc(u8"Janairu"),tsc(u8"Faburairu"),tsc(u8"Maris"),tsc(u8"Afirilu"),tsc(u8"Mayu"),tsc(u8"Yuni"),tsc(u8"Yuli"),tsc(u8"Agusta"),tsc(u8"Satumba"),tsc(u8"Oktoba"),tsc(u8"Nuwamba"),tsc(u8"Disamba")},.d_t_fmt=tsc(u8"ranar %A, %d ga %B cikin %r"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%r"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"ranar %A, %d ga %B cikin %r %Z"),.am_pm={tsc(u8"AM"),tsc(u8"PM")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1TtiIYy]"),.noexpr=tsc(u8"^[-0bBaAnN]"),.yesstr=tsc(u8"i"),.nostr=tsc(u8"aʼa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"(%A) %l"),.int_select=tsc(u8"009"),.int_prefix=tsc(u8"234")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Najeriya"),.country_ab2=tsc(u8"NG"),.country_ab3=tsc(u8"NGA"),.country_num=566,.country_car=tsc(u8"WAN"),.country_isbn=978,.lang_name=tsc(u8"Hausa"),.lang_ab=tsc(u8"ha"),.lang_term=tsc(u8"hau"),.lang_lib=tsc(u8"hau")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Hausa locale for Nigeria"),.source=tsc(u"fast_io"),.address=tsc(u"https://github.com/expnkx/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"pablo@mandriva.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Hausa"),.territory=tsc(u"Nigeria"),.revision=tsc(u"0.2"),.date=tsc(u"2006-02-01")},.monetary={.int_curr_symbol=tsc(u"NGN "),.currency_symbol=tsc(u"₦"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Lah"),tsc(u"Lit"),tsc(u"Tal"),tsc(u"Lar"),tsc(u"Alh"),tsc(u"Jum"),tsc(u"Asa")},.day={tsc(u"Lahadi"),tsc(u"Litini"),tsc(u"Talata"),tsc(u"Laraba"),tsc(u"Alhamis"),tsc(u"Juma'a"),tsc(u"Asabar")},.abmon={tsc(u"Jan"),tsc(u"Fab"),tsc(u"Mar"),tsc(u"Afi"),tsc(u"May"),tsc(u"Yun"),tsc(u"Yul"),tsc(u"Agu"),tsc(u"Sat"),tsc(u"Okt"),tsc(u"Nuw"),tsc(u"Dis")},.mon={tsc(u"Janairu"),tsc(u"Faburairu"),tsc(u"Maris"),tsc(u"Afirilu"),tsc(u"Mayu"),tsc(u"Yuni"),tsc(u"Yuli"),tsc(u"Agusta"),tsc(u"Satumba"),tsc(u"Oktoba"),tsc(u"Nuwamba"),tsc(u"Disamba")},.d_t_fmt=tsc(u"ranar %A, %d ga %B cikin %r"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%r"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"ranar %A, %d ga %B cikin %r %Z"),.am_pm={tsc(u"AM"),tsc(u"PM")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1TtiIYy]"),.noexpr=tsc(u"^[-0bBaAnN]"),.yesstr=tsc(u"i"),.nostr=tsc(u"aʼa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"(%A) %l"),.int_select=tsc(u"009"),.int_prefix=tsc(u"234")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Najeriya"),.country_ab2=tsc(u"NG"),.country_ab3=tsc(u"NGA"),.country_num=566,.country_car=tsc(u"WAN"),.country_isbn=978,.lang_name=tsc(u"Hausa"),.lang_ab=tsc(u"ha"),.lang_term=tsc(u"hau"),.lang_lib=tsc(u"hau")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Hausa locale for Nigeria"),.source=tsc(U"fast_io"),.address=tsc(U"https://github.com/expnkx/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"pablo@mandriva.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Hausa"),.territory=tsc(U"Nigeria"),.revision=tsc(U"0.2"),.date=tsc(U"2006-02-01")},.monetary={.int_curr_symbol=tsc(U"NGN "),.currency_symbol=tsc(U"₦"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Lah"),tsc(U"Lit"),tsc(U"Tal"),tsc(U"Lar"),tsc(U"Alh"),tsc(U"Jum"),tsc(U"Asa")},.day={tsc(U"Lahadi"),tsc(U"Litini"),tsc(U"Talata"),tsc(U"Laraba"),tsc(U"Alhamis"),tsc(U"Juma'a"),tsc(U"Asabar")},.abmon={tsc(U"Jan"),tsc(U"Fab"),tsc(U"Mar"),tsc(U"Afi"),tsc(U"May"),tsc(U"Yun"),tsc(U"Yul"),tsc(U"Agu"),tsc(U"Sat"),tsc(U"Okt"),tsc(U"Nuw"),tsc(U"Dis")},.mon={tsc(U"Janairu"),tsc(U"Faburairu"),tsc(U"Maris"),tsc(U"Afirilu"),tsc(U"Mayu"),tsc(U"Yuni"),tsc(U"Yuli"),tsc(U"Agusta"),tsc(U"Satumba"),tsc(U"Oktoba"),tsc(U"Nuwamba"),tsc(U"Disamba")},.d_t_fmt=tsc(U"ranar %A, %d ga %B cikin %r"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%r"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"ranar %A, %d ga %B cikin %r %Z"),.am_pm={tsc(U"AM"),tsc(U"PM")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1TtiIYy]"),.noexpr=tsc(U"^[-0bBaAnN]"),.yesstr=tsc(U"i"),.nostr=tsc(U"aʼa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"(%A) %l"),.int_select=tsc(U"009"),.int_prefix=tsc(U"234")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Najeriya"),.country_ab2=tsc(U"NG"),.country_ab3=tsc(U"NGA"),.country_num=566,.country_car=tsc(U"WAN"),.country_isbn=978,.lang_name=tsc(U"Hausa"),.lang_ab=tsc(U"ha"),.lang_term=tsc(U"hau"),.lang_lib=tsc(U"hau")},.measurement={.measurement=1}};


}
}

#include"../main.h"