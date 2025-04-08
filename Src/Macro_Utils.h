#ifndef _MACRO_UTILS_H_
#define _MACRO_UTILS_H_


#define __MACRO_TUPLE_EXPAND__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND_(...)                      __MACRO_TUPLE_EXPAND__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND(X)                         __MACRO_TUPLE_EXPAND_ X

#define __MACRO_FN__(FN, ...)                           FN(__VA_ARGS__)
#define __MACRO_FN_(FN, ...)                            __MACRO_FN__(FN, __VA_ARGS__)
#define __MACRO_FN(FN, ...)                             __MACRO_FN_(FN, __VA_ARGS__)


#endif
