#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);   

    len = strlen(str);

    if (len > 0 && str[0] == 'a' && str[len - 1] == 'a')
        printf("ACCEPTED: The string starts and ends with 'a'.\n");
    else
        printf("REJECTED: The string does not match the DFA.\n");

    return 0;
}

