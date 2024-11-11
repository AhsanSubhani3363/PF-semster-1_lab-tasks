#include<iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        return true;
        else
        return false;
    }
    
}
int main()
{
    int size;
    cout<<"enter number of elements of array ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter number ";
        cin>>array[i];
    }
    
cout<< isAlreadyEntered( array,size);
}