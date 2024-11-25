#include <iostream>
using namespace std;

int calculatetotalvolume(int boxes[], int size) 
{
    int totalvolume = 0;
    for (int i = 0; i < size; i += 3) 
    {
        int length = boxes[i];
        int width = boxes[i + 1];
        int height = boxes[i + 2];
        int volume = length * width * height;
        totalvolume += volume;
    }
      return totalvolume;
}
int main()
 {
    int totalboxes;
    cout << "Enter the number of boxes: ";
    cin >> totalboxes;
    int size = totalboxes * 3;  
    int boxes[size];
   for (int i = 0; i < size; i++) 
   {
        cout << "Enter dimension " << (i + 1) << ": ";
        cin >> boxes[i];
    }
     int totalvolume = calculatetotalvolume(boxes, size);
     cout << "Total volume of all boxes: " << totalvolume << endl;
}
