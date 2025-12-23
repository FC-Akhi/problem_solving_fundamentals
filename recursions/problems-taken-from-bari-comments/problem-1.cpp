// Problem practice with recursive function using:
// printing at recursive function calling and returning time
// Use and test the behaviour of post and pre decrement operator in function call


#include<stdio.h>


// Use of printf in function calling and returning time inside func_1
int func_1 (int n) {

    static int i = 1;

    if (n > 0) {

        // print statement at the function calling time
        printf("%d\n", n);

        func_1(n - 1);

        // print statement at the function returning time
        printf("%d: %d\n", i, n);

        i++;

    }

    return n; 
}

// Use of post decrement in recursive function call - end up infinite function call
int func_2 (int n) {

    static int i = 1;

    if (n > 0) {

        // print statement at the function calling time
        printf("%d\n", n);
        
        // Use of post decrement
        func_2(n--);

        // print statement at the function returning time
        printf("%d: %d\n", i, n);

        i++;

    }
    
    return n; 
}

// Use of pre decrement in recursive function call
int func_3 (int n) {

    static int i = 1;

    if (n > 0) {

        // print statement at the function calling time
        printf("%d\n", n);

        // Use of pre decrement
        func_3(--n);

        // print statement at the function returning time
        printf("%d: %d\n", i, n);

        i++;

    }
    
    return n; 
}


int main (void) {

    int n = 3, z = 0;


    // Use of printf in function calling and returning time inside func_1
    z = func_1(n);
    printf("z: %d\n", z);

    // Use of printf in function calling and returning time inside func_2
    // Use of post decrement in recursive function call - end up infinite function call
    // Segmentation fault
    // z = func_2(n);
    // printf("z: %d\n", z);

    // Use of printf in function calling and returning time inside func_3
    // Use of pre decrement in recursive function call
    // Gives differnet output than func_1
    z = func_3(n);
    printf("z: %d\n", z);


    return 0;

}