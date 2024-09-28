#include<iostream>
using namespace std;
void stickers( float length)
{
float stickers;
stickers=length*length*6;
cout<<"number of stickers needed "<<stickers; 
}
int main()
{
float length;
cout<<"enter side length of rubiks cube ";
cin>>length;
 stickers(length);
 
}
