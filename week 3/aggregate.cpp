#include<iostream>
using namespace std;
int main()
{
 float m,i,e;
float ag;
string n;
cout<<"enter your name ";
cin>>n;
cout<<"enter your matric marks(out of 1100) ";
cin>>m;
cout<<"enter your inter marks(out of 560) ";
cin>>i;
cout<<"enter your ecat marks(out of 400) ";
cin>>e;
ag=(e/400)*50 + (i/560)*40 + (m/1100)*10;
cout<<"your aggregate is "<<ag;


 
}