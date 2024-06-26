#include<bits/stdc++.h>
using namespace std;
void tapping(int arr[],int n){
    stack<int> st;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        while(!st.empty() && arr[st.top()]<arr[i]){
            int itr = st.top();
            st.pop();
            if(!st.empty()){
                ans += ((min(arr[st.top()],arr[i])-arr[itr])*(i-itr));
            }
        }
        if(st.empty() || arr[st.top()]>arr[i]){
            st.push(i);
        }
    }
    cout<<ans<<endl;
}
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    tapping(arr,12);
    return 0;
}