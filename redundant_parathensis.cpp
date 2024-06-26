#include<bits/stdc++.h>
using namespace std;
bool check_redundancy(string s){
    stack<char>st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            continue;
        }
        if(s[i]==')'){
            if(st.top()=='('){
                return 1;
            }else
            {
                st.pop();
                if (st.empty())
                {
                    return 1;
                }else{
                    st.pop();
                }
            }
        }else
        {
            st.push(s[i]);
        }
    }
    if(!st.empty()){
        return 1;
    }
    return 0;
}
int main(){
    string a;
    cin>>a;
    cout<<check_redundancy(a);
    return 0;
}