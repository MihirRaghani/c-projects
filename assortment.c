Here are the solutions to all four C programming problems combined into a single, menu-driven file. This program allows the user to select which problem they want to solve.

```c
#include <stdio.h>
#include <stdlib.h>

// --- Function Declarations ---
void findNegativeElements();
void findLargestElement();
void transposeMatrix();
void sumRowAndColumn();

int main() {
    int choice;

    do {
        // Display the menu to the user
        printf("\n--- C Programming Project Menu ---\n");
        printf("1. Find Negative Elements in a 1D Array\n");
        printf("2. Find the Largest Element in a 2D Array\n");
        printf("3. Find the Transpose of a 2D Array\n");
        printf("4. Sum of Elements in a Row & Column of a 2D Array\n");
        printf("0. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Call the appropriate function based on user's choice
        switch (choice) {
            case 1:
                findNegativeElements();
                break;
            case 2:
                findLargestElement();
                break;
            case 3:
                transposeMatrix();
                break;
            case 4:
                sumRowAndColumn();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

/**
 * @brief Solves Q.1: Finds and displays all the negative numbers
 * from a one-dimensional array provided by the user.
 */
void findNegativeElements() {
    int size;

    printf("\n--- Q.1: Negative Elements in 1D Array ---\n");
    printf("Enter the array's size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size.\n");
        return;
    }

    int arr[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nNegative elements from an Array: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
}

/**
 * @brief Solves Q.2: Finds and displays the largest number
 * from a two-dimensional array provided by the user.
 */
void findLargestElement() {
    int rows, cols;

    printf("\n--- Q.2: Largest Element in 2D Array ---\n");
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions.\n");
        return;
    }

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int maxElement = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d\n", maxElement);
}

/**
 * @brief Solves Q.3: Calculates and displays the transpose
 * of a two-dimensional array.
 */
void transposeMatrix() {
    int size;

    printf("\n--- Q.3: Transpose of 2D Array ---\n");
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size.\n");
        return;
    }

    int arr[size][size];
    int transpose[size][size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            transpose[j][i] = arr[i][j]; // Transpose logic
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

/**
 * @brief Solves Q.4: Calculates the sum of elements of a specified
 * row and a specified column in a 2D array.
 */
void sumRowAndColumn() {
    int rows, cols;

    printf("\n--- Q.4: Sum of Row & Column in 2D Array ---\n");
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions.\n");
        return;
    }

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rowNum, colNum;

    // --- Row Summation ---
    printf("\nEnter row number (0 to %d): ", rows - 1);
    scanf("%d", &rowNum);

    if (rowNum >= 0 && rowNum < rows) {
        int rowSum = 0;
        printf("Elements of row %d: ", rowNum);
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[rowNum][j]);
            rowSum += arr[rowNum][j];
        }
        printf("\nThe sum of row %d: %d\n", rowNum, rowSum);
    } else {
        printf("Invalid row number.\n");
    }

    // --- Column Summation ---
    printf("\nEnter column number (0 to %d): ", cols - 1);
    scanf("%d", &colNum);
    
    if (colNum >= 0 && colNum < cols) {
        int colSum = 0;
        printf("Elements of column %d: ", colNum);
        for (int i = 0; i < rows; i++) {
            printf("%d ", arr[i][colNum]);
            colSum += arr[i][colNum];
        }
        printf("\nThe sum of column %d: %d\n", colNum, colSum);
    } else {
        printf("Invalid column number.\n");
    }
}
```
