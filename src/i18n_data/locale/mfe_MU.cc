#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Morisyen locale for Mauritius"),.source=tsc("Samsung Electronics Co., Ltd.\t\t;\t\tfast_io"),.address=tsc("https://github.com/expnkx/fast_io"),.contact=tsc("fast_io"),.email=tsc("akhilesh.k@samsung.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Morisyen"),.territory=tsc("Mauritius"),.revision=tsc("1.0"),.date=tsc("2017-08-18")},.monetary={.int_curr_symbol=tsc("MUR "),.currency_symbol=tsc("₨"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.int_p_sep_by_space=1,.int_n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("dim"),tsc("lin"),tsc("mar"),tsc("mer"),tsc("ze"),tsc("van"),tsc("sam")},.day={tsc("dimans"),tsc("lindi"),tsc("mardi"),tsc("merkredi"),tsc("zedi"),tsc("vandredi"),tsc("samdi")},.abmon={tsc("zan"),tsc("fev"),tsc("mar"),tsc("avr"),tsc("me"),tsc("zin"),tsc("zil"),tsc("out"),tsc("sep"),tsc("okt"),tsc("nov"),tsc("des")},.mon={tsc("zanvie"),tsc("fevriye"),tsc("mars"),tsc("avril"),tsc("me"),tsc("zin"),tsc("zilye"),tsc("out"),tsc("septam"),tsc("oktob"),tsc("novam"),tsc("desam")},.d_t_fmt=tsc("%a %d %b %Y %T %Z"),.d_fmt=tsc("%d//%m//%y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc("%l:%M:%S %P %Z"),.date_fmt=tsc("%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc("AM"),tsc("PM")}},.messages={.yesexpr=tsc("^[+1yYwW]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("Wi"),.nostr=tsc("Non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %l"),.int_select=tsc("00"),.int_prefix=tsc("230")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("Miss."),.name_mr=tsc("Mr."),.name_mrs=tsc("Mrs."),.name_ms=tsc("Ms.")},.address={.postal_fmt=tsc("%f%N%h%s%N%T"),.country_name=tsc("Moris"),.country_ab2=tsc("MU"),.country_ab3=tsc("MUS"),.country_num=480,.country_car=tsc("MS"),.country_isbn=tsc("978-613,978-620,978-99903,978-99949"),.lang_name=tsc("kreol morisien"),.lang_term=tsc("mfe"),.lang_lib=tsc("mfe")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Morisyen locale for Mauritius"),.source=tsc(L"Samsung Electronics Co., Ltd.\t\t;\t\tfast_io"),.address=tsc(L"https://github.com/expnkx/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"akhilesh.k@samsung.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Morisyen"),.territory=tsc(L"Mauritius"),.revision=tsc(L"1.0"),.date=tsc(L"2017-08-18")},.monetary={.int_curr_symbol=tsc(L"MUR "),.currency_symbol=tsc(L"₨"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.int_p_sep_by_space=1,.int_n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"dim"),tsc(L"lin"),tsc(L"mar"),tsc(L"mer"),tsc(L"ze"),tsc(L"van"),tsc(L"sam")},.day={tsc(L"dimans"),tsc(L"lindi"),tsc(L"mardi"),tsc(L"merkredi"),tsc(L"zedi"),tsc(L"vandredi"),tsc(L"samdi")},.abmon={tsc(L"zan"),tsc(L"fev"),tsc(L"mar"),tsc(L"avr"),tsc(L"me"),tsc(L"zin"),tsc(L"zil"),tsc(L"out"),tsc(L"sep"),tsc(L"okt"),tsc(L"nov"),tsc(L"des")},.mon={tsc(L"zanvie"),tsc(L"fevriye"),tsc(L"mars"),tsc(L"avril"),tsc(L"me"),tsc(L"zin"),tsc(L"zilye"),tsc(L"out"),tsc(L"septam"),tsc(L"oktob"),tsc(L"novam"),tsc(L"desam")},.d_t_fmt=tsc(L"%a %d %b %Y %T %Z"),.d_fmt=tsc(L"%d//%m//%y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L"%l:%M:%S %P %Z"),.date_fmt=tsc(L"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(L"AM"),tsc(L"PM")}},.messages={.yesexpr=tsc(L"^[+1yYwW]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"Wi"),.nostr=tsc(L"Non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"230")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"Miss."),.name_mr=tsc(L"Mr."),.name_mrs=tsc(L"Mrs."),.name_ms=tsc(L"Ms.")},.address={.postal_fmt=tsc(L"%f%N%h%s%N%T"),.country_name=tsc(L"Moris"),.country_ab2=tsc(L"MU"),.country_ab3=tsc(L"MUS"),.country_num=480,.country_car=tsc(L"MS"),.country_isbn=tsc(L"978-613,978-620,978-99903,978-99949"),.lang_name=tsc(L"kreol morisien"),.lang_term=tsc(L"mfe"),.lang_lib=tsc(L"mfe")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Morisyen locale for Mauritius"),.source=tsc(u8"Samsung Electronics Co., Ltd.\t\t;\t\tfast_io"),.address=tsc(u8"https://github.com/expnkx/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"akhilesh.k@samsung.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Morisyen"),.territory=tsc(u8"Mauritius"),.revision=tsc(u8"1.0"),.date=tsc(u8"2017-08-18")},.monetary={.int_curr_symbol=tsc(u8"MUR "),.currency_symbol=tsc(u8"₨"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.int_p_sep_by_space=1,.int_n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"dim"),tsc(u8"lin"),tsc(u8"mar"),tsc(u8"mer"),tsc(u8"ze"),tsc(u8"van"),tsc(u8"sam")},.day={tsc(u8"dimans"),tsc(u8"lindi"),tsc(u8"mardi"),tsc(u8"merkredi"),tsc(u8"zedi"),tsc(u8"vandredi"),tsc(u8"samdi")},.abmon={tsc(u8"zan"),tsc(u8"fev"),tsc(u8"mar"),tsc(u8"avr"),tsc(u8"me"),tsc(u8"zin"),tsc(u8"zil"),tsc(u8"out"),tsc(u8"sep"),tsc(u8"okt"),tsc(u8"nov"),tsc(u8"des")},.mon={tsc(u8"zanvie"),tsc(u8"fevriye"),tsc(u8"mars"),tsc(u8"avril"),tsc(u8"me"),tsc(u8"zin"),tsc(u8"zilye"),tsc(u8"out"),tsc(u8"septam"),tsc(u8"oktob"),tsc(u8"novam"),tsc(u8"desam")},.d_t_fmt=tsc(u8"%a %d %b %Y %T %Z"),.d_fmt=tsc(u8"%d//%m//%y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8"%l:%M:%S %P %Z"),.date_fmt=tsc(u8"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(u8"AM"),tsc(u8"PM")}},.messages={.yesexpr=tsc(u8"^[+1yYwW]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"Wi"),.nostr=tsc(u8"Non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"230")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"Miss."),.name_mr=tsc(u8"Mr."),.name_mrs=tsc(u8"Mrs."),.name_ms=tsc(u8"Ms.")},.address={.postal_fmt=tsc(u8"%f%N%h%s%N%T"),.country_name=tsc(u8"Moris"),.country_ab2=tsc(u8"MU"),.country_ab3=tsc(u8"MUS"),.country_num=480,.country_car=tsc(u8"MS"),.country_isbn=tsc(u8"978-613,978-620,978-99903,978-99949"),.lang_name=tsc(u8"kreol morisien"),.lang_term=tsc(u8"mfe"),.lang_lib=tsc(u8"mfe")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Morisyen locale for Mauritius"),.source=tsc(u"Samsung Electronics Co., Ltd.\t\t;\t\tfast_io"),.address=tsc(u"https://github.com/expnkx/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"akhilesh.k@samsung.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Morisyen"),.territory=tsc(u"Mauritius"),.revision=tsc(u"1.0"),.date=tsc(u"2017-08-18")},.monetary={.int_curr_symbol=tsc(u"MUR "),.currency_symbol=tsc(u"₨"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.int_p_sep_by_space=1,.int_n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"dim"),tsc(u"lin"),tsc(u"mar"),tsc(u"mer"),tsc(u"ze"),tsc(u"van"),tsc(u"sam")},.day={tsc(u"dimans"),tsc(u"lindi"),tsc(u"mardi"),tsc(u"merkredi"),tsc(u"zedi"),tsc(u"vandredi"),tsc(u"samdi")},.abmon={tsc(u"zan"),tsc(u"fev"),tsc(u"mar"),tsc(u"avr"),tsc(u"me"),tsc(u"zin"),tsc(u"zil"),tsc(u"out"),tsc(u"sep"),tsc(u"okt"),tsc(u"nov"),tsc(u"des")},.mon={tsc(u"zanvie"),tsc(u"fevriye"),tsc(u"mars"),tsc(u"avril"),tsc(u"me"),tsc(u"zin"),tsc(u"zilye"),tsc(u"out"),tsc(u"septam"),tsc(u"oktob"),tsc(u"novam"),tsc(u"desam")},.d_t_fmt=tsc(u"%a %d %b %Y %T %Z"),.d_fmt=tsc(u"%d//%m//%y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u"%l:%M:%S %P %Z"),.date_fmt=tsc(u"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(u"AM"),tsc(u"PM")}},.messages={.yesexpr=tsc(u"^[+1yYwW]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"Wi"),.nostr=tsc(u"Non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"230")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"Miss."),.name_mr=tsc(u"Mr."),.name_mrs=tsc(u"Mrs."),.name_ms=tsc(u"Ms.")},.address={.postal_fmt=tsc(u"%f%N%h%s%N%T"),.country_name=tsc(u"Moris"),.country_ab2=tsc(u"MU"),.country_ab3=tsc(u"MUS"),.country_num=480,.country_car=tsc(u"MS"),.country_isbn=tsc(u"978-613,978-620,978-99903,978-99949"),.lang_name=tsc(u"kreol morisien"),.lang_term=tsc(u"mfe"),.lang_lib=tsc(u"mfe")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Morisyen locale for Mauritius"),.source=tsc(U"Samsung Electronics Co., Ltd.\t\t;\t\tfast_io"),.address=tsc(U"https://github.com/expnkx/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"akhilesh.k@samsung.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Morisyen"),.territory=tsc(U"Mauritius"),.revision=tsc(U"1.0"),.date=tsc(U"2017-08-18")},.monetary={.int_curr_symbol=tsc(U"MUR "),.currency_symbol=tsc(U"₨"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.int_p_sep_by_space=1,.int_n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"dim"),tsc(U"lin"),tsc(U"mar"),tsc(U"mer"),tsc(U"ze"),tsc(U"van"),tsc(U"sam")},.day={tsc(U"dimans"),tsc(U"lindi"),tsc(U"mardi"),tsc(U"merkredi"),tsc(U"zedi"),tsc(U"vandredi"),tsc(U"samdi")},.abmon={tsc(U"zan"),tsc(U"fev"),tsc(U"mar"),tsc(U"avr"),tsc(U"me"),tsc(U"zin"),tsc(U"zil"),tsc(U"out"),tsc(U"sep"),tsc(U"okt"),tsc(U"nov"),tsc(U"des")},.mon={tsc(U"zanvie"),tsc(U"fevriye"),tsc(U"mars"),tsc(U"avril"),tsc(U"me"),tsc(U"zin"),tsc(U"zilye"),tsc(U"out"),tsc(U"septam"),tsc(U"oktob"),tsc(U"novam"),tsc(U"desam")},.d_t_fmt=tsc(U"%a %d %b %Y %T %Z"),.d_fmt=tsc(U"%d//%m//%y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U"%l:%M:%S %P %Z"),.date_fmt=tsc(U"%a %e %b %H:%M:%S %Z %Y"),.am_pm={tsc(U"AM"),tsc(U"PM")}},.messages={.yesexpr=tsc(U"^[+1yYwW]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"Wi"),.nostr=tsc(U"Non")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"230")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"Miss."),.name_mr=tsc(U"Mr."),.name_mrs=tsc(U"Mrs."),.name_ms=tsc(U"Ms.")},.address={.postal_fmt=tsc(U"%f%N%h%s%N%T"),.country_name=tsc(U"Moris"),.country_ab2=tsc(U"MU"),.country_ab3=tsc(U"MUS"),.country_num=480,.country_car=tsc(U"MS"),.country_isbn=tsc(U"978-613,978-620,978-99903,978-99949"),.lang_name=tsc(U"kreol morisien"),.lang_term=tsc(U"mfe"),.lang_lib=tsc(U"mfe")},.measurement={.measurement=1}};


}
}

#include"../main.h"