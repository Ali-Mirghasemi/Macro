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
#include "Macro_VA.h"
#include "Macro_Str.h"
#include "Macro_For.h"

/* ----------------------------- Basic Macros ----------------------------- */
/**
 * @brief Return array length
 * 
 * @param ARR array name
 * @return array length
 */
#define MACRO_ARRAY_LEN(ARR)                                (sizeof(ARR) / sizeof(ARR[0]))
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
 * @brief Concatenate inputs and convert it to string
 * 
 * @param multiple inputs
 * @return string
 */
#define MACRO_STR(...)                                      __MACRO_STR(__VA_ARGS__)
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
 * @brief Expand a tuple to usable arguments
 * Ex: (A, B, C) -> A, B, C
 * 
 * @param X Tuple arguments
 */
#define MACRO_TUPLE_EXPAND(X)                               __MACRO_TUPLE_EXPAND(X)

#endif // _MACRO_H_
