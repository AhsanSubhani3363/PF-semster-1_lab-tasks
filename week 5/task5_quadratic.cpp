#include<iostream>
#include<cmath> 
using namespace std;
void discriminant(int a, int b, int c)
 {
    float disc = (b * b) - (4 * a * c);  
   if (disc > 0) 
   {
       float root1 = (-b + sqrt(disc)) / (2 * a);
       float root2 = (-b - sqrt(disc)) / (2 * a);
        cout<< "x= "<<root1<<" y = "<<root2<<endl;
    } 
    else if (disc==0) 
    {
      float root = -b / (2 * a);
      cout << "x = "<<root<<endl;
    } 
    else
     {
       float real_Part = -b / (2 * a);
       float imaginary_Part = sqrt(-disc) / (2 * a);
      cout << "x = " << real_Part<<" + "<<imaginary_Part<< "i" << endl;
       cout << "y = " << real_Part <<" - "<<imaginary_Part<< "i" << endl;
    }
}

int main() 
{
    int a, b, c;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"Enter the value of c ";
    cin>>c;
    discriminant(a, b, c);
}
