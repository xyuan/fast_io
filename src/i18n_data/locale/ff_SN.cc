#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Fulah locale for Senegal"),.source=tsc("Pular-Fulfulde.org\t\t;\t\tfast_io"),.contact=tsc("Ibrahima Sarr\t\t;\t\tfast_io"),.email=tsc("admin@pulaar-fulfulde.org;euloanty@live.com"),.language=tsc("Fulah"),.territory=tsc("Senegal"),.revision=tsc("1.0"),.date=tsc("2011-03-28")},.monetary={.int_curr_symbol=tsc("XOF "),.currency_symbol=tsc("CFA"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("dew"),tsc("aaɓ"),tsc("maw"),tsc("nje"),tsc("naa"),tsc("mwd"),tsc("hbi")},.day={tsc("dewo"),tsc("aaɓnde"),tsc("mawbaare"),tsc("njeslaare"),tsc("naasaande"),tsc("mawnde"),tsc("hoore-biir")},.abmon={tsc("sii"),tsc("col"),tsc("mbo"),tsc("see"),tsc("duu"),tsc("kor"),tsc("mor"),tsc("juk"),tsc("slt"),tsc("yar"),tsc("jol"),tsc("bow")},.mon={tsc("siilo"),tsc("colte"),tsc("mbooy"),tsc("seeɗto"),tsc("duujal"),tsc("korse"),tsc("morso"),tsc("juko"),tsc("siilto"),tsc("yarkomaa"),tsc("jolal"),tsc("bowte")},.d_t_fmt=tsc("%a %d %b %Y %R"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%R"),.date_fmt=tsc("%a %d %b %Y %R %Z"),.am_pm={tsc("subaka"),tsc("kikiiɗe")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYeE]"),.noexpr=tsc("^[-0nNaA]"),.yesstr=tsc("Eey"),.nostr=tsc("Alaa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("%c %a %l"),.tel_dom_fmt=tsc("%a %l"),.int_select=tsc("00"),.int_prefix=tsc("221")},.name={.name_fmt=tsc("%p%t%g%m%t%f"),.name_gen=tsc("kaddol"),.name_miss=tsc("sokna"),.name_mr=tsc("ceerno"),.name_mrs=tsc("sokna"),.name_ms=tsc("sokna")},.address={.postal_fmt=tsc("%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc("Senegaal"),.country_post=tsc("SN"),.country_ab2=tsc("SN"),.country_ab3=tsc("SEN"),.country_num=686,.country_car=tsc("SN"),.lang_name=tsc("Pulaar"),.lang_ab=tsc("ff"),.lang_term=tsc("ful"),.lang_lib=tsc("ful")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Fulah locale for Senegal"),.source=tsc(L"Pular-Fulfulde.org\t\t;\t\tfast_io"),.contact=tsc(L"Ibrahima Sarr\t\t;\t\tfast_io"),.email=tsc(L"admin@pulaar-fulfulde.org;euloanty@live.com"),.language=tsc(L"Fulah"),.territory=tsc(L"Senegal"),.revision=tsc(L"1.0"),.date=tsc(L"2011-03-28")},.monetary={.int_curr_symbol=tsc(L"XOF "),.currency_symbol=tsc(L"CFA"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"dew"),tsc(L"aaɓ"),tsc(L"maw"),tsc(L"nje"),tsc(L"naa"),tsc(L"mwd"),tsc(L"hbi")},.day={tsc(L"dewo"),tsc(L"aaɓnde"),tsc(L"mawbaare"),tsc(L"njeslaare"),tsc(L"naasaande"),tsc(L"mawnde"),tsc(L"hoore-biir")},.abmon={tsc(L"sii"),tsc(L"col"),tsc(L"mbo"),tsc(L"see"),tsc(L"duu"),tsc(L"kor"),tsc(L"mor"),tsc(L"juk"),tsc(L"slt"),tsc(L"yar"),tsc(L"jol"),tsc(L"bow")},.mon={tsc(L"siilo"),tsc(L"colte"),tsc(L"mbooy"),tsc(L"seeɗto"),tsc(L"duujal"),tsc(L"korse"),tsc(L"morso"),tsc(L"juko"),tsc(L"siilto"),tsc(L"yarkomaa"),tsc(L"jolal"),tsc(L"bowte")},.d_t_fmt=tsc(L"%a %d %b %Y %R"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%R"),.date_fmt=tsc(L"%a %d %b %Y %R %Z"),.am_pm={tsc(L"subaka"),tsc(L"kikiiɗe")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYeE]"),.noexpr=tsc(L"^[-0nNaA]"),.yesstr=tsc(L"Eey"),.nostr=tsc(L"Alaa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"%c %a %l"),.tel_dom_fmt=tsc(L"%a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"221")},.name={.name_fmt=tsc(L"%p%t%g%m%t%f"),.name_gen=tsc(L"kaddol"),.name_miss=tsc(L"sokna"),.name_mr=tsc(L"ceerno"),.name_mrs=tsc(L"sokna"),.name_ms=tsc(L"sokna")},.address={.postal_fmt=tsc(L"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(L"Senegaal"),.country_post=tsc(L"SN"),.country_ab2=tsc(L"SN"),.country_ab3=tsc(L"SEN"),.country_num=686,.country_car=tsc(L"SN"),.lang_name=tsc(L"Pulaar"),.lang_ab=tsc(L"ff"),.lang_term=tsc(L"ful"),.lang_lib=tsc(L"ful")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Fulah locale for Senegal"),.source=tsc(u8"Pular-Fulfulde.org\t\t;\t\tfast_io"),.contact=tsc(u8"Ibrahima Sarr\t\t;\t\tfast_io"),.email=tsc(u8"admin@pulaar-fulfulde.org;euloanty@live.com"),.language=tsc(u8"Fulah"),.territory=tsc(u8"Senegal"),.revision=tsc(u8"1.0"),.date=tsc(u8"2011-03-28")},.monetary={.int_curr_symbol=tsc(u8"XOF "),.currency_symbol=tsc(u8"CFA"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"dew"),tsc(u8"aaɓ"),tsc(u8"maw"),tsc(u8"nje"),tsc(u8"naa"),tsc(u8"mwd"),tsc(u8"hbi")},.day={tsc(u8"dewo"),tsc(u8"aaɓnde"),tsc(u8"mawbaare"),tsc(u8"njeslaare"),tsc(u8"naasaande"),tsc(u8"mawnde"),tsc(u8"hoore-biir")},.abmon={tsc(u8"sii"),tsc(u8"col"),tsc(u8"mbo"),tsc(u8"see"),tsc(u8"duu"),tsc(u8"kor"),tsc(u8"mor"),tsc(u8"juk"),tsc(u8"slt"),tsc(u8"yar"),tsc(u8"jol"),tsc(u8"bow")},.mon={tsc(u8"siilo"),tsc(u8"colte"),tsc(u8"mbooy"),tsc(u8"seeɗto"),tsc(u8"duujal"),tsc(u8"korse"),tsc(u8"morso"),tsc(u8"juko"),tsc(u8"siilto"),tsc(u8"yarkomaa"),tsc(u8"jolal"),tsc(u8"bowte")},.d_t_fmt=tsc(u8"%a %d %b %Y %R"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%R"),.date_fmt=tsc(u8"%a %d %b %Y %R %Z"),.am_pm={tsc(u8"subaka"),tsc(u8"kikiiɗe")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYeE]"),.noexpr=tsc(u8"^[-0nNaA]"),.yesstr=tsc(u8"Eey"),.nostr=tsc(u8"Alaa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"%c %a %l"),.tel_dom_fmt=tsc(u8"%a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"221")},.name={.name_fmt=tsc(u8"%p%t%g%m%t%f"),.name_gen=tsc(u8"kaddol"),.name_miss=tsc(u8"sokna"),.name_mr=tsc(u8"ceerno"),.name_mrs=tsc(u8"sokna"),.name_ms=tsc(u8"sokna")},.address={.postal_fmt=tsc(u8"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(u8"Senegaal"),.country_post=tsc(u8"SN"),.country_ab2=tsc(u8"SN"),.country_ab3=tsc(u8"SEN"),.country_num=686,.country_car=tsc(u8"SN"),.lang_name=tsc(u8"Pulaar"),.lang_ab=tsc(u8"ff"),.lang_term=tsc(u8"ful"),.lang_lib=tsc(u8"ful")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Fulah locale for Senegal"),.source=tsc(u"Pular-Fulfulde.org\t\t;\t\tfast_io"),.contact=tsc(u"Ibrahima Sarr\t\t;\t\tfast_io"),.email=tsc(u"admin@pulaar-fulfulde.org;euloanty@live.com"),.language=tsc(u"Fulah"),.territory=tsc(u"Senegal"),.revision=tsc(u"1.0"),.date=tsc(u"2011-03-28")},.monetary={.int_curr_symbol=tsc(u"XOF "),.currency_symbol=tsc(u"CFA"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"dew"),tsc(u"aaɓ"),tsc(u"maw"),tsc(u"nje"),tsc(u"naa"),tsc(u"mwd"),tsc(u"hbi")},.day={tsc(u"dewo"),tsc(u"aaɓnde"),tsc(u"mawbaare"),tsc(u"njeslaare"),tsc(u"naasaande"),tsc(u"mawnde"),tsc(u"hoore-biir")},.abmon={tsc(u"sii"),tsc(u"col"),tsc(u"mbo"),tsc(u"see"),tsc(u"duu"),tsc(u"kor"),tsc(u"mor"),tsc(u"juk"),tsc(u"slt"),tsc(u"yar"),tsc(u"jol"),tsc(u"bow")},.mon={tsc(u"siilo"),tsc(u"colte"),tsc(u"mbooy"),tsc(u"seeɗto"),tsc(u"duujal"),tsc(u"korse"),tsc(u"morso"),tsc(u"juko"),tsc(u"siilto"),tsc(u"yarkomaa"),tsc(u"jolal"),tsc(u"bowte")},.d_t_fmt=tsc(u"%a %d %b %Y %R"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%R"),.date_fmt=tsc(u"%a %d %b %Y %R %Z"),.am_pm={tsc(u"subaka"),tsc(u"kikiiɗe")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYeE]"),.noexpr=tsc(u"^[-0nNaA]"),.yesstr=tsc(u"Eey"),.nostr=tsc(u"Alaa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"%c %a %l"),.tel_dom_fmt=tsc(u"%a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"221")},.name={.name_fmt=tsc(u"%p%t%g%m%t%f"),.name_gen=tsc(u"kaddol"),.name_miss=tsc(u"sokna"),.name_mr=tsc(u"ceerno"),.name_mrs=tsc(u"sokna"),.name_ms=tsc(u"sokna")},.address={.postal_fmt=tsc(u"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(u"Senegaal"),.country_post=tsc(u"SN"),.country_ab2=tsc(u"SN"),.country_ab3=tsc(u"SEN"),.country_num=686,.country_car=tsc(u"SN"),.lang_name=tsc(u"Pulaar"),.lang_ab=tsc(u"ff"),.lang_term=tsc(u"ful"),.lang_lib=tsc(u"ful")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Fulah locale for Senegal"),.source=tsc(U"Pular-Fulfulde.org\t\t;\t\tfast_io"),.contact=tsc(U"Ibrahima Sarr\t\t;\t\tfast_io"),.email=tsc(U"admin@pulaar-fulfulde.org;euloanty@live.com"),.language=tsc(U"Fulah"),.territory=tsc(U"Senegal"),.revision=tsc(U"1.0"),.date=tsc(U"2011-03-28")},.monetary={.int_curr_symbol=tsc(U"XOF "),.currency_symbol=tsc(U"CFA"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"dew"),tsc(U"aaɓ"),tsc(U"maw"),tsc(U"nje"),tsc(U"naa"),tsc(U"mwd"),tsc(U"hbi")},.day={tsc(U"dewo"),tsc(U"aaɓnde"),tsc(U"mawbaare"),tsc(U"njeslaare"),tsc(U"naasaande"),tsc(U"mawnde"),tsc(U"hoore-biir")},.abmon={tsc(U"sii"),tsc(U"col"),tsc(U"mbo"),tsc(U"see"),tsc(U"duu"),tsc(U"kor"),tsc(U"mor"),tsc(U"juk"),tsc(U"slt"),tsc(U"yar"),tsc(U"jol"),tsc(U"bow")},.mon={tsc(U"siilo"),tsc(U"colte"),tsc(U"mbooy"),tsc(U"seeɗto"),tsc(U"duujal"),tsc(U"korse"),tsc(U"morso"),tsc(U"juko"),tsc(U"siilto"),tsc(U"yarkomaa"),tsc(U"jolal"),tsc(U"bowte")},.d_t_fmt=tsc(U"%a %d %b %Y %R"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%R"),.date_fmt=tsc(U"%a %d %b %Y %R %Z"),.am_pm={tsc(U"subaka"),tsc(U"kikiiɗe")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYeE]"),.noexpr=tsc(U"^[-0nNaA]"),.yesstr=tsc(U"Eey"),.nostr=tsc(U"Alaa")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"%c %a %l"),.tel_dom_fmt=tsc(U"%a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"221")},.name={.name_fmt=tsc(U"%p%t%g%m%t%f"),.name_gen=tsc(U"kaddol"),.name_miss=tsc(U"sokna"),.name_mr=tsc(U"ceerno"),.name_mrs=tsc(U"sokna"),.name_ms=tsc(U"sokna")},.address={.postal_fmt=tsc(U"%a%N%f%N%d%N%b%N%h %s %e %r%N%T, %S %z%N%c%N"),.country_name=tsc(U"Senegaal"),.country_post=tsc(U"SN"),.country_ab2=tsc(U"SN"),.country_ab3=tsc(U"SEN"),.country_num=686,.country_car=tsc(U"SN"),.lang_name=tsc(U"Pulaar"),.lang_ab=tsc(U"ff"),.lang_term=tsc(U"ful"),.lang_lib=tsc(U"ful")},.measurement={.measurement=1}};


}
}

#include"../main.h"