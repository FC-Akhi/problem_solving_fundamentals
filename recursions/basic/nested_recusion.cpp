// Nested recursion 

#include<stdio.h>


int nested_recur (int n) {


    if (n > 100)
        return n - 10;

    else
        return nested_recur(nested_recur(n + 11));

}



int main (void) {

    int r;
    
    r = nested_recur(95);
    printf("%d\n", r);

    r = nested_recur(25);
    printf("%d\n", r);

    r = nested_recur(99);
    printf("%d\n", r);

    r = nested_recur(100);
    printf("%d\n", r);

    r = nested_recur(101);
    printf("%d\n", r);

    r = nested_recur(102);
    printf("%d\n", r);

    r = nested_recur(103);
    printf("%d\n", r);

    r = nested_recur(500);
    printf("%d\n", r);
    
    return 0;
}