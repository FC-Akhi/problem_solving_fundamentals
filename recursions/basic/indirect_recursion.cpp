// Indirect recursion: 
// Where for e.g., func A call to func B and func B call to func A and keep doing this
// circular motion untill any function condition becomes false


// Output pattern of this indirect recusion is 
// n, n - 1, (n - 1) /2, ((n - 1) /2) - 1, (((n - 1) /2) - 1) / 2 ...
// E.g., for n = 30
// 30, 29, 14, 13, 6, 5, 2
// A,  B,  A,  B,  A, B, A
#include<stdio.h>

// Function prototype need to give as we are using func_B inside
// func_A before declaration func_B
void func_B (int n);


// func_A calls func_B
void func_A (int n) {

    if (n > 0) {

        printf("%d ", n);
        
        func_B(n - 1);
    }

}


// func_B calls func_A
void func_B (int n) {

    if (n > 1) {

        printf("%d ", n);
        
        func_A(n / 2);
    }
    
}



int main (void) {

    // Try to call func_A first
    func_A(9);     // Output: 9 8 4 3 1
    printf("\n");
    
    func_A(20);     // Output: 20 19 9 8 4 3 1
    printf("\n");
    
    func_A(30);     // Output: 30 29 14 13 6 5 2
    printf("\n");


    // Try to call func_B first
    func_B(9);     // Output: 9 4 3 1
    printf("\n");
    
    func_B(20);     // Output: 20 10 9 4 3 1
    printf("\n");
    
    func_B(30);     // Output: 30 15 14 7 6 3 2 1
    printf("\n");

    return 0;
}