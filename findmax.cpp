//printing max element of an array
#include <iostream>
using namespace std;
int findmax(int arr[],int size) //creating function to contain find max algorithm
{
    int max = arr[0]; //letting first element as max to compare
    for(int i=0;i<size;i++)
    {
        if (arr[i]>max) max = arr[i]; //loop condition to compare the first element and swap it with a larger element until the largest is found
    }
    return max; //returning value of the max ineteger found or output when the loop ends
}
int main()
{
    int s;
    cout<<"Enter Size of Array: ";
    cin>>s;
    int arr[s];
    for(int i =0; i<s; i++)
    {
        cin>>arr[i]; //loop takes input of array elemens separated by space, within the size 
    }
    cout<<"Max Element of Array is : "<<findmax(arr, s)<<endl; //calling function to print max element
    return 0;
}