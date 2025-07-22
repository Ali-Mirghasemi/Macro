#ifndef _MACRO_UTILS_H_
#define _MACRO_UTILS_H_

#define __MACRO_DUMMY__(...)                            __VA_ARGS__
#define __MACRO_DUMMY_(...)                             __MACRO_DUMMY__(__VA_ARGS__)
#define __MACRO_DUMMY(...)                              __MACRO_DUMMY_(__VA_ARGS__)

#define __MACRO_ARRAY_LEN__(ARR)                        (sizeof(ARR) / sizeof(ARR[0]))
#define __MACRO_ARRAY_LEN_(ARR)                         __MACRO_ARRAY_LEN__(ARR)
#define __MACRO_ARRAY_LEN(ARR)                          __MACRO_ARRAY_LEN_(ARR)

#define __MACRO_TUPLE_EXPAND__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND_(...)                      __MACRO_TUPLE_EXPAND__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND(X)                         __MACRO_TUPLE_EXPAND_ X

#define __MACRO_TUPLE_EXPANDX(N, X)                     __MACRO_TUPLE_EXPAND ##N (X)

#define __MACRO_VER_STR_BUILD__(major, minor, fix)      #major "." #minor "." #fix
#define __MACRO_VER_STR_BUILD_(major, minor, fix)       __MACRO_VER_STR_BUILD__(major, minor, fix)
#define __MACRO_VER_STR_BUILD(major, minor, fix)        __MACRO_VER_STR_BUILD_(major, minor, fix)

#define __MACRO_VER_BUILD__(major, minor, fix)          ((major * 1000000UL) + (minor * 1000UL) + (fix))
#define __MACRO_VER_BUILD_(major, minor, fix)           __MACRO_VER_BUILD__(major, minor, fix)
#define __MACRO_VER_BUILD(major, minor, fix)            __MACRO_VER_BUILD_(major, minor, fix)

// ----------------------------------------------------------------------------------------------------------

