#include<bits/stdc++.h>
using namespace std;
void find_sol(string s){
    int n= s.size();
    vector<int> vec(26, -1);
    int ans =INT_MIN;
    int start =-1;
    for (int i = 0; i < n; i++)
    {
        if(vec[s[i]-'a']==-1){
            vec[s[i]-'a']=i;
        }else{
            start = vec[s[i]-'a'];
            vec[s[i]-'a']=i;
        }
        ans = max(ans,i-start);
    }
    cout<<ans;
}
int main(){
    string s;
    cin>>s;
    find_sol(s);
    return 0;
}