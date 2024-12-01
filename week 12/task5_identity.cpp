#include<iostream>
using namespace std;
bool  identity(int array[3][3])
{
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (i == j && array[i][j] != 1) {
                return false;
            }
           
            if (i != j && array[i][j] != 0) {
                return false;
        }
     }
}
return true;
}
int main()
{
    int array[3][3];
    cout<<"enter elements of array ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"enter elements at "<<i<<j<<" ";
            cin>>array[i][j];
        }
        
    }
   if(identity(array))
   {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<array[i][j]<<"\t";
        }
          cout<<endl;
    }
  
    cout<<"this is identity martrix ";
}
   else {
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<array[i][j]<<"\t";
        }
          cout<<endl;
    }
   cout<<"not an identity ";  
}
}