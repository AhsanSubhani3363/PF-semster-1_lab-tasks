#include<iostream>
using namespace std;
int peak(int arr[],int size,int peakarray[])
{
    int count=0;
    for (int i = 1; i < size-1; i++)
    {
         if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) 
         {
            peakarray[count++] = arr[i];
        }
    }
    return count;
}
    
int main()
{
   int size;
   cout<<"enter size of array ";
   cin>>size;
   int arr[size],peakarray[size];
   for (int i = 0; i < size; i++)
   {
    cout<<"enter number "<<i+1<<" ";
    cin>>arr[i];
   }
   int peak_count=peak(arr,size,peakarray);
   if(peak_count==0)
   {
    cout<<"no peak found ";
   }
   else
   {
    cout<<"peak elements ";
    for (int i = 0; i < peak_count; i++)
     {
            std::cout << peakarray[i] << " ";
    }
   }
}