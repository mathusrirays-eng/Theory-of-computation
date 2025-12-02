#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, left = 0, right = 0;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    i = 0;
    while (i < n && s[i] == '0') { left++; i++; }

    while (i < n && s[i] == '1') i++;

    while (i < n && s[i] == '0') { right++; i++; }

    if (i == n && left == right)
        printf("ACCEPTED\n");
    else
        printf("REJECTED\n");

    return 0;
}

