#include <stdio.h>
#include <stdlib.h>

int main(void){
    int day;
    printf("Enter 1 for Sunday\nEnter 2 for Monday\nEnter 3 for Tuesday\nEnter 4 for Wednesday\nEnter 5 for Thursday\nEnter 6 for Friday\nEnter 7 for Saturday.\n");
    scanf("%d",&day);
    switch (day){
        case 1:
            printf("You have choosen Sunday");
            break;
        case 2:
            printf("You have choosen Monday");
            break;
        case 3:
            printf("You have choosen Tuesday");
            break;
        case 4:
            printf("You have choosen Wednesday");
            break;
        case 5:
            printf("You have choosen Thursday");
            break;
        case 6:
            printf("You have choosen Friday");
            break;
        case 7:
            printf("You have choosen Saturday");
            break;
        default:
            printf("Invalid input.");
            break;
    }
    return 0;
}