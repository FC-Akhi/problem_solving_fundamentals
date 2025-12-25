// Tree recursion 
// Time complexity: O(2^n)
// Space complexity: O(n)

// Check the diagram of tree recusion drawn for exampl n = 3, inside diagrams dir

#include<stdio.h>

// Linear recusion is where there are one recusion call
// Below there is statement before and after recusion call, so it is not call as
// head/tail recusion. As both behaviour is there its just recusion or linear recusion
// Besides a function which has one and only recusion call line is linear recusion.
// So head/tail with one recusion call is linear recusion type.
void linear_recur (int n) {


    if (n > 0) {

        printf("Before call: %d\n", n);

        linear_recur(n - 1);
        
        printf("After call: %d\n", n);
    }

}



// Tree recusion is where there are multiple recusion 
// call lines instead of one like linear recursion
void tree_recur (int n) {


    if (n > 0) {

        printf("%d ", n);

        tree_recur(n - 1);
        tree_recur(n - 1);
    }

}


int main (void) {

    int n = 3;

    tree_recur(3);
    printf("\n");
    linear_recur(3);


    return 0;
}