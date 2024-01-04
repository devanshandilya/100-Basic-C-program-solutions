#include <iostream>
using namespace std;
int main()
{
    int n; //size for array
    cout<<"enter array size: ";
    cin>>n; //input of array size
    int arr[n]; //declaring array with the declared size
    int evenSum = 0; 
    int oddSum = 0; //declaring values in order to use looping to find odd and even sum which is obviously initialsed from 0
    cout<<" enter array elements";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i]; //loop to input array
        if(i % 2 == 0) evenSum = evenSum + arr[i]; //condition to print sum of even elements by incrementing all array elements divisible by
        else oddSum = oddSum + arr[i]; //else condition to increment all elements which are not divisible by 2
    }
    
    cout<<"ODD = "<<oddSum<<endl<<"EVEN = "<<evenSum; //this gives the sum of  even elements as well as odd elements on 2 different lines
    return 0;
}