#include <iostream>
using namespace std;

void displayFibonacci(int length)
 {
    int first = 0, second = 1, next;
    cout<< first;
    if (length > 1) 
    {
        cout << ", " << second;
    }
    for (int i = 3; i <= length; ++i)
     {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }
    cout << endl;
}

int main()
 {
    int length;
    cout<<"Enter the length of Fibonacci series: ";
    cin>>length;
    
    displayFibonacci(length);

    return 0;
}
