#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size)
{
    int max;
    for(int i=0;i<size-1;i++)
    {
      if(arr[i]>arr[i+1])
      max=arr[i];
       else
       max=arr[i+1];
    }
    return max;
}
int main()
{
    int length;
    cout<<"enter length of array ";
    cin>>length;
    int number[length];
   for (int i=0;i<length; i++)
   {
    cout<<"enter number ";
    cin>>number[i];
   }
   cout<<"maximun number is "<<findLargestNumber(number, length);

}