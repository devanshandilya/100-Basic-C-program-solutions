//array sorting using selection sort 
//sorting in ascending order
//using 2 functions
#include <iostream> 
using namespace std; 
void selectionsort(int array[], int n) //creating function which will contain the sorting algorithm
{ 
	int i, j, min; //min for the minimum element
	for(i=0;i<n-1;i++) //for loop for index starting from 0 upto length of array
    { 
		min= i; //letting minimum as the index i which will be incremented 
		for(j=i+1;j<n;j++) //loop which will compare the selected element with the element next to it until all elements are compared
        { 
			if(array[j] < array[min]) 
				min = j; //condition when the selected element turns out to be less than the first element, to let new minimum element be the selected element
		} 
		if (min != i) 
			swap(array[min], array[i]); //condition to swap the minimum element with the first element, if minimum is not equal to first element, hence finding the minimum element of the entire array
	} 
} 
void printSortedArray(int array[], int n) //function to print the sorted array
{ 
	int i; 
	for(i=0;i<n;i++) 
    { 
		cout<< array[i]<<" "; //prints array elements separated by space
	
	} 
} 
int main() 
{ 
	int size;
    cout<<"Enter Array Size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i]; //input array elements separated by space
    }
    selectionsort(arr, size); 
	cout<<"Sorted array: ";      //calling functions
	printSortedArray(arr, size); 
	return 0; 
} 
