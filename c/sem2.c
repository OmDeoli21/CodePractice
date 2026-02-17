#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n); // Inputs number of elements

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];// Assume first element is both max and min
   
    for (i = 1; i < n; i++) // Finding largest and smallest elements
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Output result
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}




