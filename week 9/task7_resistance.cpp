#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size)
{
    double sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+resistance[i];
    }
    return sum;
}
int main()
{
    int number;
    cout<<"enter number of resistances ";
    cin>>number;
    double resistance[number];
    for(int i=0;i<number;i++)
    {
        cout<<"enter resistance  of resistor "<< i <<"=";
        cin>>resistance[i];
    }
    cout<<"total resistance in circuit "<<calculateTotalResistance(resistance , number);
}