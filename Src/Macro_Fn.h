#ifndef _MACRO_FN_H_
#define _MACRO_FN_H_

#include "Macro_VA.h"

#define __MACRO_FN__(FN, ...)                           FN(__VA_ARGS__)
#define __MACRO_FN_(FN, ...)                            __MACRO_FN__(FN, __VA_ARGS__)
#define __MACRO_FN(FN, ...)                             __MACRO_FN_(FN, __VA_ARGS__)

#define __MACRO_FN_MAP__(FN_MAP, ...)                   __MACRO_FN(__MACRO_VA_ARGS_MAP(FN_MAP, __VA_ARGS__), __VA_ARGS__)
#define __MACRO_FN_MAP_(FN_MAP, ...)                    __MACRO_FN_MAP__(FN_MAP, __VA_ARGS__)
#define __MACRO_FN_MAP(FN_MAP, ...)                     __MACRO_FN_MAP_(FN_MAP, __VA_ARGS__)

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
    #define __MACRO_FN_MAP_ARG__(FN_MAP, ARG, ...)      __MACRO_FN(__MACRO_VA_ARGS_MAP(FN_MAP, __VA_ARGS__), ARG __VA_OPT__(,) __VA_ARGS__)
#else
    #define __MACRO_FN_MAP_ARG__(FN_MAP, ARG, ...)      __MACRO_FN(__MACRO_VA_ARGS_MAP(FN_MAP, __VA_ARGS__), ARG, ##__VA_ARGS__)
#endif
#define __MACRO_FN_MAP_ARG_(FN_MAP, ARG, ...)           __MACRO_FN_MAP_ARG__(FN_MAP, ARG, __VA_ARGS__)
#define __MACRO_FN_MAP_ARG(FN_MAP, ARG, ...)            __MACRO_FN_MAP_ARG_(FN_MAP, ARG, __VA_ARGS__)

#endif // _MACRO_FN_H_
