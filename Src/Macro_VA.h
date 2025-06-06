#ifndef _MACRO_VA_H_
#define _MACRO_VA_H_


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
    #define __MACRO_VA_ARGS_LEN(...)                        __MACRO_VA_ARGS_N(__VA_OPT__(,) ##__VA_ARGS__, __MACRO_VA_ARGS_N_MAP(99))
    #define __MACRO_VA_ARGS_CHECK_END(...)                  __MACRO_VA_ARGS_N(__VA_OPT__(,) ##__VA_ARGS__, __MACRO_VA_ARGS_N_CHECK_END())
    #define __MACRO_VA_ARGS_MAP(MAP, ...)                   __MACRO_VA_ARGS_N(__VA_OPT__(,) ##__VA_ARGS__, __MACRO_VA_ARGS_N_RMAP(__MACRO_VA_ARGS_LEN(__MACRO_TUPLE_EXPAND(MAP))), __MACRO_TUPLE_EXPAND(MAP))
#else
    #define __MACRO_VA_ARGS_LEN(...)                        __MACRO_VA_ARGS_N(_, ##__VA_ARGS__, __MACRO_VA_ARGS_N_MAP(99))
    #define __MACRO_VA_ARGS_CHECK_END(...)                  __MACRO_VA_ARGS_N(_, ##__VA_ARGS__, __MACRO_VA_ARGS_N_CHECK_END())
    #define __MACRO_VA_ARGS_MAP(MAP, ...)                   __MACRO_VA_ARGS_N(_, ##__VA_ARGS__, __MACRO_VA_ARGS_N_RMAP(__MACRO_VA_ARGS_LEN(__MACRO_TUPLE_EXPAND(MAP))), __MACRO_TUPLE_EXPAND(MAP))
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


#define __MACRO_VA_ARGS_N_MAP(N)                                            __MACRO_VA_ARGS_N_MAP_(N)
#define __MACRO_VA_ARGS_N_MAP_(N)                                           __MACRO_VA_ARGS_N_MAP_ ##N

#define __MACRO_VA_ARGS_N_RMAP(N)                                           __MACRO_VA_ARGS_N_RMAP_(N)
#define __MACRO_VA_ARGS_N_RMAP_(N)                                          __MACRO_VA_ARGS_N_RMAP_ ##N

