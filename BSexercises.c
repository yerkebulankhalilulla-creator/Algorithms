/*Find the index where the target should be inserted to maintain sorted order.
int arr[] = {1, 3, 5, 7, 9};
int target = 6;
*/
// Expected: 3

#include <stdio.h>

int SearchInsert(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return left;
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int target = 6;

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = SearchInsert(arr, size, target);

    printf("Insertion position: %d\n", result);

    return 0;
}