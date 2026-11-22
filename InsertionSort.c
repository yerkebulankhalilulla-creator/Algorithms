 /*
 Insertion sort is a simple sorting algorithm that works by iteratively inserting 
each element of an unsorted list into its correct position in a sorted portion of the list.

Start with the second element as the first element is assumed to be sorted.
Compare the second element with the first if the second is smaller then swap them.
Move to the third element, compare it with the first two, and put it in its correct position

Repeat until the entire array is sorted.

It is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. 
Then, you pick a card from the unsorted group and put it in the right place in the sorted group.*/


#include <stdio.h>
void InsertionS( int arr[], int length )
{
    
    // Start from the second element because the first element is already considered sorted.
    for (int i = 1; i < length; ++i)
    {
        int key = arr[i]; // Store the current element that we want to insert into the correct position.
        int j = i - 1;    // Start comparing with the element immediately to the left of key.

        // Continue while we haven't reached the beginning and the previous element is greater than key.
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift the greater element one position to the right.
            j = j - 1;           // Move one position to the left to check the next element.
        }

        arr[j + 1] = key; // Insert key into its correct position.
    }


    for ( int i = 0; i < length; ++i )
    {
        
        printf( "arr[%d] = [%d]", i, arr[i] );
        printf("\n");        

    }
}



int main( )
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int length = sizeof(arr) / sizeof(arr[0]);



    InsertionS(arr, length);

    return 0;
}