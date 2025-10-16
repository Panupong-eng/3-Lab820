//61-panupong-Lab820
#include <stdio.h>
int main() {
    int player1, player2;
    printf("Player 1: Enter number: ");
    scanf("%d", &player1);
    printf("Player 2: Guess Number:");
    scanf("%d", &player2);
    while (player2 != player1) {
        if (player2 < player1)
            printf("Smaller than.. Try again\n");
        else
            printf("Greater than.. Try again\n");
        printf("Guess again: ");
        scanf("%d", &player2);
    }
        printf("Congratulations! You win.\n");
}