#define __MACRO_TUPLE_EXPAND0__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND0_(...)                      __MACRO_TUPLE_EXPAND0__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND0(X)                         __MACRO_TUPLE_EXPAND0_ X
#define __MACRO_TUPLE_EXPAND1__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND1_(...)                      __MACRO_TUPLE_EXPAND1__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND1(X)                         __MACRO_TUPLE_EXPAND1_ X
#define __MACRO_TUPLE_EXPAND2__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND2_(...)                      __MACRO_TUPLE_EXPAND2__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND2(X)                         __MACRO_TUPLE_EXPAND2_ X
#define __MACRO_TUPLE_EXPAND3__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND3_(...)                      __MACRO_TUPLE_EXPAND3__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND3(X)                         __MACRO_TUPLE_EXPAND3_ X
#define __MACRO_TUPLE_EXPAND4__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND4_(...)                      __MACRO_TUPLE_EXPAND4__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND4(X)                         __MACRO_TUPLE_EXPAND4_ X
#define __MACRO_TUPLE_EXPAND5__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND5_(...)                      __MACRO_TUPLE_EXPAND5__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND5(X)                         __MACRO_TUPLE_EXPAND5_ X
#define __MACRO_TUPLE_EXPAND6__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND6_(...)                      __MACRO_TUPLE_EXPAND6__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND6(X)                         __MACRO_TUPLE_EXPAND6_ X
#define __MACRO_TUPLE_EXPAND7__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND7_(...)                      __MACRO_TUPLE_EXPAND7__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND7(X)                         __MACRO_TUPLE_EXPAND7_ X
#define __MACRO_TUPLE_EXPAND8__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND8_(...)                      __MACRO_TUPLE_EXPAND8__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND8(X)                         __MACRO_TUPLE_EXPAND8_ X
#define __MACRO_TUPLE_EXPAND9__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND9_(...)                      __MACRO_TUPLE_EXPAND9__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND9(X)                         __MACRO_TUPLE_EXPAND9_ X
#define __MACRO_TUPLE_EXPAND10__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND10_(...)                    __MACRO_TUPLE_EXPAND10__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND10(X)                       __MACRO_TUPLE_EXPAND10_ X
#define __MACRO_TUPLE_EXPAND11__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND11_(...)                    __MACRO_TUPLE_EXPAND11__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND11(X)                       __MACRO_TUPLE_EXPAND11_ X
#define __MACRO_TUPLE_EXPAND12__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND12_(...)                    __MACRO_TUPLE_EXPAND12__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND12(X)                       __MACRO_TUPLE_EXPAND12_ X
#define __MACRO_TUPLE_EXPAND13__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND13_(...)                    __MACRO_TUPLE_EXPAND13__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND13(X)                       __MACRO_TUPLE_EXPAND13_ X
#define __MACRO_TUPLE_EXPAND14__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND14_(...)                    __MACRO_TUPLE_EXPAND14__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND14(X)                       __MACRO_TUPLE_EXPAND14_ X
#define __MACRO_TUPLE_EXPAND15__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND15_(...)                    __MACRO_TUPLE_EXPAND15__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND15(X)                       __MACRO_TUPLE_EXPAND15_ X
#define __MACRO_TUPLE_EXPAND16__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND16_(...)                    __MACRO_TUPLE_EXPAND16__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND16(X)                       __MACRO_TUPLE_EXPAND16_ X
#define __MACRO_TUPLE_EXPAND17__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND17_(...)                    __MACRO_TUPLE_EXPAND17__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND17(X)                       __MACRO_TUPLE_EXPAND17_ X
#define __MACRO_TUPLE_EXPAND18__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND18_(...)                    __MACRO_TUPLE_EXPAND18__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND18(X)                       __MACRO_TUPLE_EXPAND18_ X
#define __MACRO_TUPLE_EXPAND19__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND19_(...)                    __MACRO_TUPLE_EXPAND19__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND19(X)                       __MACRO_TUPLE_EXPAND19_ X
#define __MACRO_TUPLE_EXPAND20__(...)                   __VA_ARGS__                         
#define __MACRO_TUPLE_EXPAND20_(...)                    __MACRO_TUPLE_EXPAND20__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND20(X)                       __MACRO_TUPLE_EXPAND20_ X                           
#define __MACRO_TUPLE_EXPAND21__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND21_(...)                    __MACRO_TUPLE_EXPAND21__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND21(X)                       __MACRO_TUPLE_EXPAND21_ X                           
#define __MACRO_TUPLE_EXPAND22__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND22_(...)                    __MACRO_TUPLE_EXPAND22__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND22(X)                       __MACRO_TUPLE_EXPAND22_ X                           
#define __MACRO_TUPLE_EXPAND23__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND23_(...)                    __MACRO_TUPLE_EXPAND23__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND23(X)                       __MACRO_TUPLE_EXPAND23_ X                           
#define __MACRO_TUPLE_EXPAND24__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND24_(...)                    __MACRO_TUPLE_EXPAND24__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND24(X)                       __MACRO_TUPLE_EXPAND24_ X                           
#define __MACRO_TUPLE_EXPAND25__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND25_(...)                    __MACRO_TUPLE_EXPAND25__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND25(X)                       __MACRO_TUPLE_EXPAND25_ X                           
#define __MACRO_TUPLE_EXPAND26__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND26_(...)                    __MACRO_TUPLE_EXPAND26__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND26(X)                       __MACRO_TUPLE_EXPAND26_ X                           
#define __MACRO_TUPLE_EXPAND27__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND27_(...)                    __MACRO_TUPLE_EXPAND27__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND27(X)                       __MACRO_TUPLE_EXPAND27_ X                           
#define __MACRO_TUPLE_EXPAND28__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND28_(...)                    __MACRO_TUPLE_EXPAND28__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND28(X)                       __MACRO_TUPLE_EXPAND28_ X                           
#define __MACRO_TUPLE_EXPAND29__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND29_(...)                    __MACRO_TUPLE_EXPAND29__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND29(X)                       __MACRO_TUPLE_EXPAND29_ X                           
#define __MACRO_TUPLE_EXPAND30__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND30_(...)                    __MACRO_TUPLE_EXPAND30__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND30(X)                       __MACRO_TUPLE_EXPAND30_ X                           
#define __MACRO_TUPLE_EXPAND31__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND31_(...)                    __MACRO_TUPLE_EXPAND31__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND31(X)                       __MACRO_TUPLE_EXPAND31_ X                           
#define __MACRO_TUPLE_EXPAND32__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND32_(...)                    __MACRO_TUPLE_EXPAND32__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND32(X)                       __MACRO_TUPLE_EXPAND32_ X                           
#define __MACRO_TUPLE_EXPAND33__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND33_(...)                    __MACRO_TUPLE_EXPAND33__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND33(X)                       __MACRO_TUPLE_EXPAND33_ X                           
#define __MACRO_TUPLE_EXPAND34__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND34_(...)                    __MACRO_TUPLE_EXPAND34__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND34(X)                       __MACRO_TUPLE_EXPAND34_ X                           
#define __MACRO_TUPLE_EXPAND35__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND35_(...)                    __MACRO_TUPLE_EXPAND35__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND35(X)                       __MACRO_TUPLE_EXPAND35_ X                           
#define __MACRO_TUPLE_EXPAND36__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND36_(...)                    __MACRO_TUPLE_EXPAND36__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND36(X)                       __MACRO_TUPLE_EXPAND36_ X                           
#define __MACRO_TUPLE_EXPAND37__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND37_(...)                    __MACRO_TUPLE_EXPAND37__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND37(X)                       __MACRO_TUPLE_EXPAND37_ X                           
#define __MACRO_TUPLE_EXPAND38__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND38_(...)                    __MACRO_TUPLE_EXPAND38__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND38(X)                       __MACRO_TUPLE_EXPAND38_ X                           
#define __MACRO_TUPLE_EXPAND39__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND39_(...)                    __MACRO_TUPLE_EXPAND39__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND39(X)                       __MACRO_TUPLE_EXPAND39_ X                           
#define __MACRO_TUPLE_EXPAND40__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND40_(...)                    __MACRO_TUPLE_EXPAND40__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND40(X)                       __MACRO_TUPLE_EXPAND40_ X                           
#define __MACRO_TUPLE_EXPAND41__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND41_(...)                    __MACRO_TUPLE_EXPAND41__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND41(X)                       __MACRO_TUPLE_EXPAND41_ X                           
#define __MACRO_TUPLE_EXPAND42__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND42_(...)                    __MACRO_TUPLE_EXPAND42__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND42(X)                       __MACRO_TUPLE_EXPAND42_ X                           
#define __MACRO_TUPLE_EXPAND43__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND43_(...)                    __MACRO_TUPLE_EXPAND43__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND43(X)                       __MACRO_TUPLE_EXPAND43_ X                           
#define __MACRO_TUPLE_EXPAND44__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND44_(...)                    __MACRO_TUPLE_EXPAND44__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND44(X)                       __MACRO_TUPLE_EXPAND44_ X                           
#define __MACRO_TUPLE_EXPAND45__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND45_(...)                    __MACRO_TUPLE_EXPAND45__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND45(X)                       __MACRO_TUPLE_EXPAND45_ X                           
#define __MACRO_TUPLE_EXPAND46__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND46_(...)                    __MACRO_TUPLE_EXPAND46__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND46(X)                       __MACRO_TUPLE_EXPAND46_ X                           
#define __MACRO_TUPLE_EXPAND47__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND47_(...)                    __MACRO_TUPLE_EXPAND47__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND47(X)                       __MACRO_TUPLE_EXPAND47_ X                           
#define __MACRO_TUPLE_EXPAND48__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND48_(...)                    __MACRO_TUPLE_EXPAND48__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND48(X)                       __MACRO_TUPLE_EXPAND48_ X                           
#define __MACRO_TUPLE_EXPAND49__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND49_(...)                    __MACRO_TUPLE_EXPAND49__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND49(X)                       __MACRO_TUPLE_EXPAND49_ X                           
#define __MACRO_TUPLE_EXPAND50__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND50_(...)                    __MACRO_TUPLE_EXPAND50__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND50(X)                       __MACRO_TUPLE_EXPAND50_ X                           
#define __MACRO_TUPLE_EXPAND51__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND51_(...)                    __MACRO_TUPLE_EXPAND51__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND51(X)                       __MACRO_TUPLE_EXPAND51_ X                           
#define __MACRO_TUPLE_EXPAND52__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND52_(...)                    __MACRO_TUPLE_EXPAND52__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND52(X)                       __MACRO_TUPLE_EXPAND52_ X                           
#define __MACRO_TUPLE_EXPAND53__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND53_(...)                    __MACRO_TUPLE_EXPAND53__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND53(X)                       __MACRO_TUPLE_EXPAND53_ X                           
#define __MACRO_TUPLE_EXPAND54__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND54_(...)                    __MACRO_TUPLE_EXPAND54__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND54(X)                       __MACRO_TUPLE_EXPAND54_ X                           
#define __MACRO_TUPLE_EXPAND55__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND55_(...)                    __MACRO_TUPLE_EXPAND55__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND55(X)                       __MACRO_TUPLE_EXPAND55_ X                           
#define __MACRO_TUPLE_EXPAND56__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND56_(...)                    __MACRO_TUPLE_EXPAND56__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND56(X)                       __MACRO_TUPLE_EXPAND56_ X                           
#define __MACRO_TUPLE_EXPAND57__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND57_(...)                    __MACRO_TUPLE_EXPAND57__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND57(X)                       __MACRO_TUPLE_EXPAND57_ X                           
#define __MACRO_TUPLE_EXPAND58__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND58_(...)                    __MACRO_TUPLE_EXPAND58__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND58(X)                       __MACRO_TUPLE_EXPAND58_ X                           
#define __MACRO_TUPLE_EXPAND59__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND59_(...)                    __MACRO_TUPLE_EXPAND59__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND59(X)                       __MACRO_TUPLE_EXPAND59_ X                           
#define __MACRO_TUPLE_EXPAND60__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND60_(...)                    __MACRO_TUPLE_EXPAND60__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND60(X)                       __MACRO_TUPLE_EXPAND60_ X                           
#define __MACRO_TUPLE_EXPAND61__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND61_(...)                    __MACRO_TUPLE_EXPAND61__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND61(X)                       __MACRO_TUPLE_EXPAND61_ X                           
#define __MACRO_TUPLE_EXPAND62__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND62_(...)                    __MACRO_TUPLE_EXPAND62__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND62(X)                       __MACRO_TUPLE_EXPAND62_ X                           
#define __MACRO_TUPLE_EXPAND63__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND63_(...)                    __MACRO_TUPLE_EXPAND63__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND63(X)                       __MACRO_TUPLE_EXPAND63_ X                           
#define __MACRO_TUPLE_EXPAND64__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND64_(...)                    __MACRO_TUPLE_EXPAND64__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND64(X)                       __MACRO_TUPLE_EXPAND64_ X                           
#define __MACRO_TUPLE_EXPAND65__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND65_(...)                    __MACRO_TUPLE_EXPAND65__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND65(X)                       __MACRO_TUPLE_EXPAND65_ X                           
#define __MACRO_TUPLE_EXPAND66__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND66_(...)                    __MACRO_TUPLE_EXPAND66__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND66(X)                       __MACRO_TUPLE_EXPAND66_ X                           
#define __MACRO_TUPLE_EXPAND67__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND67_(...)                    __MACRO_TUPLE_EXPAND67__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND67(X)                       __MACRO_TUPLE_EXPAND67_ X                           
#define __MACRO_TUPLE_EXPAND68__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND68_(...)                    __MACRO_TUPLE_EXPAND68__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND68(X)                       __MACRO_TUPLE_EXPAND68_ X                           
#define __MACRO_TUPLE_EXPAND69__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND69_(...)                    __MACRO_TUPLE_EXPAND69__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND69(X)                       __MACRO_TUPLE_EXPAND69_ X                           
#define __MACRO_TUPLE_EXPAND70__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND70_(...)                    __MACRO_TUPLE_EXPAND70__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND70(X)                       __MACRO_TUPLE_EXPAND70_ X                           
#define __MACRO_TUPLE_EXPAND71__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND71_(...)                    __MACRO_TUPLE_EXPAND71__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND71(X)                       __MACRO_TUPLE_EXPAND71_ X                           
#define __MACRO_TUPLE_EXPAND72__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND72_(...)                    __MACRO_TUPLE_EXPAND72__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND72(X)                       __MACRO_TUPLE_EXPAND72_ X                           
#define __MACRO_TUPLE_EXPAND73__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND73_(...)                    __MACRO_TUPLE_EXPAND73__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND73(X)                       __MACRO_TUPLE_EXPAND73_ X                           
#define __MACRO_TUPLE_EXPAND74__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND74_(...)                    __MACRO_TUPLE_EXPAND74__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND74(X)                       __MACRO_TUPLE_EXPAND74_ X                           
#define __MACRO_TUPLE_EXPAND75__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND75_(...)                    __MACRO_TUPLE_EXPAND75__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND75(X)                       __MACRO_TUPLE_EXPAND75_ X                           
#define __MACRO_TUPLE_EXPAND76__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND76_(...)                    __MACRO_TUPLE_EXPAND76__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND76(X)                       __MACRO_TUPLE_EXPAND76_ X                           
#define __MACRO_TUPLE_EXPAND77__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND77_(...)                    __MACRO_TUPLE_EXPAND77__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND77(X)                       __MACRO_TUPLE_EXPAND77_ X                           
#define __MACRO_TUPLE_EXPAND78__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND78_(...)                    __MACRO_TUPLE_EXPAND78__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND78(X)                       __MACRO_TUPLE_EXPAND78_ X                           
#define __MACRO_TUPLE_EXPAND79__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND79_(...)                    __MACRO_TUPLE_EXPAND79__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND79(X)                       __MACRO_TUPLE_EXPAND79_ X                           
#define __MACRO_TUPLE_EXPAND80__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND80_(...)                    __MACRO_TUPLE_EXPAND80__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND80(X)                       __MACRO_TUPLE_EXPAND80_ X                           
#define __MACRO_TUPLE_EXPAND81__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND81_(...)                    __MACRO_TUPLE_EXPAND81__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND81(X)                       __MACRO_TUPLE_EXPAND81_ X                           
#define __MACRO_TUPLE_EXPAND82__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND82_(...)                    __MACRO_TUPLE_EXPAND82__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND82(X)                       __MACRO_TUPLE_EXPAND82_ X                           
#define __MACRO_TUPLE_EXPAND83__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND83_(...)                    __MACRO_TUPLE_EXPAND83__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND83(X)                       __MACRO_TUPLE_EXPAND83_ X                           
#define __MACRO_TUPLE_EXPAND84__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND84_(...)                    __MACRO_TUPLE_EXPAND84__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND84(X)                       __MACRO_TUPLE_EXPAND84_ X                           
#define __MACRO_TUPLE_EXPAND85__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND85_(...)                    __MACRO_TUPLE_EXPAND85__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND85(X)                       __MACRO_TUPLE_EXPAND85_ X                           
#define __MACRO_TUPLE_EXPAND86__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND86_(...)                    __MACRO_TUPLE_EXPAND86__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND86(X)                       __MACRO_TUPLE_EXPAND86_ X                           
#define __MACRO_TUPLE_EXPAND87__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND87_(...)                    __MACRO_TUPLE_EXPAND87__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND87(X)                       __MACRO_TUPLE_EXPAND87_ X                           
#define __MACRO_TUPLE_EXPAND88__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND88_(...)                    __MACRO_TUPLE_EXPAND88__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND88(X)                       __MACRO_TUPLE_EXPAND88_ X                           
#define __MACRO_TUPLE_EXPAND89__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND89_(...)                    __MACRO_TUPLE_EXPAND89__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND89(X)                       __MACRO_TUPLE_EXPAND89_ X                           
#define __MACRO_TUPLE_EXPAND90__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND90_(...)                    __MACRO_TUPLE_EXPAND90__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND90(X)                       __MACRO_TUPLE_EXPAND90_ X                           
#define __MACRO_TUPLE_EXPAND91__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND91_(...)                    __MACRO_TUPLE_EXPAND91__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND91(X)                       __MACRO_TUPLE_EXPAND91_ X                           
#define __MACRO_TUPLE_EXPAND92__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND92_(...)                    __MACRO_TUPLE_EXPAND92__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND92(X)                       __MACRO_TUPLE_EXPAND92_ X                           
#define __MACRO_TUPLE_EXPAND93__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND93_(...)                    __MACRO_TUPLE_EXPAND93__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND93(X)                       __MACRO_TUPLE_EXPAND93_ X                           
#define __MACRO_TUPLE_EXPAND94__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND94_(...)                    __MACRO_TUPLE_EXPAND94__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND94(X)                       __MACRO_TUPLE_EXPAND94_ X                           
#define __MACRO_TUPLE_EXPAND95__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND95_(...)                    __MACRO_TUPLE_EXPAND95__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND95(X)                       __MACRO_TUPLE_EXPAND95_ X                           
#define __MACRO_TUPLE_EXPAND96__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND96_(...)                    __MACRO_TUPLE_EXPAND96__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND96(X)                       __MACRO_TUPLE_EXPAND96_ X                           
#define __MACRO_TUPLE_EXPAND97__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND97_(...)                    __MACRO_TUPLE_EXPAND97__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND97(X)                       __MACRO_TUPLE_EXPAND97_ X                           
#define __MACRO_TUPLE_EXPAND98__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND98_(...)                    __MACRO_TUPLE_EXPAND98__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND98(X)                       __MACRO_TUPLE_EXPAND98_ X                           
#define __MACRO_TUPLE_EXPAND99__(...)                   __VA_ARGS__
#define __MACRO_TUPLE_EXPAND99_(...)                    __MACRO_TUPLE_EXPAND99__(__VA_ARGS__)                           
#define __MACRO_TUPLE_EXPAND99(X)                       __MACRO_TUPLE_EXPAND99_ X                           

#endif
