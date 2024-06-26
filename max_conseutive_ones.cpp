#include<bits/stdc++.h>
using namespace std;
void largest_consecutive_onese_subarray(int arr[],int n,int k){
    int i=0,j=0,zerocnt=0,ans=INT_MIN;
    while (j<n)
    {
        if(arr[j]==0){
            zerocnt++;
        }
        while(zerocnt>k){
            if(arr[i]==0){
                zerocnt--;
            }
            i++;
        } 
        ans = max(ans, j-i+1);
        j++;
    }
    cout<<ans;
}
int main(){
    int n,k ;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    largest_consecutive_onese_subarray(arr,n,k);
}