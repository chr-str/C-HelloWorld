#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed for random number generation
    
    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;
    int attempts = 1;
    
    printf("Guess the number between 1 and 100\n");
    
    do {
        printf("(Attempt %d) Enter your guess: ", attempts);
        scanf("%d", &guess);
        
        
        if (guess == randomNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        } else if (guess < randomNumber) {
            printf("My number is higher.\n");
            attempts++;
        } else {
            printf("My number is lower.\n");
            attempts++;
        }
    } while (guess != randomNumber);
    
    return 0;
}
