#include <iostream>
using namespace std;
int binarysearch(int arr[], int n,int key) //declaring function to contain binary search algorithm
{
    int max = n-1; //max index of array is size -1
    int min = 0; //minimum index of array is 0
    int mid; 
    while ( min<= max)
     {
        mid = (min+max)/2; //mid index of array is half the sum of min + max index
 
        if (arr[mid] == key)
            return mid; //condition to return mid index if the key element is at the mid itself
        if (arr[mid] < key)
            min = mid + 1; //condition to shift to the right index if mid element is less than key element i.e the array being in ascending order
        else if(arr[mid] > key)
            max = mid - 1; //condition to shift to the left side of the array if key is smaller than the required array 
    }
    return mid; //returning answer for the index of key element
}
int main()
{
    int key;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {  
        cin>>arr[i]; //taking input array separated by space
    }
    cout<<"Enter element to search: ";
    cin>>key;
    cout<<"Index of key element : "<<binarysearch(arr,n,key)<<endl;//calling function
}   