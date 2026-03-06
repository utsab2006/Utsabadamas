#include <stdio.h>
#include <limits.h> 

int main() {
    int n, temp_n, digit;
    int min_digit;


    printf("Enter an integer: ");
    scanf("%d", &n);

    
    temp_n = n;
    if (temp_n < 0) {
        temp_n = -temp_n;
    }
    
    
    if (temp_n == 0) {
        printf("Smallest digit = 0\n");
        return 0;
    }

    
    min_digit = 9; 

    while (temp_n > 0) {
        
        digit = temp_n % 10;
        
    
        if (digit < min_digit) {
            min_digit = digit; 
        }
        
        
        temp_n = temp_n / 10;
    }

    
    printf("Smallest digit = %d\n", min_digit);

    return 0;
}
