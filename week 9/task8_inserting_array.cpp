#include<iostream>
using namespace std;
void insert(int aray1[],int size1,int aray2[],int size2)
{
    cout<<aray1[0];
    for(int i=0;i<size2;i++)
    {
        cout<<aray2[i];
    }
   cout<<aray1[1];
    
}
int main()
{
    int size1,size2;
    cout<<"enter size of first array ";
    cin>>size1;
    int array1[size1];
 cout<<"enter values of first array  ";
    for(int i=0;i<size1;i++)
    {
       cin>>array1[i];
     }
     cout<<"enter size of second array  ";
    cin>>size2;
    int array2[size2]; 
    cout<<"enter values of second array ";
    for(int i=0;i<size2;i++)
    {
       cin>>array2[i];
     }
     insert(array1,  size1,  array2,  size2);
     }
