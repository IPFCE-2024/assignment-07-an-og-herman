/*
 * Exercise 1: Taylor Series Approximation for Sine Function
 * Assignment 7 - IPFCE 2025
 * 
 * Implement the taylor_sine function that calculates the sine of x
 * using Taylor series approximation with n terms.
 * 
 * Taylor series for sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
 */

#include "include/taylor_sine.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

/* 
 * Calculate sine using Taylor series approximation
 * x: input value in radians
 * n: number of terms in the series
 * Returns: approximation of sin(x)
 */
int fakultet(int n){
    int sum = 1;
    for (int i=2; i<=n; i++){
        sum = sum *i;
    }

    return sum;
}


double taylor_sine(double x, int n) {
    // TODO: Implement the Taylor series approximation for sine
    // Hint: The series is: x - x^3/3! + x^5/5! - x^7/7! + ...
    // Use a loop to calculate n terms of the series
    assert(n>0);

    double result = x;
    double curr;

    for (int i=1; i<n; i++){
        curr = pow(-1, i) * (pow(x, 1+i*2) / (double)fakultet(1+i*2));
        result += curr;
    }

    return result; // placeholder - replace with your implementation
}

// void test_taylor_sine(){
//     double x=0;
//     int n=5;

//     double res = sin(x);
//     double own_res = taylor_sine(x,n);

//     printf("ANSI C sine is : %f \n", res);
//     printf("Our sine is : %f \n", own_res);

//     x = 3.14;
//     res = sin(x);
//     own_res = taylor_sine(x,n);

//     printf("ANSI C sine is : %f \n", res);
//     printf("Our sine is : %f \n", own_res);

//     x = 1.5;
//     res = sin(x);
//     own_res = taylor_sine(x,n);

//     printf("ANSI C sine is : %f \n", res);
//     printf("Our sine is : %f \n", own_res);

// }

// int main(){
//     test_taylor_sine();
// }

