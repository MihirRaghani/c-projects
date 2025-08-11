#include <stdio.h>

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the array's size: ");
    scanf("%d", &size);

    // Declare an array of the specified size
    int arr[size];

    // Prompt the user to input the array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Print a header for the output
    printf("\nNegative elements from an Array: ");

    // Loop through the array and print any element less than 0
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    // Print a newline for clean formatting
    printf("\n");

    return 0;
}
