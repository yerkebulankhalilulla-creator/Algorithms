/* 
# Binary Search
Binary Search is a searching algorithm that repeatedly divides a sorted list in half to find a target element.

Let's imagine we're playing a number-guessing game. The goal is to guess a number between 1 and 100.

If I use Linear Search to find the number 100, I might have to check all 100 numbers one by one.

However, with Binary Search, I start by guessing 50.

- If the target is higher, I eliminate everything below 50.
- Next, I guess 75.
- If the target is higher, I eliminate everything below 75.
- I continue dividing the remaining search range in half until I find the target.

This makes Binary Search significantly faster when working with large datasets.

## Time Complexity

- Best case: O(1) — the target is found on the first attempt.
- Average case: O(log n)
- Worst case: O(log n)

**Important:** Binary Search requires the data to be sorted before searching.

## Space Complexity

- Iterative implementation: O(1)
- Recursive implementation: O(log n) due to the recursion call stack. */



#include <stdio.h>

int BinaryS( int arr[], int size, int target ) // Creating a function
{
    int left = 0; // 
    int right = size - 1;


    while ( left <= right ) // Continue searching while the search range is not empty  
    {
        int mid = left + ( right - left ) / 2;  // Calculate the middle index.

        if ( arr[mid] == target ) // if the middle element matches the target, return its index
        {  
            return mid;
        }

        if ( arr[mid] < target ) // if the middle element os smaller than the target, search the right half. 
        {
            left = mid + 1;
        }

        else // If the middle element is greater than the target, search the left half.
        {
           right = mid - 1;
        }
    }
   
    return -1;
}


int main()
{
    int arr[] = {2,5,8,12,16};
    int target = 12;

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = BinaryS( arr, size, target );

    if ( result != -1 )
    {
        printf("Target was found at index %d\n", result);
    }
    else
    {
        printf("Target not found.\n");
    }

    return 0;
}





