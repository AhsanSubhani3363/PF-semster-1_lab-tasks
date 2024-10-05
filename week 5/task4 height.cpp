#include<iostream>
#include<cmath>
using namespace std;
float height(float distance,float angle)
{
	float height=distance*tan(angle);
	return height;
}
int main()
{
	float distance,angle;
	cout<<"enter distance from base of tree ";
	cin>>distance;
	cout<<"enter angle of elevation of tree ";
	cin>>angle;
	cout<<"height is "<<height(distance,angle);
	
	
}
