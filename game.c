#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate a dice roll (1 to 6)
int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    int userRoll, compRoll;
    char playAgain;

    srand(time(NULL)); // Seed for random numbers

    printf("🎲 Welcome to the Most Serious Dice Battle™ 💀\n");
    printf("Can you beat a computer with no emotions or mercy?\n");

    do {
        printf("\nPress Enter to roll your dice...");
        getchar(); // Wait for user input

        userRoll = rollDice();
        printf("🧍 You rolled: %d\n", userRoll);

        printf("🤖 Computer is rolling...");
        compRoll = rollDice();
        printf("\n🤖 Computer rolled: %d\n", compRoll);

        // Funny result evaluation
        if (userRoll > compRoll) {
            printf("🎉 You win! Brag about it to your microwave.\n");
        } else if (userRoll < compRoll) {
            printf("💔 You lose! Even your pet goldfish saw it coming.\n");
        } else {
            printf("😑 It's a tie. Destiny has no favorites.\n");
        }

        // Ask to play again
        printf("\nPlay again? (y/n): ");
        scanf(" %c",&playAgain);
        getchar(); // Clear newline from buffer

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\n🚪 Exiting the game. Come back when you're ready to lose again!\n");
    return 0;
}
