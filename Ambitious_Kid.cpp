#include<bits/stdc++.h>
using namespace std;
int main(){
 
        int a;cin>>a;
         vector<int> arr;
         for(int j=0;j<a;j++){
            int x;
            cin>>x;
            arr.push_back(x);
         }
         int ans=INT_MAX;
         for(int j=0;j<a;j++){
            int y=0;
            if(arr[j]>0){
                y=arr[j];
            }else{
                y=-arr[j];
            }
            if(ans>y){
                ans=y;
            }
         }
         cout<<ans<<endl;

    }
