#include <stdio.h>
#include <stdlib.h>

int main(void){
    float test,lab,assignment,grade;
    printf("Enter the scores of Written test, lab exams and Assignments\n");
    scanf("%f%f%f",&test,&lab,&assignment);
    grade = (test*70)/100 + (lab*20)/100 + (assignment*10)/100;
    printf("Your grade is: %f",grade);
    return 0;
}