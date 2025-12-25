// Practice problems from Bari tutorial 
// 51. Static and Global Variables in Recursion

#include<stdio.h>

// Test of head recursive behaviour with value n add on returning time
// Value of n will have multiple copy with differnet value in it in each function call
int head_recursion_func (int n) {

    if (n > 0) {

        printf("%d ", n);
        return head_recursion_func (n - 1) + n;

    }

    printf("\n");

    return 0;

}


// Test of recursive behaviour with static variable used in function returning 
int recursive_func_with_static_var (int n) {

    // Remember static variable will have single copy which will get updated in each call
    // No multiple copy will be created on each recusive call
    static int x = 0;

    if (n > 0) {

        x++;

        return recursive_func_with_static_var (n - 1) + x;

    }

    return 0;

}

// Remember global variable will have single copy which will get updated in each call
// No multiple copy will be created on each recusive call
int x = 0;


// Test of recursive behaviour with global variable used in function returning 
int recursive_func_with_global_var (int n) {

    if (n > 0) {

        x++;

        return recursive_func_with_global_var (n - 1) + x;

    }

    return 0;

}





int main (void) {

    int n;

    // Take use input for value n
    scanf("%d", &n);

    int sum_of_head_recur = head_recursion_func(n);                         
    int sum_of_recur_with_static_var = recursive_func_with_static_var(n);   
    int sum_of_recur_with_global_var = recursive_func_with_global_var(n);   

    printf("%d\n", sum_of_head_recur);              // Output: 15 for n = 5
    printf("%d\n", sum_of_recur_with_static_var);   // Output: 25 for n = 5
    printf("%d\n", sum_of_recur_with_global_var);   // Output: 25 for n = 5

    
    
    // Calling recursive function using global variable for 2nd time and check new behaviour
    sum_of_recur_with_global_var = recursive_func_with_global_var(n);
    printf("%d\n", sum_of_recur_with_global_var);   // Output: 50 for n = 5

    return 0;


}