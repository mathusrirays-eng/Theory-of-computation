#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", input);   

    len = strlen(input);

    if (len > 0 && input[0] == '0' && input[len - 1] == '1')
        printf("ACCEPTED: String starts with 0 and ends with 1.\n");
    else
        printf("REJECTED: Does not satisfy DFA conditions.\n");

    return 0;
}

