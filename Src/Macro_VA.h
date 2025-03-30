#ifndef _MACRO_VA_H_
#define _MACRO_VA_H_


#ifdef __STDC_VERSION__
    #if __STDC_VERSION__ >= 201112L
        #define __MACRO_VA_ARGS_LEN(...)                    __MACRO_VA_ARGS_N(__VA_OPT__(,) ##__VA_ARGS__, __MACRO_VA_ARGS_N_MAP(99))
        #define __MACRO_VA_ARGS_CHECK_END(...)              __MACRO_VA_ARGS_N(__VA_OPT__(,) ##__VA_ARGS__, __MACRO_VA_ARGS_N_CHECK_END())
    #endif
#endif

#ifndef __MACRO_VA_ARGS_LEN
    #define __MACRO_VA_ARGS_LEN(...)                        __MACRO_VA_ARGS_N(_, ##__VA_ARGS__, __MACRO_VA_ARGS_N_MAP(99))
    #define __MACRO_VA_ARGS_CHECK_END(...)                  __MACRO_VA_ARGS_N(_, ##__VA_ARGS__, __MACRO_VA_ARGS_N_CHECK_END())
#endif

#define __MACRO_VA_ARGS_N(...)                              __MACRO_VA_ARGS_N_(__VA_ARGS__)

#define __MACRO_VA_ARGS_N_( \
    _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9,  \
    _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
    _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
    _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
    _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
    _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
    _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, \
    _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, \
    _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, \
    _90, _91, _92, _93, _94, _95, _96, _97, _98, _99, \
    N, ... \
) N

#define __MACRO_VA_ARGS_N_CHECK_END() \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, \
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1


#define __MACRO_VA_ARGS_N_MAP(N)                                        __MACRO_VA_ARGS_N_MAP_(N)
#define __MACRO_VA_ARGS_N_MAP_(N)                                       __MACRO_VA_ARGS_N_ ##N

