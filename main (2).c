/*OPONDA, AERON D.*/
#include <stdio.h>

int main() {
    
    
    printf("--- FOR Loop ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");


    
    printf("--- WHILE Loop ---\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++; 
    }
    printf("\n\n");


    
    printf("--- DO-WHILE Loop ---\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n\n");

    return 0;
}