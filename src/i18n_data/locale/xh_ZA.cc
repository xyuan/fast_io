#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Xhosa locale for South Africa"),.source=tsc("Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc("PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc("Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc("dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Xhosa"),.territory=tsc("South Africa"),.revision=tsc("0.3"),.date=tsc("2005-10-13")},.monetary={.int_curr_symbol=tsc("ZAR "),.currency_symbol=tsc("R"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Caw"),tsc("Mvu"),tsc("Bin"),tsc("Tha"),tsc("Sin"),tsc("Hla"),tsc("Mgq")},.day={tsc("iCawa"),tsc("uMvulo"),tsc("lwesiBini"),tsc("lwesiThathu"),tsc("ulweSine"),tsc("lwesiHlanu"),tsc("uMgqibelo")},.abmon={tsc("Mqu"),tsc("Mdu"),tsc("Kwi"),tsc("Tsh"),tsc("Can"),tsc("Sil"),tsc("Kha"),tsc("Thu"),tsc("Msi"),tsc("Dwa"),tsc("Nka"),tsc("Mng")},.mon={tsc("eyoMqungu"),tsc("eyoMdumba"),tsc("eyoKwindla"),tsc("uTshazimpuzi"),tsc("uCanzibe"),tsc("eyeSilimela"),tsc("eyeKhala"),tsc("eyeThupa"),tsc("eyoMsintsi"),tsc("eyeDwarha"),tsc("eyeNkanga"),tsc("eyoMnga")},.d_t_fmt=tsc("%a %-e %b %Y %T %Z"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYeE]"),.noexpr=tsc("^[-0nNhH]"),.yesstr=tsc("ewe"),.nostr=tsc("hayi")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("(%A) %l"),.int_select=tsc("00"),.int_prefix=tsc("27")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_miss=tsc("Nkosazana"),.name_mr=tsc("Mnumzana"),.name_mrs=tsc("Nkosikazi"),.name_ms=tsc("")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("uMzantsi Afrika"),.country_post=tsc("ZA"),.country_ab2=tsc("ZA"),.country_ab3=tsc("ZAF"),.country_num=710,.country_car=tsc("ZA"),.lang_name=tsc("isiXhosa"),.lang_ab=tsc("xh"),.lang_term=tsc("xho"),.lang_lib=tsc("xho")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Xhosa locale for South Africa"),.source=tsc(L"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(L"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(L"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(L"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Xhosa"),.territory=tsc(L"South Africa"),.revision=tsc(L"0.3"),.date=tsc(L"2005-10-13")},.monetary={.int_curr_symbol=tsc(L"ZAR "),.currency_symbol=tsc(L"R"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Caw"),tsc(L"Mvu"),tsc(L"Bin"),tsc(L"Tha"),tsc(L"Sin"),tsc(L"Hla"),tsc(L"Mgq")},.day={tsc(L"iCawa"),tsc(L"uMvulo"),tsc(L"lwesiBini"),tsc(L"lwesiThathu"),tsc(L"ulweSine"),tsc(L"lwesiHlanu"),tsc(L"uMgqibelo")},.abmon={tsc(L"Mqu"),tsc(L"Mdu"),tsc(L"Kwi"),tsc(L"Tsh"),tsc(L"Can"),tsc(L"Sil"),tsc(L"Kha"),tsc(L"Thu"),tsc(L"Msi"),tsc(L"Dwa"),tsc(L"Nka"),tsc(L"Mng")},.mon={tsc(L"eyoMqungu"),tsc(L"eyoMdumba"),tsc(L"eyoKwindla"),tsc(L"uTshazimpuzi"),tsc(L"uCanzibe"),tsc(L"eyeSilimela"),tsc(L"eyeKhala"),tsc(L"eyeThupa"),tsc(L"eyoMsintsi"),tsc(L"eyeDwarha"),tsc(L"eyeNkanga"),tsc(L"eyoMnga")},.d_t_fmt=tsc(L"%a %-e %b %Y %T %Z"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYeE]"),.noexpr=tsc(L"^[-0nNhH]"),.yesstr=tsc(L"ewe"),.nostr=tsc(L"hayi")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"(%A) %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"27")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_miss=tsc(L"Nkosazana"),.name_mr=tsc(L"Mnumzana"),.name_mrs=tsc(L"Nkosikazi"),.name_ms=tsc(L"")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"uMzantsi Afrika"),.country_post=tsc(L"ZA"),.country_ab2=tsc(L"ZA"),.country_ab3=tsc(L"ZAF"),.country_num=710,.country_car=tsc(L"ZA"),.lang_name=tsc(L"isiXhosa"),.lang_ab=tsc(L"xh"),.lang_term=tsc(L"xho"),.lang_lib=tsc(L"xho")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Xhosa locale for South Africa"),.source=tsc(u8"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(u8"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u8"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(u8"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Xhosa"),.territory=tsc(u8"South Africa"),.revision=tsc(u8"0.3"),.date=tsc(u8"2005-10-13")},.monetary={.int_curr_symbol=tsc(u8"ZAR "),.currency_symbol=tsc(u8"R"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Caw"),tsc(u8"Mvu"),tsc(u8"Bin"),tsc(u8"Tha"),tsc(u8"Sin"),tsc(u8"Hla"),tsc(u8"Mgq")},.day={tsc(u8"iCawa"),tsc(u8"uMvulo"),tsc(u8"lwesiBini"),tsc(u8"lwesiThathu"),tsc(u8"ulweSine"),tsc(u8"lwesiHlanu"),tsc(u8"uMgqibelo")},.abmon={tsc(u8"Mqu"),tsc(u8"Mdu"),tsc(u8"Kwi"),tsc(u8"Tsh"),tsc(u8"Can"),tsc(u8"Sil"),tsc(u8"Kha"),tsc(u8"Thu"),tsc(u8"Msi"),tsc(u8"Dwa"),tsc(u8"Nka"),tsc(u8"Mng")},.mon={tsc(u8"eyoMqungu"),tsc(u8"eyoMdumba"),tsc(u8"eyoKwindla"),tsc(u8"uTshazimpuzi"),tsc(u8"uCanzibe"),tsc(u8"eyeSilimela"),tsc(u8"eyeKhala"),tsc(u8"eyeThupa"),tsc(u8"eyoMsintsi"),tsc(u8"eyeDwarha"),tsc(u8"eyeNkanga"),tsc(u8"eyoMnga")},.d_t_fmt=tsc(u8"%a %-e %b %Y %T %Z"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYeE]"),.noexpr=tsc(u8"^[-0nNhH]"),.yesstr=tsc(u8"ewe"),.nostr=tsc(u8"hayi")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"(%A) %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"27")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_miss=tsc(u8"Nkosazana"),.name_mr=tsc(u8"Mnumzana"),.name_mrs=tsc(u8"Nkosikazi"),.name_ms=tsc(u8"")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"uMzantsi Afrika"),.country_post=tsc(u8"ZA"),.country_ab2=tsc(u8"ZA"),.country_ab3=tsc(u8"ZAF"),.country_num=710,.country_car=tsc(u8"ZA"),.lang_name=tsc(u8"isiXhosa"),.lang_ab=tsc(u8"xh"),.lang_term=tsc(u8"xho"),.lang_lib=tsc(u8"xho")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Xhosa locale for South Africa"),.source=tsc(u"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(u"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(u"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(u"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Xhosa"),.territory=tsc(u"South Africa"),.revision=tsc(u"0.3"),.date=tsc(u"2005-10-13")},.monetary={.int_curr_symbol=tsc(u"ZAR "),.currency_symbol=tsc(u"R"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Caw"),tsc(u"Mvu"),tsc(u"Bin"),tsc(u"Tha"),tsc(u"Sin"),tsc(u"Hla"),tsc(u"Mgq")},.day={tsc(u"iCawa"),tsc(u"uMvulo"),tsc(u"lwesiBini"),tsc(u"lwesiThathu"),tsc(u"ulweSine"),tsc(u"lwesiHlanu"),tsc(u"uMgqibelo")},.abmon={tsc(u"Mqu"),tsc(u"Mdu"),tsc(u"Kwi"),tsc(u"Tsh"),tsc(u"Can"),tsc(u"Sil"),tsc(u"Kha"),tsc(u"Thu"),tsc(u"Msi"),tsc(u"Dwa"),tsc(u"Nka"),tsc(u"Mng")},.mon={tsc(u"eyoMqungu"),tsc(u"eyoMdumba"),tsc(u"eyoKwindla"),tsc(u"uTshazimpuzi"),tsc(u"uCanzibe"),tsc(u"eyeSilimela"),tsc(u"eyeKhala"),tsc(u"eyeThupa"),tsc(u"eyoMsintsi"),tsc(u"eyeDwarha"),tsc(u"eyeNkanga"),tsc(u"eyoMnga")},.d_t_fmt=tsc(u"%a %-e %b %Y %T %Z"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYeE]"),.noexpr=tsc(u"^[-0nNhH]"),.yesstr=tsc(u"ewe"),.nostr=tsc(u"hayi")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"(%A) %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"27")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_miss=tsc(u"Nkosazana"),.name_mr=tsc(u"Mnumzana"),.name_mrs=tsc(u"Nkosikazi"),.name_ms=tsc(u"")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"uMzantsi Afrika"),.country_post=tsc(u"ZA"),.country_ab2=tsc(u"ZA"),.country_ab3=tsc(u"ZAF"),.country_num=710,.country_car=tsc(u"ZA"),.lang_name=tsc(u"isiXhosa"),.lang_ab=tsc(u"xh"),.lang_term=tsc(u"xho"),.lang_lib=tsc(u"xho")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Xhosa locale for South Africa"),.source=tsc(U"Zuza Software Foundation (Translate.org.za)\t\t;\t\tfast_io"),.address=tsc(U"PO Box 28364, Sunnyside, 0132, South Africa\t\t;\t\thttps://github.com/expnkx/fast_io"),.contact=tsc(U"Dwayne Bailey\t\t;\t\tfast_io"),.email=tsc(U"dwayne@translate.org.za;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Xhosa"),.territory=tsc(U"South Africa"),.revision=tsc(U"0.3"),.date=tsc(U"2005-10-13")},.monetary={.int_curr_symbol=tsc(U"ZAR "),.currency_symbol=tsc(U"R"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Caw"),tsc(U"Mvu"),tsc(U"Bin"),tsc(U"Tha"),tsc(U"Sin"),tsc(U"Hla"),tsc(U"Mgq")},.day={tsc(U"iCawa"),tsc(U"uMvulo"),tsc(U"lwesiBini"),tsc(U"lwesiThathu"),tsc(U"ulweSine"),tsc(U"lwesiHlanu"),tsc(U"uMgqibelo")},.abmon={tsc(U"Mqu"),tsc(U"Mdu"),tsc(U"Kwi"),tsc(U"Tsh"),tsc(U"Can"),tsc(U"Sil"),tsc(U"Kha"),tsc(U"Thu"),tsc(U"Msi"),tsc(U"Dwa"),tsc(U"Nka"),tsc(U"Mng")},.mon={tsc(U"eyoMqungu"),tsc(U"eyoMdumba"),tsc(U"eyoKwindla"),tsc(U"uTshazimpuzi"),tsc(U"uCanzibe"),tsc(U"eyeSilimela"),tsc(U"eyeKhala"),tsc(U"eyeThupa"),tsc(U"eyoMsintsi"),tsc(U"eyeDwarha"),tsc(U"eyeNkanga"),tsc(U"eyoMnga")},.d_t_fmt=tsc(U"%a %-e %b %Y %T %Z"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %b %-e %H:%M:%S %Z %Y"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYeE]"),.noexpr=tsc(U"^[-0nNhH]"),.yesstr=tsc(U"ewe"),.nostr=tsc(U"hayi")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"(%A) %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"27")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_miss=tsc(U"Nkosazana"),.name_mr=tsc(U"Mnumzana"),.name_mrs=tsc(U"Nkosikazi"),.name_ms=tsc(U"")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"uMzantsi Afrika"),.country_post=tsc(U"ZA"),.country_ab2=tsc(U"ZA"),.country_ab3=tsc(U"ZAF"),.country_num=710,.country_car=tsc(U"ZA"),.lang_name=tsc(U"isiXhosa"),.lang_ab=tsc(U"xh"),.lang_term=tsc(U"xho"),.lang_lib=tsc(U"xho")},.measurement={.measurement=1}};


}
}

#include"../main.h"