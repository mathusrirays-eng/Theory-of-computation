#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n >= 2 && s[0] == 'b' && s[n-1] == 'a')
        printf("ACCEPTED: String belongs to the NFA language.\n");
    else
        printf("REJECTED: String does not belong to the NFA language.\n");

    return 0;
}

