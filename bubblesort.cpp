//sorting an array using bubble sort method using 2 functions
//sorting in ascending order
//sorting input array
#include <iostream> 
using namespace std; 
void bubbleSort(int array[], int n) //creating void function to implememnt bubble sort algorithm
{     
	int i, j;
	for (i = 0; i < n - 1; i++) 
    {
		for (j = 0; j < n - i - 1; j++) 
        {                               //using two loops, one loop to select an element and one loop to compsre the element with every other element except itself 
			if (array[j] > array[j + 1]) //condition if selected element is greater than the element on its right i.e one index above
				swap(array[j], array[j + 1]); //to swap element to the right side i.e swapping with the rightside neighbouring elements position if it is greater than the neighbour element
        }
    }
} 
void printArray(int array[], int size) // void function to print sorted array
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << array[i] << " "; //printing sorted array with space separated elements
	cout << endl; 
} 
int main() 
{ 
	int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "; 
    for(int i=0;i<size;i++) //loop to input an array of input size, input elements separated by space in one line 
    {
        cin>>arr[i];
    }
	bubbleSort(arr, size); //calling function to sort input array
	cout <<"Array in ascending: "; 
	printArray(arr, size); //calling function to print sorterd array
	return 0; 
}
