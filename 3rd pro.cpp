#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n >= 2 && s[0] == '0' && s[n-1] == '1')
        printf("ACCEPTED\n");
    else
        printf("REJECTED\n");

    return 0;
}

