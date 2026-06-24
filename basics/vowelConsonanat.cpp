#include <iostream>
using namespace std;

int main() 
{
    char ch;
  

    cout<<"Enter the alphabet : ";
    cin>>ch;
      int ASCII = int(ch);
    if ((ASCII>=97 && ASCII<=122 || ASCII>=65&& ASCII<=90)){
        if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
            cout<<"this is a vowel . ";
            }
            else {
             cout<<"the character is a consonant";
             }
            }
    return 0;
}