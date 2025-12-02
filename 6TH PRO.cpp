#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0, n, zeros = 0, ones = 0;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    while (i < n && s[i] == '0') { zeros++; i++; }

    while (i < n && s[i] == '1') { ones++; i++; }

    if (i == n && zeros == ones)
        printf("ACCEPTED\n");
    else
        printf("REJECTED\n");

    return 0;
}