#define __MACRO_VA_ARGS_N_MAP_0                                             0
#define __MACRO_VA_ARGS_N_MAP_1                                             1,  __MACRO_VA_ARGS_N_MAP_0
#define __MACRO_VA_ARGS_N_MAP_2                                             2,  __MACRO_VA_ARGS_N_MAP_1
#define __MACRO_VA_ARGS_N_MAP_3                                             3,  __MACRO_VA_ARGS_N_MAP_2
#define __MACRO_VA_ARGS_N_MAP_4                                             4,  __MACRO_VA_ARGS_N_MAP_3
#define __MACRO_VA_ARGS_N_MAP_5                                             5,  __MACRO_VA_ARGS_N_MAP_4
#define __MACRO_VA_ARGS_N_MAP_6                                             6,  __MACRO_VA_ARGS_N_MAP_5
#define __MACRO_VA_ARGS_N_MAP_7                                             7,  __MACRO_VA_ARGS_N_MAP_6
#define __MACRO_VA_ARGS_N_MAP_8                                             8,  __MACRO_VA_ARGS_N_MAP_7
#define __MACRO_VA_ARGS_N_MAP_9                                             9,  __MACRO_VA_ARGS_N_MAP_8
#define __MACRO_VA_ARGS_N_MAP_10                                            10, __MACRO_VA_ARGS_N_MAP_9
#define __MACRO_VA_ARGS_N_MAP_11                                            11, __MACRO_VA_ARGS_N_MAP_10
#define __MACRO_VA_ARGS_N_MAP_12                                            12, __MACRO_VA_ARGS_N_MAP_11
#define __MACRO_VA_ARGS_N_MAP_13                                            13, __MACRO_VA_ARGS_N_MAP_12
#define __MACRO_VA_ARGS_N_MAP_14                                            14, __MACRO_VA_ARGS_N_MAP_13
#define __MACRO_VA_ARGS_N_MAP_15                                            15, __MACRO_VA_ARGS_N_MAP_14
#define __MACRO_VA_ARGS_N_MAP_16                                            16, __MACRO_VA_ARGS_N_MAP_15
#define __MACRO_VA_ARGS_N_MAP_17                                            17, __MACRO_VA_ARGS_N_MAP_16
#define __MACRO_VA_ARGS_N_MAP_18                                            18, __MACRO_VA_ARGS_N_MAP_17
#define __MACRO_VA_ARGS_N_MAP_19                                            19, __MACRO_VA_ARGS_N_MAP_18
#define __MACRO_VA_ARGS_N_MAP_20                                            20, __MACRO_VA_ARGS_N_MAP_19
#define __MACRO_VA_ARGS_N_MAP_21                                            21, __MACRO_VA_ARGS_N_MAP_20
#define __MACRO_VA_ARGS_N_MAP_22                                            22, __MACRO_VA_ARGS_N_MAP_21
#define __MACRO_VA_ARGS_N_MAP_23                                            23, __MACRO_VA_ARGS_N_MAP_22
#define __MACRO_VA_ARGS_N_MAP_24                                            24, __MACRO_VA_ARGS_N_MAP_23
#define __MACRO_VA_ARGS_N_MAP_25                                            25, __MACRO_VA_ARGS_N_MAP_24
#define __MACRO_VA_ARGS_N_MAP_26                                            26, __MACRO_VA_ARGS_N_MAP_25
#define __MACRO_VA_ARGS_N_MAP_27                                            27, __MACRO_VA_ARGS_N_MAP_26
#define __MACRO_VA_ARGS_N_MAP_28                                            28, __MACRO_VA_ARGS_N_MAP_27
#define __MACRO_VA_ARGS_N_MAP_29                                            29, __MACRO_VA_ARGS_N_MAP_28
#define __MACRO_VA_ARGS_N_MAP_30                                            30, __MACRO_VA_ARGS_N_MAP_29
#define __MACRO_VA_ARGS_N_MAP_31                                            31, __MACRO_VA_ARGS_N_MAP_30
#define __MACRO_VA_ARGS_N_MAP_32                                            32, __MACRO_VA_ARGS_N_MAP_31
#define __MACRO_VA_ARGS_N_MAP_33                                            33, __MACRO_VA_ARGS_N_MAP_32
#define __MACRO_VA_ARGS_N_MAP_34                                            34, __MACRO_VA_ARGS_N_MAP_33
#define __MACRO_VA_ARGS_N_MAP_35                                            35, __MACRO_VA_ARGS_N_MAP_34
#define __MACRO_VA_ARGS_N_MAP_36                                            36, __MACRO_VA_ARGS_N_MAP_35
#define __MACRO_VA_ARGS_N_MAP_37                                            37, __MACRO_VA_ARGS_N_MAP_36
#define __MACRO_VA_ARGS_N_MAP_38                                            38, __MACRO_VA_ARGS_N_MAP_37
#define __MACRO_VA_ARGS_N_MAP_39                                            39, __MACRO_VA_ARGS_N_MAP_38
#define __MACRO_VA_ARGS_N_MAP_40                                            40, __MACRO_VA_ARGS_N_MAP_39
#define __MACRO_VA_ARGS_N_MAP_41                                            41, __MACRO_VA_ARGS_N_MAP_40
#define __MACRO_VA_ARGS_N_MAP_42                                            42, __MACRO_VA_ARGS_N_MAP_41
#define __MACRO_VA_ARGS_N_MAP_43                                            43, __MACRO_VA_ARGS_N_MAP_42
#define __MACRO_VA_ARGS_N_MAP_44                                            44, __MACRO_VA_ARGS_N_MAP_43
#define __MACRO_VA_ARGS_N_MAP_45                                            45, __MACRO_VA_ARGS_N_MAP_44
#define __MACRO_VA_ARGS_N_MAP_46                                            46, __MACRO_VA_ARGS_N_MAP_45
#define __MACRO_VA_ARGS_N_MAP_47                                            47, __MACRO_VA_ARGS_N_MAP_46
#define __MACRO_VA_ARGS_N_MAP_48                                            48, __MACRO_VA_ARGS_N_MAP_47
#define __MACRO_VA_ARGS_N_MAP_49                                            49, __MACRO_VA_ARGS_N_MAP_48
#define __MACRO_VA_ARGS_N_MAP_50                                            50, __MACRO_VA_ARGS_N_MAP_49
#define __MACRO_VA_ARGS_N_MAP_51                                            51, __MACRO_VA_ARGS_N_MAP_50
#define __MACRO_VA_ARGS_N_MAP_52                                            52, __MACRO_VA_ARGS_N_MAP_51
#define __MACRO_VA_ARGS_N_MAP_53                                            53, __MACRO_VA_ARGS_N_MAP_52
#define __MACRO_VA_ARGS_N_MAP_54                                            54, __MACRO_VA_ARGS_N_MAP_53
#define __MACRO_VA_ARGS_N_MAP_55                                            55, __MACRO_VA_ARGS_N_MAP_54
#define __MACRO_VA_ARGS_N_MAP_56                                            56, __MACRO_VA_ARGS_N_MAP_55
#define __MACRO_VA_ARGS_N_MAP_57                                            57, __MACRO_VA_ARGS_N_MAP_56
#define __MACRO_VA_ARGS_N_MAP_58                                            58, __MACRO_VA_ARGS_N_MAP_57
#define __MACRO_VA_ARGS_N_MAP_59                                            59, __MACRO_VA_ARGS_N_MAP_58
#define __MACRO_VA_ARGS_N_MAP_60                                            60, __MACRO_VA_ARGS_N_MAP_59
#define __MACRO_VA_ARGS_N_MAP_61                                            61, __MACRO_VA_ARGS_N_MAP_60
#define __MACRO_VA_ARGS_N_MAP_62                                            62, __MACRO_VA_ARGS_N_MAP_61
#define __MACRO_VA_ARGS_N_MAP_63                                            63, __MACRO_VA_ARGS_N_MAP_62
#define __MACRO_VA_ARGS_N_MAP_64                                            64, __MACRO_VA_ARGS_N_MAP_63
#define __MACRO_VA_ARGS_N_MAP_65                                            65, __MACRO_VA_ARGS_N_MAP_64
#define __MACRO_VA_ARGS_N_MAP_66                                            66, __MACRO_VA_ARGS_N_MAP_65
#define __MACRO_VA_ARGS_N_MAP_67                                            67, __MACRO_VA_ARGS_N_MAP_66
#define __MACRO_VA_ARGS_N_MAP_68                                            68, __MACRO_VA_ARGS_N_MAP_67
#define __MACRO_VA_ARGS_N_MAP_69                                            69, __MACRO_VA_ARGS_N_MAP_68
#define __MACRO_VA_ARGS_N_MAP_70                                            70, __MACRO_VA_ARGS_N_MAP_69
#define __MACRO_VA_ARGS_N_MAP_71                                            71, __MACRO_VA_ARGS_N_MAP_70
#define __MACRO_VA_ARGS_N_MAP_72                                            72, __MACRO_VA_ARGS_N_MAP_71
#define __MACRO_VA_ARGS_N_MAP_73                                            73, __MACRO_VA_ARGS_N_MAP_72
#define __MACRO_VA_ARGS_N_MAP_74                                            74, __MACRO_VA_ARGS_N_MAP_73
#define __MACRO_VA_ARGS_N_MAP_75                                            75, __MACRO_VA_ARGS_N_MAP_74
#define __MACRO_VA_ARGS_N_MAP_76                                            76, __MACRO_VA_ARGS_N_MAP_75
#define __MACRO_VA_ARGS_N_MAP_77                                            77, __MACRO_VA_ARGS_N_MAP_76
#define __MACRO_VA_ARGS_N_MAP_78                                            78, __MACRO_VA_ARGS_N_MAP_77
#define __MACRO_VA_ARGS_N_MAP_79                                            79, __MACRO_VA_ARGS_N_MAP_78
#define __MACRO_VA_ARGS_N_MAP_80                                            80, __MACRO_VA_ARGS_N_MAP_79
#define __MACRO_VA_ARGS_N_MAP_81                                            81, __MACRO_VA_ARGS_N_MAP_80
#define __MACRO_VA_ARGS_N_MAP_82                                            82, __MACRO_VA_ARGS_N_MAP_81
#define __MACRO_VA_ARGS_N_MAP_83                                            83, __MACRO_VA_ARGS_N_MAP_82
#define __MACRO_VA_ARGS_N_MAP_84                                            84, __MACRO_VA_ARGS_N_MAP_83
#define __MACRO_VA_ARGS_N_MAP_85                                            85, __MACRO_VA_ARGS_N_MAP_84
#define __MACRO_VA_ARGS_N_MAP_86                                            86, __MACRO_VA_ARGS_N_MAP_85
#define __MACRO_VA_ARGS_N_MAP_87                                            87, __MACRO_VA_ARGS_N_MAP_86
#define __MACRO_VA_ARGS_N_MAP_88                                            88, __MACRO_VA_ARGS_N_MAP_87
#define __MACRO_VA_ARGS_N_MAP_89                                            89, __MACRO_VA_ARGS_N_MAP_88
#define __MACRO_VA_ARGS_N_MAP_90                                            90, __MACRO_VA_ARGS_N_MAP_89
#define __MACRO_VA_ARGS_N_MAP_91                                            91, __MACRO_VA_ARGS_N_MAP_90
#define __MACRO_VA_ARGS_N_MAP_92                                            92, __MACRO_VA_ARGS_N_MAP_91
#define __MACRO_VA_ARGS_N_MAP_93                                            93, __MACRO_VA_ARGS_N_MAP_92
#define __MACRO_VA_ARGS_N_MAP_94                                            94, __MACRO_VA_ARGS_N_MAP_93
#define __MACRO_VA_ARGS_N_MAP_95                                            95, __MACRO_VA_ARGS_N_MAP_94
#define __MACRO_VA_ARGS_N_MAP_96                                            96, __MACRO_VA_ARGS_N_MAP_95
#define __MACRO_VA_ARGS_N_MAP_97                                            97, __MACRO_VA_ARGS_N_MAP_96
#define __MACRO_VA_ARGS_N_MAP_98                                            98, __MACRO_VA_ARGS_N_MAP_97
#define __MACRO_VA_ARGS_N_MAP_99                                            99, __MACRO_VA_ARGS_N_MAP_98

