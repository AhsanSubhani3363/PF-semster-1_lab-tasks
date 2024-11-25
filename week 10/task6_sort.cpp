#include<iostream>
using namespace std;
void sortpackages(int packages[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(packages[j]>packages[j+1])
            {
                int temp=packages[j];
                packages[j]=packages[j+1];
                packages[j+1]=temp;
            }
        }
        
    }
    
}
int main()
{
    int total;
    cout<<"enter total packages ";
    cin>>total;
  int packages[total];
  for (int i = 0; i < total; i++)
  {
    cout<<"enter weight of package "<<i+1<<" ";
    cin>>packages[i];
  }
  sortpackages(packages,total);
 cout<< "sorted weights in ascending order: ";
    for (int i = 0; i < total; i++) 
    {
        cout << packages[i] << " ";
    }
    cout << endl;
}
