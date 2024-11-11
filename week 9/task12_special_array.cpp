#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
      if (i % 2 == 0 && arr[i] % 2 != 0)
       {
            return false;
        }
        if (i % 2 != 0 && arr[i] % 2 == 0) 
        {
            return false;
        }
    }
    return true;
}
int main()
 {
    int size;
  cout<<"enter the size of the array: ";
    cin >>size;
    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (isSpecialArray(arr, size)) 
        cout << "The array is special.\n";
     else 
        cout << "The array is not special.\n";
    
}
