#include <iostream>
using namespace std;
void location(char array[100])
{
 for (int x = 0 ; array[x] != '\0' ; x++)
    {
        cout << array[x] << " found at position " << x << endl;
    }
}
int main ()
{
    char array[100];
    cout << "Enter a word: ";
    cin >> array;
    location(array);
} 