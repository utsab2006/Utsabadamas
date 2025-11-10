#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // 1. Length of string
    printf("\n1. Length of first string: %lu", strlen(str1));
    printf("\n   Length of second string: %lu", strlen(str2));

    // 2. Copy one string to another
    strcpy(str3, str1);
    printf("\n\n2. Copy of first string into str3: %s", str3);

    // 3. Compare the strings
    if(strcmp(str1, str2) == 0)
        printf("\n\n3. Strings are Equal");
    else
        printf("\n\n3. Strings are Not Equal");

    // 4. Concatenate the strings
    strcat(str1, str2);
    printf("\n\n4. Concatenation of both strings: %s", str1);

    return 0;
}