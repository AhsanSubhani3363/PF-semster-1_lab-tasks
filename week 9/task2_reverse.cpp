#include <iostream>
using namespace std;

void displayReverse(char input[])
 {
    int length = 0;
    while (input[length] != '\0')
     {
        length++;
    }
   for (int i = length - 1; i >= 0; i--) 
    {
        cout << input[i];
    }
    
}

int main()
 {
    char text[100];
    cout << "Enter a string: ";
    cin>>text;
    displayReverse(text);
    
}
