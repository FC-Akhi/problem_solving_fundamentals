// Day 1 of Redemption
// 21st Dec, 2025
// Topic: General Recursion problem solve; taken 1st problem from this video: https://www.youtube.com/watch?v=ngCos392W4w&t=311s
// ========================================================================================================================================
// Write a recursive function that given an input n sums all nonnegative up to n.
// Example: Given n = 5
// Constraints sum all nonnegative upto n
// Confusion: 0 is included as nonnegative or not??
// 0 is neither positive neither negative. So yes 0 is non-negative.
// But one operation to add 0 is useless. 

// keeping 0 case for later lets start from 1 till given 5
// Sums of all non negative upto n will be (1 + 2 + 3 + 4 + 5)
// ========================================================================================================================================

// We will be trying suggested simplest steps to solve any recursive problem
// ----------------------------------------------------------------------------------------

// Step 1: Ask question: What's the simplest possible input for the recursion function? 
// Answer: simplest input is n = 0. Which we will take as base case. Only for this value we provide the explicit solution like sum of n = 0 is 0.
// It is like a base of the recipe/art/building. Based on very basic (for n = 0) we will building the struture of the recursion

// Step 2: Play around with examples and visualize for differnet inputs!
// Take an example like this sum example and visualize. visualize how it grows. 
// IDEA: Make a project where we can see visualization of a recursive function for sum example for any n input. 

// Step 3: Once visualize for differnet inputs, find the relation between hard input case to the simple input case
// Example: Finding relation between Recursive visualization for n = 5 with n = 3 or n = 4    
// Asking question: If i get answer for n = 4 case can i solve for n = 5 case? 
// If we know n = 4 case, then interestingly we can solve for n = 5 case just by adding 5 with the result of n = 4 case.

// Step 4: Generalize the pattern
// If we want to find out result for n = k case; then for that we know we can first find out sum for n = k - 1 and then add k with it

// Step 5: Write the damn code combining the recurisve pattern with the base case
// sum(n) = sum(n-1) + n
// ----------------------------------------------------------------------------------------

// Lets dig in...

#include <stdio.h>

int sum_recursion (int input_n) {


    // base case to stop this monster
    if (input_n == 0)
        return 0;

    printf("before moving to the next recusion: %d\n", input_n);
    // return sum_recursion(input_n - 1) + input_n;
    return input_n + sum_recursion(input_n - 1);
    

}


int main (void) {

    int sum = sum_recursion(5);

}