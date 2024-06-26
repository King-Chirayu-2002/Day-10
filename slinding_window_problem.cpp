#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    deque<int> q;
    vector<int> ans;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int  i = 0; i < k; i++)
    {
        while (!q.empty() and arr[q.back()]<arr[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(arr[q.front()]);
    for (int i = k; i < n ; i++)
    {
     if(q.front()==i-k){
        q.pop_front();
     }
        while (!q.empty() and arr[q.back()]<arr[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(arr[q.front()]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}