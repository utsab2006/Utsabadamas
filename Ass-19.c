#include <stdio.h>

int main() {
    char toss;

    printf("Enter result of coin toss (H for Head / T for Tail): ");
    scanf(" %c", &toss); 

    if (toss == 'H' || toss == 'h') {
        printf("It is Head!\n");
    }
    else if (toss == 'T' || toss == 't') {
        printf("It is Tail!\n");
    }
    else {
        printf("Invalid input! Please enter H or T.\n");
    }

    return 0;
}