#define __MACRO_VA_ARGS_N_0                                             0
#define __MACRO_VA_ARGS_N_1                                             1,  __MACRO_VA_ARGS_N_0
#define __MACRO_VA_ARGS_N_2                                             2,  __MACRO_VA_ARGS_N_1
#define __MACRO_VA_ARGS_N_3                                             3,  __MACRO_VA_ARGS_N_2
#define __MACRO_VA_ARGS_N_4                                             4,  __MACRO_VA_ARGS_N_3
#define __MACRO_VA_ARGS_N_5                                             5,  __MACRO_VA_ARGS_N_4
#define __MACRO_VA_ARGS_N_6                                             6,  __MACRO_VA_ARGS_N_5
#define __MACRO_VA_ARGS_N_7                                             7,  __MACRO_VA_ARGS_N_6
#define __MACRO_VA_ARGS_N_8                                             8,  __MACRO_VA_ARGS_N_7
#define __MACRO_VA_ARGS_N_9                                             9,  __MACRO_VA_ARGS_N_8
#define __MACRO_VA_ARGS_N_10                                            10, __MACRO_VA_ARGS_N_9
#define __MACRO_VA_ARGS_N_11                                            11, __MACRO_VA_ARGS_N_10
#define __MACRO_VA_ARGS_N_12                                            12, __MACRO_VA_ARGS_N_11
#define __MACRO_VA_ARGS_N_13                                            13, __MACRO_VA_ARGS_N_12
#define __MACRO_VA_ARGS_N_14                                            14, __MACRO_VA_ARGS_N_13
#define __MACRO_VA_ARGS_N_15                                            15, __MACRO_VA_ARGS_N_14
#define __MACRO_VA_ARGS_N_16                                            16, __MACRO_VA_ARGS_N_15
#define __MACRO_VA_ARGS_N_17                                            17, __MACRO_VA_ARGS_N_16
#define __MACRO_VA_ARGS_N_18                                            18, __MACRO_VA_ARGS_N_17
#define __MACRO_VA_ARGS_N_19                                            19, __MACRO_VA_ARGS_N_18
#define __MACRO_VA_ARGS_N_20                                            20, __MACRO_VA_ARGS_N_19
#define __MACRO_VA_ARGS_N_21                                            21, __MACRO_VA_ARGS_N_20
#define __MACRO_VA_ARGS_N_22                                            22, __MACRO_VA_ARGS_N_21
#define __MACRO_VA_ARGS_N_23                                            23, __MACRO_VA_ARGS_N_22
#define __MACRO_VA_ARGS_N_24                                            24, __MACRO_VA_ARGS_N_23
#define __MACRO_VA_ARGS_N_25                                            25, __MACRO_VA_ARGS_N_24
#define __MACRO_VA_ARGS_N_26                                            26, __MACRO_VA_ARGS_N_25
#define __MACRO_VA_ARGS_N_27                                            27, __MACRO_VA_ARGS_N_26
#define __MACRO_VA_ARGS_N_28                                            28, __MACRO_VA_ARGS_N_27
#define __MACRO_VA_ARGS_N_29                                            29, __MACRO_VA_ARGS_N_28
#define __MACRO_VA_ARGS_N_30                                            30, __MACRO_VA_ARGS_N_29
#define __MACRO_VA_ARGS_N_31                                            31, __MACRO_VA_ARGS_N_30
#define __MACRO_VA_ARGS_N_32                                            32, __MACRO_VA_ARGS_N_31
#define __MACRO_VA_ARGS_N_33                                            33, __MACRO_VA_ARGS_N_32
#define __MACRO_VA_ARGS_N_34                                            34, __MACRO_VA_ARGS_N_33
#define __MACRO_VA_ARGS_N_35                                            35, __MACRO_VA_ARGS_N_34
#define __MACRO_VA_ARGS_N_36                                            36, __MACRO_VA_ARGS_N_35
#define __MACRO_VA_ARGS_N_37                                            37, __MACRO_VA_ARGS_N_36
#define __MACRO_VA_ARGS_N_38                                            38, __MACRO_VA_ARGS_N_37
#define __MACRO_VA_ARGS_N_39                                            39, __MACRO_VA_ARGS_N_38
#define __MACRO_VA_ARGS_N_40                                            40, __MACRO_VA_ARGS_N_39
#define __MACRO_VA_ARGS_N_41                                            41, __MACRO_VA_ARGS_N_40
#define __MACRO_VA_ARGS_N_42                                            42, __MACRO_VA_ARGS_N_41
#define __MACRO_VA_ARGS_N_43                                            43, __MACRO_VA_ARGS_N_42
#define __MACRO_VA_ARGS_N_44                                            44, __MACRO_VA_ARGS_N_43
#define __MACRO_VA_ARGS_N_45                                            45, __MACRO_VA_ARGS_N_44
#define __MACRO_VA_ARGS_N_46                                            46, __MACRO_VA_ARGS_N_45
#define __MACRO_VA_ARGS_N_47                                            47, __MACRO_VA_ARGS_N_46
#define __MACRO_VA_ARGS_N_48                                            48, __MACRO_VA_ARGS_N_47
#define __MACRO_VA_ARGS_N_49                                            49, __MACRO_VA_ARGS_N_48
#define __MACRO_VA_ARGS_N_50                                            50, __MACRO_VA_ARGS_N_49
#define __MACRO_VA_ARGS_N_51                                            51, __MACRO_VA_ARGS_N_50
#define __MACRO_VA_ARGS_N_52                                            52, __MACRO_VA_ARGS_N_51
#define __MACRO_VA_ARGS_N_53                                            53, __MACRO_VA_ARGS_N_52
#define __MACRO_VA_ARGS_N_54                                            54, __MACRO_VA_ARGS_N_53
#define __MACRO_VA_ARGS_N_55                                            55, __MACRO_VA_ARGS_N_54
#define __MACRO_VA_ARGS_N_56                                            56, __MACRO_VA_ARGS_N_55
#define __MACRO_VA_ARGS_N_57                                            57, __MACRO_VA_ARGS_N_56
#define __MACRO_VA_ARGS_N_58                                            58, __MACRO_VA_ARGS_N_57
#define __MACRO_VA_ARGS_N_59                                            59, __MACRO_VA_ARGS_N_58
#define __MACRO_VA_ARGS_N_60                                            60, __MACRO_VA_ARGS_N_59
#define __MACRO_VA_ARGS_N_61                                            61, __MACRO_VA_ARGS_N_60
#define __MACRO_VA_ARGS_N_62                                            62, __MACRO_VA_ARGS_N_61
#define __MACRO_VA_ARGS_N_63                                            63, __MACRO_VA_ARGS_N_62
#define __MACRO_VA_ARGS_N_64                                            64, __MACRO_VA_ARGS_N_63
#define __MACRO_VA_ARGS_N_65                                            65, __MACRO_VA_ARGS_N_64
#define __MACRO_VA_ARGS_N_66                                            66, __MACRO_VA_ARGS_N_65
#define __MACRO_VA_ARGS_N_67                                            67, __MACRO_VA_ARGS_N_66
#define __MACRO_VA_ARGS_N_68                                            68, __MACRO_VA_ARGS_N_67
#define __MACRO_VA_ARGS_N_69                                            69, __MACRO_VA_ARGS_N_68
#define __MACRO_VA_ARGS_N_70                                            70, __MACRO_VA_ARGS_N_69
#define __MACRO_VA_ARGS_N_71                                            71, __MACRO_VA_ARGS_N_70
#define __MACRO_VA_ARGS_N_72                                            72, __MACRO_VA_ARGS_N_71
#define __MACRO_VA_ARGS_N_73                                            73, __MACRO_VA_ARGS_N_72
#define __MACRO_VA_ARGS_N_74                                            74, __MACRO_VA_ARGS_N_73
#define __MACRO_VA_ARGS_N_75                                            75, __MACRO_VA_ARGS_N_74
#define __MACRO_VA_ARGS_N_76                                            76, __MACRO_VA_ARGS_N_75
#define __MACRO_VA_ARGS_N_77                                            77, __MACRO_VA_ARGS_N_76
#define __MACRO_VA_ARGS_N_78                                            78, __MACRO_VA_ARGS_N_77
#define __MACRO_VA_ARGS_N_79                                            79, __MACRO_VA_ARGS_N_78
#define __MACRO_VA_ARGS_N_80                                            80, __MACRO_VA_ARGS_N_79
#define __MACRO_VA_ARGS_N_81                                            81, __MACRO_VA_ARGS_N_80
#define __MACRO_VA_ARGS_N_82                                            82, __MACRO_VA_ARGS_N_81
#define __MACRO_VA_ARGS_N_83                                            83, __MACRO_VA_ARGS_N_82
#define __MACRO_VA_ARGS_N_84                                            84, __MACRO_VA_ARGS_N_83
#define __MACRO_VA_ARGS_N_85                                            85, __MACRO_VA_ARGS_N_84
#define __MACRO_VA_ARGS_N_86                                            86, __MACRO_VA_ARGS_N_85
#define __MACRO_VA_ARGS_N_87                                            87, __MACRO_VA_ARGS_N_86
#define __MACRO_VA_ARGS_N_88                                            88, __MACRO_VA_ARGS_N_87
#define __MACRO_VA_ARGS_N_89                                            89, __MACRO_VA_ARGS_N_88
#define __MACRO_VA_ARGS_N_90                                            90, __MACRO_VA_ARGS_N_89
#define __MACRO_VA_ARGS_N_91                                            91, __MACRO_VA_ARGS_N_90
#define __MACRO_VA_ARGS_N_92                                            92, __MACRO_VA_ARGS_N_91
#define __MACRO_VA_ARGS_N_93                                            93, __MACRO_VA_ARGS_N_92
#define __MACRO_VA_ARGS_N_94                                            94, __MACRO_VA_ARGS_N_93
#define __MACRO_VA_ARGS_N_95                                            95, __MACRO_VA_ARGS_N_94
#define __MACRO_VA_ARGS_N_96                                            96, __MACRO_VA_ARGS_N_95
#define __MACRO_VA_ARGS_N_97                                            97, __MACRO_VA_ARGS_N_96
#define __MACRO_VA_ARGS_N_98                                            98, __MACRO_VA_ARGS_N_97
#define __MACRO_VA_ARGS_N_99                                            99, __MACRO_VA_ARGS_N_98

#endif // _MACRO_VA_H_
