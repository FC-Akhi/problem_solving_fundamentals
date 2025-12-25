// Practice of head recursion
// Try to mimic head recursion as it is using loop.
// Ouput gets flipped if used head recusion as it is using loop

#include<stdio.h>

// Head recusion
void head_recur_func (int n) {

    if (n > 0) {

        head_recur_func (n - 1);
        printf("%d ", n);
    }
}


// Using loop same as it is in head recusion
void head_recur_as_it_is_using_loop (int n) {

    while (n > 0) {
        

        printf("%d ", n);

        n--;    // also try this line before prinf() and see output
    }
}


// If you wnat to get same output of head recusion using loop
void get_same_output_as_head_recur_using_loop (int n) {

    int i = 1;
    while (i <= n) {

        printf("%d ", i);

        i++;
    }
}


int main (void) {


    int n = 5;

    head_recur_func (n);                            // Output: 1 2 3 4 5

    printf("\n");

    head_recur_as_it_is_using_loop (n);             // Output: 5 4 3 2 1

    printf("\n");

    get_same_output_as_head_recur_using_loop(n);    // Output: 1 2 3 4 5


    return 0;
}