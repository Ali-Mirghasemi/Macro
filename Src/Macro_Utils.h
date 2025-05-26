#ifndef _MACRO_UTILS_H_
#define _MACRO_UTILS_H_

#define __MACRO_ARRAY_LEN__(ARR)                        (sizeof(ARR) / sizeof(ARR[0]))
#define __MACRO_ARRAY_LEN_(ARR)                         __MACRO_ARRAY_LEN__(ARR)
#define __MACRO_ARRAY_LEN(ARR)                          __MACRO_ARRAY_LEN_(ARR)

#define __MACRO_TUPLE_EXPAND__(...)                     __VA_ARGS__
#define __MACRO_TUPLE_EXPAND_(...)                      __MACRO_TUPLE_EXPAND__(__VA_ARGS__)
#define __MACRO_TUPLE_EXPAND(X)                         __MACRO_TUPLE_EXPAND_ X

#define __MACRO_VER_STR_BUILD__(major, minor, fix)      #major "." #minor "." #fix
#define __MACRO_VER_STR_BUILD_(major, minor, fix)       __MACRO_VER_STR_BUILD__(major, minor, fix)
#define __MACRO_VER_STR_BUILD(major, minor, fix)        __MACRO_VER_STR_BUILD_(major, minor, fix)

#define __MACRO_VER_BUILD__(major, minor, fix)          ((major * 1000000UL) + (minor * 1000UL) + (fix))
#define __MACRO_VER_BUILD_(major, minor, fix)           __MACRO_VER_BUILD__(major, minor, fix)
#define __MACRO_VER_BUILD(major, minor, fix)            __MACRO_VER_BUILD_(major, minor, fix)
                              

#endif
