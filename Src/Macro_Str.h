#ifndef _MACRO_STR_H_
#define _MACRO_STR_H_

#include "Macro_VA.h"

#define __MACRO_STR(...)                        __MACRO_STR_ROOT(__MACRO_VA_ARGS_LEN(__VA_ARGS__), __VA_ARGS__)

#define __MACRO_STR_ROOT(N, ...)                __MACRO_STR_ROOT_(N, __VA_ARGS__)
#define __MACRO_STR_ROOT_(N, ...)               __MACRO_STR_ ##N (__VA_ARGS__)

#define __MACRO_STR_0(...)                      ""
#define __MACRO_STR_1(X, ...)                   #X
#define __MACRO_STR_2(X, ...)                   #X __MACRO_STR_1(__VA_ARGS__)
#define __MACRO_STR_3(X, ...)                   #X __MACRO_STR_2(__VA_ARGS__)
#define __MACRO_STR_4(X, ...)                   #X __MACRO_STR_3(__VA_ARGS__)
#define __MACRO_STR_5(X, ...)                   #X __MACRO_STR_4(__VA_ARGS__)
#define __MACRO_STR_6(X, ...)                   #X __MACRO_STR_5(__VA_ARGS__)
#define __MACRO_STR_7(X, ...)                   #X __MACRO_STR_6(__VA_ARGS__)
#define __MACRO_STR_8(X, ...)                   #X __MACRO_STR_7(__VA_ARGS__)
#define __MACRO_STR_9(X, ...)                   #X __MACRO_STR_8(__VA_ARGS__)
#define __MACRO_STR_10(X, ...)                  #X __MACRO_STR_9(__VA_ARGS__)
#define __MACRO_STR_11(X, ...)                  #X __MACRO_STR_10(__VA_ARGS__)
#define __MACRO_STR_12(X, ...)                  #X __MACRO_STR_11(__VA_ARGS__)
#define __MACRO_STR_13(X, ...)                  #X __MACRO_STR_12(__VA_ARGS__)
#define __MACRO_STR_14(X, ...)                  #X __MACRO_STR_13(__VA_ARGS__)
#define __MACRO_STR_15(X, ...)                  #X __MACRO_STR_14(__VA_ARGS__)
#define __MACRO_STR_16(X, ...)                  #X __MACRO_STR_15(__VA_ARGS__)
#define __MACRO_STR_17(X, ...)                  #X __MACRO_STR_16(__VA_ARGS__)
#define __MACRO_STR_18(X, ...)                  #X __MACRO_STR_17(__VA_ARGS__)
#define __MACRO_STR_19(X, ...)                  #X __MACRO_STR_18(__VA_ARGS__)
#define __MACRO_STR_20(X, ...)                  #X __MACRO_STR_19(__VA_ARGS__)
#define __MACRO_STR_21(X, ...)                  #X __MACRO_STR_20(__VA_ARGS__)
#define __MACRO_STR_22(X, ...)                  #X __MACRO_STR_21(__VA_ARGS__)
#define __MACRO_STR_23(X, ...)                  #X __MACRO_STR_22(__VA_ARGS__)
#define __MACRO_STR_24(X, ...)                  #X __MACRO_STR_23(__VA_ARGS__)
#define __MACRO_STR_25(X, ...)                  #X __MACRO_STR_24(__VA_ARGS__)
#define __MACRO_STR_26(X, ...)                  #X __MACRO_STR_25(__VA_ARGS__)
#define __MACRO_STR_27(X, ...)                  #X __MACRO_STR_26(__VA_ARGS__)
#define __MACRO_STR_28(X, ...)                  #X __MACRO_STR_27(__VA_ARGS__)
#define __MACRO_STR_29(X, ...)                  #X __MACRO_STR_28(__VA_ARGS__)
#define __MACRO_STR_30(X, ...)                  #X __MACRO_STR_29(__VA_ARGS__)
#define __MACRO_STR_31(X, ...)                  #X __MACRO_STR_30(__VA_ARGS__)
#define __MACRO_STR_32(X, ...)                  #X __MACRO_STR_31(__VA_ARGS__)
#define __MACRO_STR_33(X, ...)                  #X __MACRO_STR_32(__VA_ARGS__)
#define __MACRO_STR_34(X, ...)                  #X __MACRO_STR_33(__VA_ARGS__)
#define __MACRO_STR_35(X, ...)                  #X __MACRO_STR_34(__VA_ARGS__)
#define __MACRO_STR_36(X, ...)                  #X __MACRO_STR_35(__VA_ARGS__)
#define __MACRO_STR_37(X, ...)                  #X __MACRO_STR_36(__VA_ARGS__)
#define __MACRO_STR_38(X, ...)                  #X __MACRO_STR_37(__VA_ARGS__)
#define __MACRO_STR_39(X, ...)                  #X __MACRO_STR_38(__VA_ARGS__)
#define __MACRO_STR_40(X, ...)                  #X __MACRO_STR_39(__VA_ARGS__)
#define __MACRO_STR_41(X, ...)                  #X __MACRO_STR_40(__VA_ARGS__)
#define __MACRO_STR_42(X, ...)                  #X __MACRO_STR_41(__VA_ARGS__)
#define __MACRO_STR_43(X, ...)                  #X __MACRO_STR_42(__VA_ARGS__)
#define __MACRO_STR_44(X, ...)                  #X __MACRO_STR_43(__VA_ARGS__)
#define __MACRO_STR_45(X, ...)                  #X __MACRO_STR_44(__VA_ARGS__)
#define __MACRO_STR_46(X, ...)                  #X __MACRO_STR_45(__VA_ARGS__)
#define __MACRO_STR_47(X, ...)                  #X __MACRO_STR_46(__VA_ARGS__)
#define __MACRO_STR_48(X, ...)                  #X __MACRO_STR_47(__VA_ARGS__)
#define __MACRO_STR_49(X, ...)                  #X __MACRO_STR_48(__VA_ARGS__)
#define __MACRO_STR_50(X, ...)                  #X __MACRO_STR_49(__VA_ARGS__)
#define __MACRO_STR_51(X, ...)                  #X __MACRO_STR_50(__VA_ARGS__)
#define __MACRO_STR_52(X, ...)                  #X __MACRO_STR_51(__VA_ARGS__)
#define __MACRO_STR_53(X, ...)                  #X __MACRO_STR_52(__VA_ARGS__)
#define __MACRO_STR_54(X, ...)                  #X __MACRO_STR_53(__VA_ARGS__)
#define __MACRO_STR_55(X, ...)                  #X __MACRO_STR_54(__VA_ARGS__)
#define __MACRO_STR_56(X, ...)                  #X __MACRO_STR_55(__VA_ARGS__)
#define __MACRO_STR_57(X, ...)                  #X __MACRO_STR_56(__VA_ARGS__)
#define __MACRO_STR_58(X, ...)                  #X __MACRO_STR_57(__VA_ARGS__)
#define __MACRO_STR_59(X, ...)                  #X __MACRO_STR_58(__VA_ARGS__)
#define __MACRO_STR_60(X, ...)                  #X __MACRO_STR_59(__VA_ARGS__)
#define __MACRO_STR_61(X, ...)                  #X __MACRO_STR_60(__VA_ARGS__)
#define __MACRO_STR_62(X, ...)                  #X __MACRO_STR_61(__VA_ARGS__)
#define __MACRO_STR_63(X, ...)                  #X __MACRO_STR_62(__VA_ARGS__)
#define __MACRO_STR_64(X, ...)                  #X __MACRO_STR_63(__VA_ARGS__)
#define __MACRO_STR_65(X, ...)                  #X __MACRO_STR_64(__VA_ARGS__)
#define __MACRO_STR_66(X, ...)                  #X __MACRO_STR_65(__VA_ARGS__)
#define __MACRO_STR_67(X, ...)                  #X __MACRO_STR_66(__VA_ARGS__)
#define __MACRO_STR_68(X, ...)                  #X __MACRO_STR_67(__VA_ARGS__)
#define __MACRO_STR_69(X, ...)                  #X __MACRO_STR_68(__VA_ARGS__)
#define __MACRO_STR_70(X, ...)                  #X __MACRO_STR_69(__VA_ARGS__)
#define __MACRO_STR_71(X, ...)                  #X __MACRO_STR_70(__VA_ARGS__)
#define __MACRO_STR_72(X, ...)                  #X __MACRO_STR_71(__VA_ARGS__)
#define __MACRO_STR_73(X, ...)                  #X __MACRO_STR_72(__VA_ARGS__)
#define __MACRO_STR_74(X, ...)                  #X __MACRO_STR_73(__VA_ARGS__)
#define __MACRO_STR_75(X, ...)                  #X __MACRO_STR_74(__VA_ARGS__)
#define __MACRO_STR_76(X, ...)                  #X __MACRO_STR_75(__VA_ARGS__)
#define __MACRO_STR_77(X, ...)                  #X __MACRO_STR_76(__VA_ARGS__)
#define __MACRO_STR_78(X, ...)                  #X __MACRO_STR_77(__VA_ARGS__)
#define __MACRO_STR_79(X, ...)                  #X __MACRO_STR_78(__VA_ARGS__)
#define __MACRO_STR_80(X, ...)                  #X __MACRO_STR_79(__VA_ARGS__)
#define __MACRO_STR_81(X, ...)                  #X __MACRO_STR_80(__VA_ARGS__)
#define __MACRO_STR_82(X, ...)                  #X __MACRO_STR_81(__VA_ARGS__)
#define __MACRO_STR_83(X, ...)                  #X __MACRO_STR_82(__VA_ARGS__)
#define __MACRO_STR_84(X, ...)                  #X __MACRO_STR_83(__VA_ARGS__)
#define __MACRO_STR_85(X, ...)                  #X __MACRO_STR_84(__VA_ARGS__)
#define __MACRO_STR_86(X, ...)                  #X __MACRO_STR_85(__VA_ARGS__)
#define __MACRO_STR_87(X, ...)                  #X __MACRO_STR_86(__VA_ARGS__)
#define __MACRO_STR_88(X, ...)                  #X __MACRO_STR_87(__VA_ARGS__)
#define __MACRO_STR_89(X, ...)                  #X __MACRO_STR_88(__VA_ARGS__)
#define __MACRO_STR_90(X, ...)                  #X __MACRO_STR_89(__VA_ARGS__)
#define __MACRO_STR_91(X, ...)                  #X __MACRO_STR_90(__VA_ARGS__)
#define __MACRO_STR_92(X, ...)                  #X __MACRO_STR_91(__VA_ARGS__)
#define __MACRO_STR_93(X, ...)                  #X __MACRO_STR_92(__VA_ARGS__)
#define __MACRO_STR_94(X, ...)                  #X __MACRO_STR_93(__VA_ARGS__)
#define __MACRO_STR_95(X, ...)                  #X __MACRO_STR_94(__VA_ARGS__)
#define __MACRO_STR_96(X, ...)                  #X __MACRO_STR_95(__VA_ARGS__)
#define __MACRO_STR_97(X, ...)                  #X __MACRO_STR_96(__VA_ARGS__)
#define __MACRO_STR_98(X, ...)                  #X __MACRO_STR_97(__VA_ARGS__)
#define __MACRO_STR_99(X, ...)                  #X __MACRO_STR_98(__VA_ARGS__)
#define __MACRO_STR_100(X, ...)                 #X __MACRO_STR_99(__VA_ARGS__)

#endif // _MACRO_STR_H_
