#include <iostream>
using namespace std;
string shiftLetters(char str[])
 {
    int i = 0;
    while (str[i] != '\0')
     { 
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            if (str[i] == 'z')
             {
                str[i] = 'a'; 
            } else
             {
                str[i] = str[i] + 1;
            }
        }
        i++;
    }
    return str;
}

int main() {
    char input[100];
    cout << "enter a string: ";
    cin >> input;
    string result = shiftLetters(input);
    cout << "Output: " << result << endl;

    return 0;
}
