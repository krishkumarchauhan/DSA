// Write a C program to reverse an array and print the unique elements of the array.
#include <stdio.h>
#define S 100
void input_array(int array[], int *length)
{
    printf("Enter length of array: ");
    scanf("%d", length);

    printf("Enter %d elements:\n", *length);
    for (int i = 0; i < *length; i++)
    {
        scanf("%d", &array[i]);
    }
}

void reverse_array(int array[], int length)
{
    int temp;
    for (int i = 0; i < length / 2; i++)
    {
        temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }

    printf("\nReversed array:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void check_unique_array(int array[], int length)
{
    printf("\nUnique elements:\n");
    for (int i = 0; i < length; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
            printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[S];
    int length;

    input_array(array, &length);
    reverse_array(array, length);
    check_unique_array(array, length);

    return 0;
}
