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

#include "Macro_VA.h"
#include "Macro_Str.h"

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
 * @brief Concatenate inputs and convert it to string
 * 
 * @param multiple inputs
 * @return string
 */
#define MACRO_STR(...)                                      __MACRO_STR(__VA_ARGS__)

#endif // _MACRO_H_
