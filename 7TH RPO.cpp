#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter string: ");
    scanf("%s", s);

    // Check if "101" exists anywhere in the string
    if (strstr(s, "101") != NULL)
        printf("ACCEPTED\n");
    else
        printf("REJECTED\n");

    return 0;
}

