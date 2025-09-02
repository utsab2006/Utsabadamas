#include <stdio.h>
#include <string.h>

int main() {
    char toss[10];

    printf("Enter result of coin toss (Head/Tail): ");
    scanf("%s", toss);


    if (strcmp(toss, "Head") == 0 || strcmp(toss, "head") == 0) {
        printf("It is Head!\n");
    } 
    else if (strcmp(toss, "Tail") == 0 || strcmp(toss, "tail") == 0) {
        printf("It is Tail!\n");
    } 
    else {
        printf("Invalid input! Please enter Head or Tail.\n");
    }

    return 0;
}