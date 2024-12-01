#include<iostream>
using namespace std;
void printcars(int cars[][5])//part A
{
  cout<<"toyota cars are "<<cars[1][3]<<endl;
}
int redcars(int cars[][5])//part B
{
  int sum;
  for(int i=0;i<5;i++)
  {
    sum=sum+cars[i][0];
  }
  return sum;
}
int nissancars(int cars[][5])//part C
{
  int sum;
  for(int i=0;i<5;i++)
  {
    sum=sum+cars[2][i];
  }
  return sum;
}
int converter(int cars[][5],string color)
{
  int add;
  if (color=="red")
  {
    cout<<"red cars are "<<endl;
    for (int i = 0; i <5; i++)
    {
      add=add+cars[i][0];
    }
  }
  else  if (color=="blue")
  {
    cout<<"blue cars are "<<endl;
    for (int i = 0; i <5; i++)
    {
      add=add+cars[i][3];
    }
  }
  else  if (color=="brown")
  {
    cout<<"brown cars are "<<endl;
    for (int i = 0; i <5; i++)
    {
      add=add+cars[i][2];
    }
  }
  else  if (color=="black")
  {
    cout<<"black cars are "<<endl;
    for (int i = 0; i <5; i++)
    {
      add=add+cars[i][1];
    }
  }
  else  if (color=="gray")
  {
    cout<<"gray cars are "<<endl;
    for (int i = 0; i <5; i++)
    {
      add=add+cars[i][4];
    }
  }
   return add;
  }
  void transpose(int cars[5][5])
  {
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) 
        {
          int temp = cars[i][j];
            cars[i][j] = cars[j][i];
            cars[j][i] = temp;
        }
    }
    cout << "\nTransposed matrix is:" << endl;
        for (int i = 0; i < 5; i++) 
        {
        for (int j = 0; j < 5; j++)
        {
            cout <<cars[i][j] << " ";
        }
        cout << endl;
    }
  }
int main()
{
    int cars[5][5]={{10,7,12,10,4},
    {18,11,15,17,2},{23,19,12,16,14},{7,12,16,0,2},{3,5,6,2,1}};
   printcars(cars);
   cout<<"total red cars "<<redcars(cars)<<endl;
   cout<<"total nissan  cars "<< nissancars(cars)<<endl;
   string color;
   cout<<"enter color ";
   cin>>color;
   cout<<converter(cars,color);
   transpose(cars);
}