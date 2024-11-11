#include<iostream>
using namespace std;
void reverse(int number[],int length)
{
    cout<<"number in reverse order ";
  for(int i=length-1;i>=0;i--)
  {
    cout<<number[i];
  }
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
   reverse(number,length) ;
}