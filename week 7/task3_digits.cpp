#include<iostream>
using namespace std;
int digits(int number)
{
    int counter=0;
    if(number==0)
    return 1;
    //int digit;
    while (number!=0)
    {
        number=number/10;
        counter++;
    }
    return counter;
}
int main()
{
    int number;
    cout<<"enter number ";
    cin>>number;
    cout<<"total digits in number "<<digits(number)<<endl;

}