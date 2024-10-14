#include<iostream>
using namespace std;
float perimeter(char shape,float value)
{
    float perimeter;
     if(shape=='s')
     {
        perimeter=4*value;
        return perimeter; 
     }
     else if(shape=='c')
     {
        perimeter=6.28*value;
        return perimeter; 
     }
     else if(shape=='t')
     {
        perimeter=3*value;
        return perimeter; 
     }
     else if(shape=='h')
     {
        perimeter=6*value;
        return perimeter; 
     }
}
int main()
{
    char shape;
    float value;
    cout<<"enter the shape(s for square,c for circle ,t for triangle,h for hexagon )";
    cin>>shape;
    cout<<"enter value";
    cin>>value;
    cout<<"perimeter is "<<perimeter( shape, value);
}