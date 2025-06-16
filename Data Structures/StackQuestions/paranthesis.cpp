// Expression is balanced or not
//  [({})]

#include<bits/stdc++.h>
using namespace std;

bool balancedORnot(string expr, stack <char>st){

    for (int  i = 0; i < expr.size(); i++)
    {
        // if we get closing bracket at begining of stack 
        if(i == 0 && expr[i] == ')' | expr[i] == '}' | expr[i] == ']')
            return false;

        if(expr[i] == '(' | expr[i] == '{' | expr[i] == '['){
            st.push(expr[i]);
        }
        if(expr[i] == ')'){
            // char a = st.top();
            if(st.top() == '('){
                st.pop();
            }else
                return false;
        }
        if(expr[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }else
                return false;
        }
        if(expr[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }else
                return false;
        }
    }
    if(!st.empty()){
        return false;
    }else return true;

}

int main()
{
    string expr = ")({}))";

    stack <char> st;

    if(balancedORnot(expr, st)){
        cout<<"Expression is balanced.";
    }else 
        cout<<"Expresion is not balanced.";

    
    return 0;
}