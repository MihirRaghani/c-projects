#include <stdio.h>

int main() {
    int rows = 5;

    // --- Question 1: Number Pyramid ---
    printf("--- Q-1: Number Pyramid ---\n");
    int count = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");


    // --- Question 2: Binary Pyramid ---
    printf("--- Q-2: Binary Pyramid ---\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");


    // --- Question 3: Alphabet Pyramid ---
    printf("--- Q-3: Alphabet Pyramid ---\n");
    char ch = 'A';
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");


    // --- Question 4: Asterisk Pyramid ---
    printf("--- Q-4: Asterisk Pyramid ---\n");
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");


    // --- Question 5: Number Palindrome Pyramid ---
    printf("--- Q-5: Number Palindrome Pyramid ---\n");
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");


    // --- Question 6: Alphabet Palindrome Pyramid ---
    printf("--- Q-6: Alphabet Palindrome Pyramid ---\n");
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        for (int j = i - 2; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");


    // --- Question 7: Number-Character Pyramid ---
    printf("--- Q-7: Number-Character Pyramid ---\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                printf("%d ", i);
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n--------------------------------\n\n");

    return 0;
}
