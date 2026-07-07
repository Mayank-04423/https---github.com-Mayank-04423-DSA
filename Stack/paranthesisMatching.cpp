#include <iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char>st;

    for(int i = 0; i< s.length(); i++){
        char ch = s[i];
    

    //pushing if open braces
    if(ch =='('||ch =='{'||ch =='['){
        st.push(ch);
    }
    else{
        //case 1 : closing bracked found but stack is empty
        if(st.empty()) return false;

        //matching the closing bracket to pushed 
        char topChar = st.top();
        if((ch == ')'&& topChar =='(')||(ch == '}'&& topChar =='{')||(ch == ']'&& topChar =='[')){
            st.pop();
        }else{
            return false;
        }
    }
}

    //stack should be empty in the end
    return st.empty();
}

int main() 
{
    string  test = "{[()]}";
    if(isValid(test)) cout<<"balanced paranthesis"<<"\n";
    else cout<<"unbalanced paranthesis"<<"\n";
    return 0;
}