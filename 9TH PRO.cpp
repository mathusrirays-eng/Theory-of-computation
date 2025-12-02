#include <stdio.h>
#include <string.h>

int isAccepted(char str[]) {
    int len = strlen(str);

    if (len == 0)
        return 0;

    if (str[0] == '0' && str[len - 1] == '1')
        return 1;
    
    return 0;
}

int main() {
    char input[100];

    printf("Enter a binary string: ");
    scanf("%s", input);

    if (isAccepted(input))
        printf("String is ACCEPTED by the NFA.\n");
    else
        printf("String is REJECTED by the NFA.\n");

    return 0;
}

