/*Why it matters: Standard binary search stops at any matching index; 
this forces you to keep shrinking the right boundary even after finding a match.
Test case: arr = {2, 5, 5, 5, 5, 8, 10}, target = 5 $\rightarrow$ returns 1.
*/


#include <stdio.h>

int SearchInsert(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int ans = -1;

    while ( left <= right )
    {
        int mid = left + ( right - left ) / 2;
        
        if ( arr[mid] == target )
        {
            ans = mid;
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
    return ans;
}

int main(void)
{
    int arr[] = {2, 5, 5, 5, 5, 8, 10};
    int target = 5;

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = SearchInsert(arr, size, target);

    printf("Insertion position: %d\n", result);

    return 0;
}

