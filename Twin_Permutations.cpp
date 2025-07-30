#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int N;cin>>N;
        vector<int>nums(N);
        vector<int> b;
        for(int j=0;j<N;j++){
            cin>>nums[j];
            int x=N+1-nums[j];
            b.push_back(x);
        }
        for(int j=0;j<b.size();j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;

    }
}