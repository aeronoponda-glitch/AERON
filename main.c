/*OPONDA, AERON D.*/
#include <stdio.h>

int main() {
    float age;
    
    printf("Enter your age: "); 
    scanf("%f", &age);

    if (age >= 18) {
        printf("YOU are NOT a VIRGIN\n"); 
    } else {
        printf("YOU are still VIRGIN\n");
    }
    
    return 0;
}