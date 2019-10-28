#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Your Array Size :";
    cin>>n;
    int arr[n];
    cout<<"Enter your Element of array :\n";
  
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  cout<<"\nYour Entered Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
