#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string inp;
    cout<<"enter a value:";
    cin>> inp;
    stack<int>stk;
    for(int i=0;i<inp.size();i++){
        if(inp[i]>='0'&&inp[i]<='9'){
            stk.push(inp[i]-'0');
        }
        else{
            int a=stk.top();
            stk.pop();
             int b=stk.top();
            stk.pop();
            if(inp[i]=='+')
                stk.push(a+b);
            else if(inp[i]=='-')
                stk.push(b-a);
            else if(inp[i]=='*')
                stk.push(b*a);
            else if(inp[i]=='/')
                stk.push(b/a);
        }
    }


cout<< "answer:"<< stk.top();

    return 0;
}