#define __MACRO_VA_ARGS_N_RMAP_0                                            99, __MACRO_VA_ARGS_N_RMAP_1
#define __MACRO_VA_ARGS_N_RMAP_1                                            98, __MACRO_VA_ARGS_N_RMAP_2
#define __MACRO_VA_ARGS_N_RMAP_2                                            97, __MACRO_VA_ARGS_N_RMAP_3
#define __MACRO_VA_ARGS_N_RMAP_3                                            96, __MACRO_VA_ARGS_N_RMAP_4
#define __MACRO_VA_ARGS_N_RMAP_4                                            95, __MACRO_VA_ARGS_N_RMAP_5
#define __MACRO_VA_ARGS_N_RMAP_5                                            94, __MACRO_VA_ARGS_N_RMAP_6
#define __MACRO_VA_ARGS_N_RMAP_6                                            93, __MACRO_VA_ARGS_N_RMAP_7
#define __MACRO_VA_ARGS_N_RMAP_7                                            92, __MACRO_VA_ARGS_N_RMAP_8
#define __MACRO_VA_ARGS_N_RMAP_8                                            91, __MACRO_VA_ARGS_N_RMAP_9
#define __MACRO_VA_ARGS_N_RMAP_9                                            90, __MACRO_VA_ARGS_N_RMAP_10
#define __MACRO_VA_ARGS_N_RMAP_10                                           89, __MACRO_VA_ARGS_N_RMAP_11
#define __MACRO_VA_ARGS_N_RMAP_11                                           88, __MACRO_VA_ARGS_N_RMAP_12
#define __MACRO_VA_ARGS_N_RMAP_12                                           87, __MACRO_VA_ARGS_N_RMAP_13
#define __MACRO_VA_ARGS_N_RMAP_13                                           86, __MACRO_VA_ARGS_N_RMAP_14
#define __MACRO_VA_ARGS_N_RMAP_14                                           85, __MACRO_VA_ARGS_N_RMAP_15
#define __MACRO_VA_ARGS_N_RMAP_15                                           84, __MACRO_VA_ARGS_N_RMAP_16
#define __MACRO_VA_ARGS_N_RMAP_16                                           83, __MACRO_VA_ARGS_N_RMAP_17
#define __MACRO_VA_ARGS_N_RMAP_17                                           82, __MACRO_VA_ARGS_N_RMAP_18
#define __MACRO_VA_ARGS_N_RMAP_18                                           81, __MACRO_VA_ARGS_N_RMAP_19
#define __MACRO_VA_ARGS_N_RMAP_19                                           80, __MACRO_VA_ARGS_N_RMAP_20
#define __MACRO_VA_ARGS_N_RMAP_20                                           79, __MACRO_VA_ARGS_N_RMAP_21
#define __MACRO_VA_ARGS_N_RMAP_21                                           78, __MACRO_VA_ARGS_N_RMAP_22
#define __MACRO_VA_ARGS_N_RMAP_22                                           77, __MACRO_VA_ARGS_N_RMAP_23
#define __MACRO_VA_ARGS_N_RMAP_23                                           76, __MACRO_VA_ARGS_N_RMAP_24
#define __MACRO_VA_ARGS_N_RMAP_24                                           75, __MACRO_VA_ARGS_N_RMAP_25
#define __MACRO_VA_ARGS_N_RMAP_25                                           74, __MACRO_VA_ARGS_N_RMAP_26
#define __MACRO_VA_ARGS_N_RMAP_26                                           73, __MACRO_VA_ARGS_N_RMAP_27
#define __MACRO_VA_ARGS_N_RMAP_27                                           72, __MACRO_VA_ARGS_N_RMAP_28
#define __MACRO_VA_ARGS_N_RMAP_28                                           71, __MACRO_VA_ARGS_N_RMAP_29
#define __MACRO_VA_ARGS_N_RMAP_29                                           70, __MACRO_VA_ARGS_N_RMAP_30
#define __MACRO_VA_ARGS_N_RMAP_30                                           69, __MACRO_VA_ARGS_N_RMAP_31
#define __MACRO_VA_ARGS_N_RMAP_31                                           68, __MACRO_VA_ARGS_N_RMAP_32
#define __MACRO_VA_ARGS_N_RMAP_32                                           67, __MACRO_VA_ARGS_N_RMAP_33
#define __MACRO_VA_ARGS_N_RMAP_33                                           66, __MACRO_VA_ARGS_N_RMAP_34
#define __MACRO_VA_ARGS_N_RMAP_34                                           65, __MACRO_VA_ARGS_N_RMAP_35
#define __MACRO_VA_ARGS_N_RMAP_35                                           64, __MACRO_VA_ARGS_N_RMAP_36
#define __MACRO_VA_ARGS_N_RMAP_36                                           63, __MACRO_VA_ARGS_N_RMAP_37
#define __MACRO_VA_ARGS_N_RMAP_37                                           62, __MACRO_VA_ARGS_N_RMAP_38
#define __MACRO_VA_ARGS_N_RMAP_38                                           61, __MACRO_VA_ARGS_N_RMAP_39
#define __MACRO_VA_ARGS_N_RMAP_39                                           60, __MACRO_VA_ARGS_N_RMAP_40
#define __MACRO_VA_ARGS_N_RMAP_40                                           59, __MACRO_VA_ARGS_N_RMAP_41
#define __MACRO_VA_ARGS_N_RMAP_41                                           58, __MACRO_VA_ARGS_N_RMAP_42
#define __MACRO_VA_ARGS_N_RMAP_42                                           57, __MACRO_VA_ARGS_N_RMAP_43
#define __MACRO_VA_ARGS_N_RMAP_43                                           56, __MACRO_VA_ARGS_N_RMAP_44
#define __MACRO_VA_ARGS_N_RMAP_44                                           55, __MACRO_VA_ARGS_N_RMAP_45
#define __MACRO_VA_ARGS_N_RMAP_45                                           54, __MACRO_VA_ARGS_N_RMAP_46
#define __MACRO_VA_ARGS_N_RMAP_46                                           53, __MACRO_VA_ARGS_N_RMAP_47
#define __MACRO_VA_ARGS_N_RMAP_47                                           52, __MACRO_VA_ARGS_N_RMAP_48
#define __MACRO_VA_ARGS_N_RMAP_48                                           51, __MACRO_VA_ARGS_N_RMAP_49
#define __MACRO_VA_ARGS_N_RMAP_49                                           50, __MACRO_VA_ARGS_N_RMAP_50
#define __MACRO_VA_ARGS_N_RMAP_50                                           49, __MACRO_VA_ARGS_N_RMAP_51
#define __MACRO_VA_ARGS_N_RMAP_51                                           48, __MACRO_VA_ARGS_N_RMAP_52
#define __MACRO_VA_ARGS_N_RMAP_52                                           47, __MACRO_VA_ARGS_N_RMAP_53
#define __MACRO_VA_ARGS_N_RMAP_53                                           46, __MACRO_VA_ARGS_N_RMAP_54
#define __MACRO_VA_ARGS_N_RMAP_54                                           45, __MACRO_VA_ARGS_N_RMAP_55
#define __MACRO_VA_ARGS_N_RMAP_55                                           44, __MACRO_VA_ARGS_N_RMAP_56
#define __MACRO_VA_ARGS_N_RMAP_56                                           43, __MACRO_VA_ARGS_N_RMAP_57
#define __MACRO_VA_ARGS_N_RMAP_57                                           42, __MACRO_VA_ARGS_N_RMAP_58
#define __MACRO_VA_ARGS_N_RMAP_58                                           41, __MACRO_VA_ARGS_N_RMAP_59
#define __MACRO_VA_ARGS_N_RMAP_59                                           40, __MACRO_VA_ARGS_N_RMAP_60
#define __MACRO_VA_ARGS_N_RMAP_60                                           39, __MACRO_VA_ARGS_N_RMAP_61
#define __MACRO_VA_ARGS_N_RMAP_61                                           38, __MACRO_VA_ARGS_N_RMAP_62
#define __MACRO_VA_ARGS_N_RMAP_62                                           37, __MACRO_VA_ARGS_N_RMAP_63
#define __MACRO_VA_ARGS_N_RMAP_63                                           36, __MACRO_VA_ARGS_N_RMAP_64
#define __MACRO_VA_ARGS_N_RMAP_64                                           35, __MACRO_VA_ARGS_N_RMAP_65
#define __MACRO_VA_ARGS_N_RMAP_65                                           34, __MACRO_VA_ARGS_N_RMAP_66
#define __MACRO_VA_ARGS_N_RMAP_66                                           33, __MACRO_VA_ARGS_N_RMAP_67
#define __MACRO_VA_ARGS_N_RMAP_67                                           32, __MACRO_VA_ARGS_N_RMAP_68
#define __MACRO_VA_ARGS_N_RMAP_68                                           31, __MACRO_VA_ARGS_N_RMAP_69
#define __MACRO_VA_ARGS_N_RMAP_69                                           30, __MACRO_VA_ARGS_N_RMAP_70
#define __MACRO_VA_ARGS_N_RMAP_70                                           29, __MACRO_VA_ARGS_N_RMAP_71
#define __MACRO_VA_ARGS_N_RMAP_71                                           28, __MACRO_VA_ARGS_N_RMAP_72
#define __MACRO_VA_ARGS_N_RMAP_72                                           27, __MACRO_VA_ARGS_N_RMAP_73
#define __MACRO_VA_ARGS_N_RMAP_73                                           26, __MACRO_VA_ARGS_N_RMAP_74
#define __MACRO_VA_ARGS_N_RMAP_74                                           25, __MACRO_VA_ARGS_N_RMAP_75
#define __MACRO_VA_ARGS_N_RMAP_75                                           24, __MACRO_VA_ARGS_N_RMAP_76
#define __MACRO_VA_ARGS_N_RMAP_76                                           23, __MACRO_VA_ARGS_N_RMAP_77
#define __MACRO_VA_ARGS_N_RMAP_77                                           22, __MACRO_VA_ARGS_N_RMAP_78
#define __MACRO_VA_ARGS_N_RMAP_78                                           21, __MACRO_VA_ARGS_N_RMAP_79
#define __MACRO_VA_ARGS_N_RMAP_79                                           20, __MACRO_VA_ARGS_N_RMAP_80
#define __MACRO_VA_ARGS_N_RMAP_80                                           19, __MACRO_VA_ARGS_N_RMAP_81
#define __MACRO_VA_ARGS_N_RMAP_81                                           18, __MACRO_VA_ARGS_N_RMAP_82
#define __MACRO_VA_ARGS_N_RMAP_82                                           17, __MACRO_VA_ARGS_N_RMAP_83
#define __MACRO_VA_ARGS_N_RMAP_83                                           16, __MACRO_VA_ARGS_N_RMAP_84
#define __MACRO_VA_ARGS_N_RMAP_84                                           15, __MACRO_VA_ARGS_N_RMAP_85
#define __MACRO_VA_ARGS_N_RMAP_85                                           14, __MACRO_VA_ARGS_N_RMAP_86
#define __MACRO_VA_ARGS_N_RMAP_86                                           13, __MACRO_VA_ARGS_N_RMAP_87
#define __MACRO_VA_ARGS_N_RMAP_87                                           12, __MACRO_VA_ARGS_N_RMAP_88
#define __MACRO_VA_ARGS_N_RMAP_88                                           11, __MACRO_VA_ARGS_N_RMAP_89 
#define __MACRO_VA_ARGS_N_RMAP_89                                           10, __MACRO_VA_ARGS_N_RMAP_90 
#define __MACRO_VA_ARGS_N_RMAP_90                                           9,  __MACRO_VA_ARGS_N_RMAP_91
#define __MACRO_VA_ARGS_N_RMAP_91                                           8,  __MACRO_VA_ARGS_N_RMAP_92
#define __MACRO_VA_ARGS_N_RMAP_92                                           7,  __MACRO_VA_ARGS_N_RMAP_93
#define __MACRO_VA_ARGS_N_RMAP_93                                           6,  __MACRO_VA_ARGS_N_RMAP_94
#define __MACRO_VA_ARGS_N_RMAP_94                                           5,  __MACRO_VA_ARGS_N_RMAP_95
#define __MACRO_VA_ARGS_N_RMAP_95                                           4,  __MACRO_VA_ARGS_N_RMAP_96
#define __MACRO_VA_ARGS_N_RMAP_96                                           3,  __MACRO_VA_ARGS_N_RMAP_97
#define __MACRO_VA_ARGS_N_RMAP_97                                           2,  __MACRO_VA_ARGS_N_RMAP_98
#define __MACRO_VA_ARGS_N_RMAP_98                                           1,  __MACRO_VA_ARGS_N_RMAP_99
#define __MACRO_VA_ARGS_N_RMAP_99                                           0

#endif // _MACRO_VA_H_
