//print the reverse of an array using 2 functions
//reverse algorithm using swap
#include <iostream>
using namespace std;
void reversearray(int arr[],int start, int end) //declaring function to reverse an array
{
    int i = start, j = end; //declaring start and end elements of array
    while(i < j) //condition to swap until start value is less than end value
    { 
        swap(arr[i], arr[j]); //using function swap to swap index values of first and last element
        i++;j--; //incrementing the index value from start and decrementing from the last, so as to swap all elements in reverse i.e until start is less than end value
    }
    return;
}

void printarr(int arr[], int size) //function to print the array
{
    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,4,6,4,9,11,3}; // to use an input array, we can use for loop to take input of an array less than inpoout size and get the reverse output
    int size = sizeof(arr)/sizeof(arr[0]); //for taking size of unknown array
    reversearray(arr,0,size -1); //calling function with values (size -1 used to determine total size of unknown array)
    printarr(arr,size); //calling function to print
    return 0;
}
