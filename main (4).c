/*OPONDA, AERON D.*/
#include <stdio.h>


struct Subject {
    char name[30];
    float grade;
};

int main() {
   
    struct Subject subjects[] = {
        {"Science", 92.5},
        {"History", 74.0},
        {"Math", 78.5},
        {"English", 85.0},
        {"Physical Ed", 98.0},
        {"Art", 88.5}
    };

    int count = 6; 
    struct Subject temp;

    
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            
            
            if (subjects[j].grade > subjects[j + 1].grade) {
              
                temp = subjects[j];
                subjects[j] = subjects[j + 1];
                subjects[j + 1] = temp;
            }
        }
    }

  
   
    printf("  SUBJECT GRADES (LOWEST TO HIGHEST)\n");
    
    printf("%-20s %s\n", "Subject Name", "Grade");
    printf("-----------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-20s %.2f\n", subjects[i].name, subjects[i].grade);
    }
    
    

    return 0;
}