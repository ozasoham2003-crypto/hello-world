#include <stdio.h>

int main() {
    int choice;

    printf("🎉 Welcome to Kaun Banega Crorepati! 🎉\n");
    printf("Here's your question:\n\n");

    printf("Q: Who invented the light bulb?\n");
    printf("1) Thomas Edison\n");
    printf("2) Albert Einstein\n");
    printf("3) Nikola Tesla\n");
    printf("4) Alexander Graham Bell\n\n");

    printf("Enter your option (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n 7 crore");
    } else if (choice >= 2 && choice <= 4) {
        printf("\n❌ Oops! That's wrong. Better luck next time!\n");
    } else {
        printf("\n🤨 Invalid option! Are you trying to hack the system? 😜\n");
    }

    printf("\nThanks for playing KBC - the only place where guessing can make you rich!\n");

    return 0;
}
