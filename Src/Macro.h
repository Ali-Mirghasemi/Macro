/**
 * @file Macro.h
 * @author Ali Mirghasemi (ali.mirghasemi1376@gmail.com)
 * @brief This library provide useful macros to usee in other libraries
 * @version 0.1
 * @date 2025-03-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef _MACRO_H_
#define _MACRO_H_

#include "Macro_Utils.h"
#include "Macro_Fn.h"
#include "Macro_VA.h"
#include "Macro_Str.h"
#include "Macro_For.h"
#include "Macro_Join.h"

/* ----------------------------- Basic Macros ----------------------------- */
/**
 * @brief Return array length
 * 
 * @param ARR array name
 * @return array length
 */
#define MACRO_ARRAY_LEN(ARR)                                __MACRO_ARRAY_LEN(ARR)
/**
 * @brief Return number of inputs
 * 
 * @param inputs
 * @return number of inputs
 */
#define MACRO_VA_ARGS_LEN(...)                              __MACRO_VA_ARGS_LEN(__VA_ARGS__)                
/**
 * @brief Return 0 if there is more inputs, if length of inputs is 0 or 1 returns 1
 * 
 * @param inputs
 * @return 0 or 1
 */
#define MACRO_VA_ARGS_CHECK_END(...)                        __MACRO_VA_ARGS_CHECK_END(__VA_ARGS__)
/**
 * @brief Map given tuple to number of inputs
 * Ex: MAP -> (TwoInput, OneInput, ZeroInput)
 *     MACRO_VA_ARGS_MAP((TwoInput, OneInput, ZeroInput))           -> ZeroInput
 *     MACRO_VA_ARGS_MAP((TwoInput, OneInput, ZeroInput), One)      -> OneInput
 *     MACRO_VA_ARGS_MAP((TwoInput, OneInput, ZeroInput), One, Two) -> TwoInput
 * 
 * @param MAP macro set in tuple format
 * @param list of inputs
 * @return returns MAP[len(list)]
 */
#define MACRO_VA_ARGS_MAP(MAP, ...)                         __MACRO_VA_ARGS_MAP(MAP, __VA_ARGS__)
/**
 * @brief Concatenate inputs and convert it to string
 * 
 * @param multiple inputs
 * @return string
 */
#define MACRO_STR(...)                                      __MACRO_STR(__VA_ARGS__)
/**
 * @brief Expand a tuple to usable arguments
 * Ex: (A, B, C) -> A, B, C
 * 
 * @param X Tuple arguments
 */
#define MACRO_TUPLE_EXPAND(X)                               __MACRO_TUPLE_EXPAND(X)
/**
 * @brief Use Fn with given arguments
 * 
 * @param FN Macro like function as input
 * @param list of inputs
 */
#define MACRO_FN(FN, ...)                                   __MACRO_FN(FN, __VA_ARGS__)
/**
 * @brief Map list of macro functions based on number of inputs
 * 
 * @param FN_MAP tuple of macro functions
 * @param list of inputs
 */
#define MACRO_FN_MAP(FN_MAP, ...)                           __MACRO_FN_MAP(FN_MAP, __VA_ARGS__)
/**
 * @brief Map list of macro functions based on number of inputs
 * 
 * @param FN_MAP tuple of macro functions
 * @param ARG given argument that pass to FN
 * @param list of inputs
 */
#define MACRO_FN_MAP_ARG(FN_MAP, ARG, ...)                  __MACRO_FN_MAP_ARG(FN_MAP, ARG, __VA_ARGS__)
/**
 * @brief For each over given parameters
 * 
 * @param FN macro that want to use for every inputs
 * @param list of inputs
 */
#define MACRO_FOR(FN, ...)                                  __MACRO_FOR(FN, __VA_ARGS__)
/**
 * @brief For each over given parameters
 * 
 * @param FN macro that want to use for every inputs
 * @param ARG given argument that pass to FN
 * @param list of inputs
 */
#define MACRO_FOR_ARG(FN, ARG, ...)                         __MACRO_FOR_ARG(FN, ARG, __VA_ARGS__)
/**
 * @brief For each over given tuple parameters
 * 
 * @param FN macro that want to use for every inputs
 * @param list of inputs
 */
#define MACRO_FOR_TUPLE(FN, ...)                            __MACRO_FOR_TUPLE(FN, __VA_ARGS__)
/**
 * @brief For each over given tuple parameters with arguments
 * 
 * @param FN macro that want to use for every inputs
 * @param ARG given argument that pass to FN
 * @param list of inputs
 */
#define MACRO_FOR_TUPLE_ARG(FN, ARG, ...)                   __MACRO_FOR_TUPLE_ARG(FN, ARG, __VA_ARGS__)
/**
 * @brief For each over given parameters and Map list of macro functions based on number of inputs
 * 
 * @param FN_MAP list of macro functions
 * @param list of inputs
 */
#define MACRO_FOR_MAP(FN_MAP, ...)                          __MACRO_FOR_MAP(FN_MAP, __VA_ARGS__)
/**
 * @brief For each over given parameters and Map list of macro functions based on number of inputs
 * with argument that pass to each macro function
 * 
 * @param FN_MAP list of macro functions
 * @param ARG argument
 * @param list of inputs
 */
#define MACRO_FOR_MAP_ARG(FN_MAP, ARG, ...)                 __MACRO_FOR_MAP_ARG(FN_MAP, ARG, __VA_ARGS__)
/**
 * @brief Join multiple inputs and put separator between them
 * 
 * @param SEP seperator
 * @param list of inputs
 */
#define MACRO_JOIN(SEP, ...)                                __MACRO_JOIN(SEP, ...)

#endif // _MACRO_H_
