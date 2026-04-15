#include <stdio.h>

int main()
{
    printf("Enter size of array and rotation key resppectively\n");
    
    int z, k;
    scanf("%d %d", &z, &k);

    int arr[z];

    printf("Enter elements of array\n");
    for (int i = 0; i < z; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = z - k;
    int rot_arr[z];

    for (int i = 0; i < z; i++)
    {
        if (a < z)
        {
            rot_arr[i] = arr[a];
            a++;
        }
        else
        {
            a = 0;
            i--;
        }
    }

    int length = 1;
    int prevlength = 0;

    for (int i = 0; i < z - 1; i++)
    {
        if (rot_arr[i] < rot_arr[i + 1])
        {
            length++;
        }
        else
        {
            prevlength = length;
            length = 1;
        }
    }

    if (prevlength > length)
    {
        printf("%d,", prevlength);
    }
    else
    {
        printf("%d", length);
    }

    return 0;
}
