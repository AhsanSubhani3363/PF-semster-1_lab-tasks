#include<iostream>
using namespace std;
void vowel(string sentence)
{
    string new_sentence;
    char ch;
    for(int i=0;i <sentence.length()  ; i++)
    {
        ch=sentence[i];
       if(sentence[i]!='a'&&sentence[i]!='e'&&sentence[i]!='i'&&sentence[i]!='o'&&sentence[i]!='u')
       {
        new_sentence=new_sentence+ch;
       }
    }
    cout<<new_sentence;
}
int main()
{
    string sentence;
    cout<<"enter sentence ";
    getline(cin,sentence);
    vowel(sentence);

}