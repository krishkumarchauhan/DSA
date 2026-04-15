// Write a C program to implement Binary Insertion Sort using Binary Search to find the correct position of elements in an array.

#include<stdio.h>
int binarysearch(int arr[],int item,int low,int high)
{
    while(low<=high)
    {
       int mid=(low+high)/2;
       if(arr[mid]==item)
       {
        return mid+1;
       }
       else if(arr[mid]<item)
       {
        low=mid+1;
       }
       else{
        high=mid-1;
       }


    }
    return low;
}
//---------binary insertion sort function----------------
void binaryinsertionsearch(int arr[],int n)
{
    int i,j,key,loc;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        loc=binarysearch(arr,key,0,j);

        printf("Element %d will be inserted at position %d\n",key,loc);

        while(j>=loc)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[]={5,2,9,1,3};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n=5;

    printf("Orignal array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    binaryinsertionsearch(arr,n);

    printf("Sorted aray\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    getchar();
    return 0;
}

