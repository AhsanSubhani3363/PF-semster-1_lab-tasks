#include<iostream>
using namespace std;
int stringlength(string number)
{
    int count=0;
    while(number[count]!='\0')
    {
        count++;
    }
    return count;
}
void reversestring(string original)
{
    string reverse="";
    string word="";
    int length=stringlength(original);
    for (int i = length-1; i >=0; i--)
    {
        if(original[i]==' ')
        {
            if (word!="")
            {
                reverse=reverse+word+" ";
                word="";
            }
        }
        else 
        {
            word=original[i]+word;
        }
    }
    if (word != "") {
        reverse += word;
    }
    cout << "Reversed string: " << reverse << std::endl;
}
int main()
{
    string original;
    cout<<"enter a string ";
    getline(cin,original);
    reversestring(original);
}