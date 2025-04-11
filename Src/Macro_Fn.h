#ifndef _MACRO_FN_H_
#define _MACRO_FN_H_

#include "Macro_VA.h"

#define __MACRO_FN__(FN, ...)                           FN(__VA_ARGS__)
#define __MACRO_FN_(FN, ...)                            __MACRO_FN__(FN, __VA_ARGS__)
#define __MACRO_FN(FN, ...)                             __MACRO_FN_(FN, __VA_ARGS__)

#define __MACRO_FN_MAP__(FN_MAP, ...)                   __MACRO_FN(__MACRO_VA_ARGS_MAP(FN_MAP, __VA_ARGS__), __VA_ARGS__)
#define __MACRO_FN_MAP_(FN_MAP, ...)                    __MACRO_FN_MAP__(FN_MAP, __VA_ARGS__)
#define __MACRO_FN_MAP(FN_MAP, ...)                     __MACRO_FN_MAP(FN_MAP, __VA_ARGS__)

#endif // _MACRO_FN_H_
