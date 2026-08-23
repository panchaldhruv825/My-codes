#include <stdio.h>

#define MAX 5


int main()
{
    int arr[MAX];
    int n, i, element, pos;

    // Input current number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Overflow condition
    if (n == MAX)
    {
        printf("Overflow! Array is full. Insertion is not possible.\n");
        return 0;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element and position
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Check valid position
    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid Position!\n");
        return 0;
    }

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos - 1] = element;
    n++;

    // Display updated array
    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
