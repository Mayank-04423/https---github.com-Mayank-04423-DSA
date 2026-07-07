#include <iostream>
#include<string>
#include<stack>
using namespace std;

//to check operand/operator
bool isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'){
        return false;
    }return true;
}

//to check precedence
int pre(char x){
    if(x=='+'||x=='-') return 1;
    if(x=='*'||x=='/') return 2;
    return 0;
}

string convert(string infix){
    stack<char> st;
    string postfix="";
    
    int i =0;
    while(i<infix.length()){
        char ch = infix[i];
    

    //send to output if operand
    if(isOperand(ch)){
        postfix += ch;
        i++;
    }

    //if operator then precedence battle
    else{if(st.empty() || pre(ch)>pre(st.top())){
        st.push(ch);
        i++;
    }else{
        postfix+=st.top();
        st.pop();
    }
    
    }

}

//empty out the remainings string
while(!st.empty()){
    postfix+=st.top();
    st.pop();
}
return postfix;

}

int main() 
{
    string infix = "a+b*c-d/e";
    cout<< convert(infix);
    return 0;
}