#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Swahili locale for Tanzania"),.source=tsc("Kamusi Project\t\t;\t\tfast_io"),.contact=tsc("Martin Benjamin\t\t;\t\tfast_io"),.email=tsc("locales@kamusi.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Swahili"),.territory=tsc("Tanzania"),.revision=tsc("1.0"),.date=tsc("2011-03-07")},.monetary={.int_curr_symbol=tsc("TZS "),.currency_symbol=tsc("TSh"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("J2"),tsc("J3"),tsc("J4"),tsc("J5"),tsc("Alh"),tsc("Ij"),tsc("J1")},.day={tsc("Jumapili"),tsc("Jumatatu"),tsc("Jumanne"),tsc("Jumatano"),tsc("Alhamisi"),tsc("Ijumaa"),tsc("Jumamosi")},.abmon={tsc("Jan"),tsc("Feb"),tsc("Mac"),tsc("Apr"),tsc("Mei"),tsc("Jun"),tsc("Jul"),tsc("Ago"),tsc("Sep"),tsc("Okt"),tsc("Nov"),tsc("Des")},.mon={tsc("Januari"),tsc("Februari"),tsc("Machi"),tsc("Aprili"),tsc("Mei"),tsc("Juni"),tsc("Julai"),tsc("Agosti"),tsc("Septemba"),tsc("Oktoba"),tsc("Novemba"),tsc("Desemba")},.d_t_fmt=tsc("%e %B %Y %I:%M:%S %p"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%I:%M:%S %p"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("%e %B %Y %I:%M:%S %p %Z"),.am_pm={tsc("asubuhi"),tsc("alasiri")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1nNyY]"),.noexpr=tsc("^[-0hHlL]"),.yesstr=tsc("Ndiyo"),.nostr=tsc("Hapana")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("%c %a %l"),.tel_dom_fmt=tsc("%A %l"),.int_select=tsc("000"),.int_prefix=tsc("255")},.name={.name_fmt=tsc("%p%t%g%m%t%f"),.name_mr=tsc("Bw."),.name_ms=tsc("Bi.")},.address={.postal_fmt=tsc("%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc("Tanzania"),.country_post=tsc("TZ"),.country_ab2=tsc("TZ"),.country_ab3=tsc("TZA"),.country_num=834,.country_car=tsc("EAT"),.lang_name=tsc("Kiswahili"),.lang_ab=tsc("sw"),.lang_term=tsc("swa"),.lang_lib=tsc("swa")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Swahili locale for Tanzania"),.source=tsc(L"Kamusi Project\t\t;\t\tfast_io"),.contact=tsc(L"Martin Benjamin\t\t;\t\tfast_io"),.email=tsc(L"locales@kamusi.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Swahili"),.territory=tsc(L"Tanzania"),.revision=tsc(L"1.0"),.date=tsc(L"2011-03-07")},.monetary={.int_curr_symbol=tsc(L"TZS "),.currency_symbol=tsc(L"TSh"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"J2"),tsc(L"J3"),tsc(L"J4"),tsc(L"J5"),tsc(L"Alh"),tsc(L"Ij"),tsc(L"J1")},.day={tsc(L"Jumapili"),tsc(L"Jumatatu"),tsc(L"Jumanne"),tsc(L"Jumatano"),tsc(L"Alhamisi"),tsc(L"Ijumaa"),tsc(L"Jumamosi")},.abmon={tsc(L"Jan"),tsc(L"Feb"),tsc(L"Mac"),tsc(L"Apr"),tsc(L"Mei"),tsc(L"Jun"),tsc(L"Jul"),tsc(L"Ago"),tsc(L"Sep"),tsc(L"Okt"),tsc(L"Nov"),tsc(L"Des")},.mon={tsc(L"Januari"),tsc(L"Februari"),tsc(L"Machi"),tsc(L"Aprili"),tsc(L"Mei"),tsc(L"Juni"),tsc(L"Julai"),tsc(L"Agosti"),tsc(L"Septemba"),tsc(L"Oktoba"),tsc(L"Novemba"),tsc(L"Desemba")},.d_t_fmt=tsc(L"%e %B %Y %I:%M:%S %p"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%I:%M:%S %p"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"%e %B %Y %I:%M:%S %p %Z"),.am_pm={tsc(L"asubuhi"),tsc(L"alasiri")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1nNyY]"),.noexpr=tsc(L"^[-0hHlL]"),.yesstr=tsc(L"Ndiyo"),.nostr=tsc(L"Hapana")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"%c %a %l"),.tel_dom_fmt=tsc(L"%A %l"),.int_select=tsc(L"000"),.int_prefix=tsc(L"255")},.name={.name_fmt=tsc(L"%p%t%g%m%t%f"),.name_mr=tsc(L"Bw."),.name_ms=tsc(L"Bi.")},.address={.postal_fmt=tsc(L"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(L"Tanzania"),.country_post=tsc(L"TZ"),.country_ab2=tsc(L"TZ"),.country_ab3=tsc(L"TZA"),.country_num=834,.country_car=tsc(L"EAT"),.lang_name=tsc(L"Kiswahili"),.lang_ab=tsc(L"sw"),.lang_term=tsc(L"swa"),.lang_lib=tsc(L"swa")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Swahili locale for Tanzania"),.source=tsc(u8"Kamusi Project\t\t;\t\tfast_io"),.contact=tsc(u8"Martin Benjamin\t\t;\t\tfast_io"),.email=tsc(u8"locales@kamusi.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Swahili"),.territory=tsc(u8"Tanzania"),.revision=tsc(u8"1.0"),.date=tsc(u8"2011-03-07")},.monetary={.int_curr_symbol=tsc(u8"TZS "),.currency_symbol=tsc(u8"TSh"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"J2"),tsc(u8"J3"),tsc(u8"J4"),tsc(u8"J5"),tsc(u8"Alh"),tsc(u8"Ij"),tsc(u8"J1")},.day={tsc(u8"Jumapili"),tsc(u8"Jumatatu"),tsc(u8"Jumanne"),tsc(u8"Jumatano"),tsc(u8"Alhamisi"),tsc(u8"Ijumaa"),tsc(u8"Jumamosi")},.abmon={tsc(u8"Jan"),tsc(u8"Feb"),tsc(u8"Mac"),tsc(u8"Apr"),tsc(u8"Mei"),tsc(u8"Jun"),tsc(u8"Jul"),tsc(u8"Ago"),tsc(u8"Sep"),tsc(u8"Okt"),tsc(u8"Nov"),tsc(u8"Des")},.mon={tsc(u8"Januari"),tsc(u8"Februari"),tsc(u8"Machi"),tsc(u8"Aprili"),tsc(u8"Mei"),tsc(u8"Juni"),tsc(u8"Julai"),tsc(u8"Agosti"),tsc(u8"Septemba"),tsc(u8"Oktoba"),tsc(u8"Novemba"),tsc(u8"Desemba")},.d_t_fmt=tsc(u8"%e %B %Y %I:%M:%S %p"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%I:%M:%S %p"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"%e %B %Y %I:%M:%S %p %Z"),.am_pm={tsc(u8"asubuhi"),tsc(u8"alasiri")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1nNyY]"),.noexpr=tsc(u8"^[-0hHlL]"),.yesstr=tsc(u8"Ndiyo"),.nostr=tsc(u8"Hapana")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"%c %a %l"),.tel_dom_fmt=tsc(u8"%A %l"),.int_select=tsc(u8"000"),.int_prefix=tsc(u8"255")},.name={.name_fmt=tsc(u8"%p%t%g%m%t%f"),.name_mr=tsc(u8"Bw."),.name_ms=tsc(u8"Bi.")},.address={.postal_fmt=tsc(u8"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(u8"Tanzania"),.country_post=tsc(u8"TZ"),.country_ab2=tsc(u8"TZ"),.country_ab3=tsc(u8"TZA"),.country_num=834,.country_car=tsc(u8"EAT"),.lang_name=tsc(u8"Kiswahili"),.lang_ab=tsc(u8"sw"),.lang_term=tsc(u8"swa"),.lang_lib=tsc(u8"swa")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Swahili locale for Tanzania"),.source=tsc(u"Kamusi Project\t\t;\t\tfast_io"),.contact=tsc(u"Martin Benjamin\t\t;\t\tfast_io"),.email=tsc(u"locales@kamusi.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Swahili"),.territory=tsc(u"Tanzania"),.revision=tsc(u"1.0"),.date=tsc(u"2011-03-07")},.monetary={.int_curr_symbol=tsc(u"TZS "),.currency_symbol=tsc(u"TSh"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"J2"),tsc(u"J3"),tsc(u"J4"),tsc(u"J5"),tsc(u"Alh"),tsc(u"Ij"),tsc(u"J1")},.day={tsc(u"Jumapili"),tsc(u"Jumatatu"),tsc(u"Jumanne"),tsc(u"Jumatano"),tsc(u"Alhamisi"),tsc(u"Ijumaa"),tsc(u"Jumamosi")},.abmon={tsc(u"Jan"),tsc(u"Feb"),tsc(u"Mac"),tsc(u"Apr"),tsc(u"Mei"),tsc(u"Jun"),tsc(u"Jul"),tsc(u"Ago"),tsc(u"Sep"),tsc(u"Okt"),tsc(u"Nov"),tsc(u"Des")},.mon={tsc(u"Januari"),tsc(u"Februari"),tsc(u"Machi"),tsc(u"Aprili"),tsc(u"Mei"),tsc(u"Juni"),tsc(u"Julai"),tsc(u"Agosti"),tsc(u"Septemba"),tsc(u"Oktoba"),tsc(u"Novemba"),tsc(u"Desemba")},.d_t_fmt=tsc(u"%e %B %Y %I:%M:%S %p"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%I:%M:%S %p"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"%e %B %Y %I:%M:%S %p %Z"),.am_pm={tsc(u"asubuhi"),tsc(u"alasiri")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1nNyY]"),.noexpr=tsc(u"^[-0hHlL]"),.yesstr=tsc(u"Ndiyo"),.nostr=tsc(u"Hapana")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"%c %a %l"),.tel_dom_fmt=tsc(u"%A %l"),.int_select=tsc(u"000"),.int_prefix=tsc(u"255")},.name={.name_fmt=tsc(u"%p%t%g%m%t%f"),.name_mr=tsc(u"Bw."),.name_ms=tsc(u"Bi.")},.address={.postal_fmt=tsc(u"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(u"Tanzania"),.country_post=tsc(u"TZ"),.country_ab2=tsc(u"TZ"),.country_ab3=tsc(u"TZA"),.country_num=834,.country_car=tsc(u"EAT"),.lang_name=tsc(u"Kiswahili"),.lang_ab=tsc(u"sw"),.lang_term=tsc(u"swa"),.lang_lib=tsc(u"swa")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Swahili locale for Tanzania"),.source=tsc(U"Kamusi Project\t\t;\t\tfast_io"),.contact=tsc(U"Martin Benjamin\t\t;\t\tfast_io"),.email=tsc(U"locales@kamusi.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Swahili"),.territory=tsc(U"Tanzania"),.revision=tsc(U"1.0"),.date=tsc(U"2011-03-07")},.monetary={.int_curr_symbol=tsc(U"TZS "),.currency_symbol=tsc(U"TSh"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"J2"),tsc(U"J3"),tsc(U"J4"),tsc(U"J5"),tsc(U"Alh"),tsc(U"Ij"),tsc(U"J1")},.day={tsc(U"Jumapili"),tsc(U"Jumatatu"),tsc(U"Jumanne"),tsc(U"Jumatano"),tsc(U"Alhamisi"),tsc(U"Ijumaa"),tsc(U"Jumamosi")},.abmon={tsc(U"Jan"),tsc(U"Feb"),tsc(U"Mac"),tsc(U"Apr"),tsc(U"Mei"),tsc(U"Jun"),tsc(U"Jul"),tsc(U"Ago"),tsc(U"Sep"),tsc(U"Okt"),tsc(U"Nov"),tsc(U"Des")},.mon={tsc(U"Januari"),tsc(U"Februari"),tsc(U"Machi"),tsc(U"Aprili"),tsc(U"Mei"),tsc(U"Juni"),tsc(U"Julai"),tsc(U"Agosti"),tsc(U"Septemba"),tsc(U"Oktoba"),tsc(U"Novemba"),tsc(U"Desemba")},.d_t_fmt=tsc(U"%e %B %Y %I:%M:%S %p"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%I:%M:%S %p"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"%e %B %Y %I:%M:%S %p %Z"),.am_pm={tsc(U"asubuhi"),tsc(U"alasiri")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1nNyY]"),.noexpr=tsc(U"^[-0hHlL]"),.yesstr=tsc(U"Ndiyo"),.nostr=tsc(U"Hapana")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"%c %a %l"),.tel_dom_fmt=tsc(U"%A %l"),.int_select=tsc(U"000"),.int_prefix=tsc(U"255")},.name={.name_fmt=tsc(U"%p%t%g%m%t%f"),.name_mr=tsc(U"Bw."),.name_ms=tsc(U"Bi.")},.address={.postal_fmt=tsc(U"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(U"Tanzania"),.country_post=tsc(U"TZ"),.country_ab2=tsc(U"TZ"),.country_ab3=tsc(U"TZA"),.country_num=834,.country_car=tsc(U"EAT"),.lang_name=tsc(U"Kiswahili"),.lang_ab=tsc(U"sw"),.lang_term=tsc(U"swa"),.lang_lib=tsc(U"swa")},.measurement={.measurement=1}};


}
}

#include"../main.h"