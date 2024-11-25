#include<iostream>
using namespace std;
int length(string word)
{
    int length=0;
    while(word[length]!=0)
    {
        length++;
     }
     return length;
}
int  letter_repeat(string word[],int size,char letter)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        int string_length=length(word[i]);
        for (int j = 0; j < string_length; j++)
        {
            if(word[i][j]==letter)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
  int number;
  char letter;
  cout<<"enter how many words you want to enter ";
  cin>>number;
  string word[number];
  for (int i = 0; i < number; i++)
  {
    cout<<"enter word "<<i+1<<" ";
    cin>>word[i];
  }
  cout<<"enter letter you want to count ";
  cin>>letter;
  cout<<"the letter "<<letter<<" appears "<<letter_repeat(word,number,letter)<<" times in array ";
}