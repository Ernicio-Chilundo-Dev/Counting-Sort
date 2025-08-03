#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum value in the Array
int findMax(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void countingSort(int arr[], int n)
{
    int max = findMax(arr, n);

    // Create count array and initialize to 0
    int *count = (int *)calloc(max + 1, sizeof(int));
    if (count == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    // Count occurrences
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }

    // Free allocated memory
    free(count);
}

