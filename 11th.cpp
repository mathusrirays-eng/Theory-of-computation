#include <stdio.h>

int n, e;
int eps[20][20], vis[20];

void dfs(int s) {
    for (int i = 0; i < n; i++)
        if (eps[s][i] && !vis[i]) {
            vis[i] = 1;
            dfs(i);
        }
}

int main() {
    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter number of e-transitions: ");
    scanf("%d", &e);

    printf("Enter e-transitions (from to):\n");
    for (int i = 0; i < e; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        eps[a][b] = 1;
    }

    printf("\ne-closure of each state:\n");
    for (int s = 0; s < n; s++) {
        for (int i = 0; i < n; i++) vis[i] = 0;

        vis[s] = 1;
        dfs(s);

        printf("e-closure(%d): { ", s);
        for (int i = 0; i < n; i++)
            if (vis[i]) printf("%d ", i);
        printf("}\n");
    }
}

