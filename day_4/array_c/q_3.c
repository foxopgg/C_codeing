#include <stdio.h>
#define MAX_SIZE 50 // Maximum array size

int main()
{
    int arr[MAX_SIZE]; // Declare array of MAX_SIZE
    int i, N;

    /* Input size of the array */
    scanf("%d", &N);

    /* Input elements in the array */
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(i=0; i<N; i++)
    {
        /* If current array element is negative */
        if(arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}