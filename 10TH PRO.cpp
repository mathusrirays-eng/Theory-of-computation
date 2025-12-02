#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int nStates, nTransitions;
int transitions[MAX][MAX];   // transitions[a][b] = 1 if a --e--> b

int visited[MAX];

// DFS to find epsilon closure
void epsilonClosure(int state) {
    for (int next = 0; next < nStates; next++) {
        if (transitions[state][next] && !visited[next]) {
            visited[next] = 1;
            epsilonClosure(next);
        }
    }
}

int main() {
    printf("Enter number of states: ");
    scanf("%d", &nStates);

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &nTransitions);

    // initialize transitions
    for (int i = 0; i < nStates; i++)
        for (int j = 0; j < nStates; j++)
            transitions[i][j] = 0;

    printf("\nEnter epsilon transitions (format: from  to):\n");
    for (int i = 0; i < nTransitions; i++) {
        int from, to;
        scanf("%d %d", &from, &to);
        transitions[from][to] = 1;
    }

    // Compute epsilon-closure for each state
    printf("\n--- Epsilon Closure of Each State ---\n");
    for (int s = 0; s < nStates; s++) {

        // reset visited array
        for (int i = 0; i < nStates; i++) visited[i] = 0;

        visited[s] = 1;   // every closure contains the state itself
        
        epsilonClosure(s);

        printf("e-closure(%d) = { ", s);
        for (int i = 0; i < nStates; i++) {
            if (visited[i]) printf("%d ", i);
        }
        printf("}\n");
    }

    return 0;
}

