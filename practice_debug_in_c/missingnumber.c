#include <stdio.h>

int findMissingNumber(int arr[], int size); // Function to find the missing number

int main() {
    int n;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n); // Read the size of the array

    int arr[n];

    printf("Enter %d numbers (1 to %d, with one missing):\n", n, n + 1);
    for (int i = 0; i < n; i++) { // Loop to read the array elements
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);

    return 0;
}

int findMissingNumber(int arr[], int size) {
    int totalSum = (size + 1) * (size + 2) / 2; // Calculate the total sum of 1 to n+1
    int actualSum = 0;

    for (int i = 0; i < size; i++) { // Loop to calculate the actual sum of array elements
        actualSum += arr[i];
    }

    return totalSum - actualSum; // Return the missing number
}
