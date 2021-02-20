/**
 * @file factorial.h
 * @author Bharath.G (bharath.g@ltts.com)
 * @brief Function to find out the Factorial of a Positive integer number
 * @version 0.1
 * @date 2021-02-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FACTORIAL_H__
#define __FACTORIAL_H__
/**
 * @brief Error values for Factorial compute operation
 */
typedef enum error_t{
    NEGATIVE_NUMBER = -1,
    ZERO,
    SUCCESS
}error_t;

/**
 * @brief Funcrion to find factorial of positive integer number
 * @param[in] num Integer for which the factorail has to be calculated
 * @param[out] result computed value
 * @return error_t Success or failure, error_t value
 */
error_t find_factorial(int num, long* result);

#endif /* __FACTORIAL_H__ */