#include<bits/stdc++.h>
using namespace std;
void largest_rectange_sol(int arr[],int n){
    stack<int> st;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            int itr = st.top();
            st.pop();
            if(st.empty()){
            ans = max(ans,arr[itr]);    
            }else{
            ans = max(ans,arr[itr]*(itr-st.top()+1));
            }
        }  
        if(st.empty() || arr[st.top()]<=arr[i]){
            st.push(i);
        }    
    }
    cout<<ans<<" ";
}
int main(){
    int n ;n=7;
    int arr[n]={6,2,5,4,5,1,6};
    largest_rectange_sol(arr,n);
    return 0;
}