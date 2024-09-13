#include <stdio.h>
#include <string.h>

char candidate[2][30] = {"john", "james"};  // 2D array to store two candidates' names
int votes[2] = {0, 0};  // Array to track votes for each candidate

void castVote(char* name) {
    int i;
    for (i = 0; i < 2; i++) {
        if (strcmp(name, candidate[i]) == 0) {
            votes[i]++;  // Increment the votes for the matched candidate
            printf("Vote for %s cast\n", name);
            return;
        }
    }
    printf("Candidate not found\n");
}

int main() {
    char name[30];
    
    printf("Enter candidate name: ");
    scanf("%s", name);
    
    castVote(name);  // Call the castVote function with the entered candidate name
    
    // Print the total votes for each candidate
    printf("Total votes for %s: %d\n", candidate[0], votes[0]);
    printf("Total votes for %s: %d\n", candidate[1], votes[1]);

    return 0;
}
