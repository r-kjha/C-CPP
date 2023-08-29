/*
Binary Search

a. WAA of binary search and its working mechanism
b. WAP to search a user given number from {4,5,6,7,8,9} using binary search


*/

/*

Algorithm:
1. Compare x with the middle element.
2. If x matches with middle element, we return the mid index.
3. Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
4. Else (x is smaller) recur for the left half.

*/

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int r, int x)
{
    if(r>=l)
    {
        int mid = l + (r-l)/2;

        if(arr[mid] == x)
            return mid;
        else if(arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        else
            return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int main()
{
    int arr[] = {4,5,6,7,8,9};
    int x, n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number to be searched:");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n-1, x);
    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);
    return 0;
}

