#include<iostream>
using  namespace std;
int printsum(int array[][3],int row)
{
    int sum=0;
   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        sum=sum + array[i][j];
    }
    
   }
   return sum;
   
}
int main()
{
    int row;
    cout<<"enter row size ";
    cin>>row;
    int array[row][3];
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"enter element "<< i << j<<" " ;
            cin>>array[i][j];
        }
        
    }
    
    cout<<"sum of elements is "<<printsum(array,row);
}