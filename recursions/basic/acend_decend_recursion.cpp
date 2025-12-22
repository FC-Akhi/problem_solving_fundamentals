// Day 2 of Redemption
// 22nd Dec, 2025

#include<stdio.h>


// print before recursive function call. 
// Each call will take a space in stack 
// Output: 4 3 2 1
void ascend_recursion (int n) {

    if (n > 0) {

        printf("%d", n);

        ascend_recursion(n-1);
    }

}

// print after recursive function call
// Each call will take a space in stack 
// Output: 1 2 3 4
void decend_recursion (int n) {

    if (n > 0) {

        decend_recursion(n-1);

        printf("%d", n);
    }

    
}



int main (void) {

    int n = 4;

    ascend_recursion(n);

    printf("\n");

    decend_recursion(n);


    return 0;
}