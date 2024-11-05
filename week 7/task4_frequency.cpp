#include<iostream>
using namespace std;
int frequency(int number,int digit)
{
    int count;
    while (number != 0) 
    {
        int lastDigit = number % 10; 
        if (lastDigit==digit)
         {
            count++;  
        }
    number=number/ 10;  
    }
    return count;
    }
int main()
{
     int number,digit;
    cout<<"enter number ";
    cin>>number;
     cout<<"enter digit whose frequency you want to check  ";
    cin>>digit;

    cout<<"frequency of  "<< digit<<" is " <<frequency(number,digit);
}