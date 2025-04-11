#ifndef _MACRO_UTILS_H_
#define _MACRO_UTILS_H_


#define __MACRO_TUPLE_EXPAND__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND_(...)                      __MACRO_TUPLE_EXPAND__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND(X)                         __MACRO_TUPLE_EXPAND_ X

#endif
