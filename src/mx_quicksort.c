#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    if(!arr)
        return -1;
    int count = 0;
    char *temp;
    int mid = (left + right) / 2;
    while(left <= right) {
        while(arr[left] < arr[mid])
            left++;
        while(arr[right] > arr[mid])
            right--;
        if(left <= right) {
            temp = arr[left++];
            arr[left++] = arr[right--];
            arr[right--] = temp;
            count++;
        }
    }
    return count;
}
