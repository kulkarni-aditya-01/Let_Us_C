#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CODE_LENGTH 4
#define MAX_ATTEMPTS 10

void generateSecretCode(int secretCode[CODE_LENGTH]) {
    // Function to generate a random secret code
    for (int i = 0; i < CODE_LENGTH; ++i) {
        secretCode[i] = rand() % 6 + 1; // You can customize the range as needed
    }
}

void displayInstructions() {
    // Function to display game instructions
    printf("Welcome to Mastermind!\n");
    printf("Try to guess the secret code.\n");
    printf("Feedback legend: '+' correct position and color, '-' correct color but wrong position.\n\n");
}

void displayCode(int code[CODE_LENGTH]) {
    // Function to display the secret code (for testing purposes)
    printf("Secret Code: ");
    for (int i = 0; i < CODE_LENGTH; ++i) {
        printf("%d ", code[i]);
    }
    printf("\n");
}

void displayFeedback(int feedback[CODE_LENGTH]) {
    // Function to display feedback for the current guess
    printf("Feedback: ");
    for (int i = 0; i < CODE_LENGTH; ++i) {
        if (feedback[i] == 1) {
            printf("+ ");
        } else if (feedback[i] == -1) {
            printf("- ");
        } else {
            printf("  ");
        }
    }
    printf("\n\n");
}

int checkGuess(int secretCode[CODE_LENGTH], int guess[CODE_LENGTH], int feedback[CODE_LENGTH]) {
    // Function to check the guess and provide feedback
    int correctPositionAndColor = 0;
    int correctColor = 0;

    for (int i = 0; i < CODE_LENGTH; ++i) {
        if (guess[i] == secretCode[i]) {
            feedback[i] = 1; // Correct position and color
            correctPositionAndColor++;
        } else {
            feedback[i] = 0; // Reset feedback for this position

            for (int j = 0; j < CODE_LENGTH; ++j) {
                if (i != j && guess[i] == secretCode[j] && feedback[j] == 0) {
                    feedback[j] = -1; // Correct color but wrong position
                    correctColor++;
                    break;
                }
            }
        }
    }

    return correctPositionAndColor;
}

int isGuessCorrect(int feedback[CODE_LENGTH]) {
    // Function to check if the guess is correct
    for (int i = 0; i < CODE_LENGTH; ++i) {
        if (feedback[i] != 1) {
            return 0; // Guess is not completely correct
        }
    }
    return 1; // Guess is correct
}

int main() {
    srand(time(NULL)); // Seed for random number generation

    int secretCode[CODE_LENGTH];
    generateSecretCode(secretCode);

    int guess[CODE_LENGTH];
    int feedback[CODE_LENGTH];

    int attempts = 0;

    displayInstructions();

    while (attempts < MAX_ATTEMPTS) {
        printf("Attempt %d: Enter your guess (space-separated numbers): ", attempts + 1);

        for (int i = 0; i < CODE_LENGTH; ++i) {
            scanf("%d", &guess[i]);
        }

        int correctPositionAndColor = checkGuess(secretCode, guess, feedback);

        displayFeedback(feedback);

        if (isGuessCorrect(feedback)) {
            printf("Congratulations! You've guessed the secret code!\n");
            break;
        }

        printf("Correct position and color: %d\n", correctPositionAndColor);
        printf("Correct color but wrong position: %d\n", CODE_LENGTH - correctPositionAndColor);

        ++attempts;
    }

    // Display a message if the player runs out of attempts
    if (attempts == MAX_ATTEMPTS) {
        printf("Sorry, you've run out of attempts. The secret code was: ");
        displayCode(secretCode);
    }

    return 0;
}
