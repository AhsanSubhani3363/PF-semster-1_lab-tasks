#include<iostream>
using namespace std;
void calculatefuel()
{
   float fuel,distance;
cout<<"enter distance ";
cin>>distance;

	fuel=distance*10;
	if(fuel>100)
cout<<"fuel needed is "<<fuel<<endl;
    if(fuel<100)
cout<<"fuel needed is 100 ";
}
int main()
{
 calculatefuel();
	
}
