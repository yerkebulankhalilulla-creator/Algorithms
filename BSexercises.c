/*
int arr[] = {2, 5, 8, 12, 16, 23, 38};
int target = 16;

// Expected: 4*/

#include <stdio.h>

int BS( int arr[], int size, int target )
{
    int left = 0;
    int right = size - 1;

    while ( left <= right )
    {
        int mid = left + ( right - left ) / 2;

        if ( arr[mid] == target )
        {
            return mid;
        }

        if ( arr[mid] < target )
        {
            left = mid + 1;
        }
        
        else
        {
            right = mid - 1;
        }
    }
    return -1;

}


int main()
{
    int arr[] = { 2, 5, 8, 12, 16, 23, 38 };
    int target = 16;

    int size = sizeof( arr ) / sizeof( arr[0] );

    int result = BS( arr, size, target );

    if ( result != -1 )
    {
        printf("%d", result);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}