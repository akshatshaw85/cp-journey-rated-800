#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        int ref=0;
        cin>>a;
        string s;
        int ans=0;
        cin.ignore();
        getline(cin,s);
        for(char ch:s){
          if(ref>=3){
            ans=2;ref=0;break;
          }
                    if(ch==35){
            if(ref==1 || ref==2 || ref ==0){
                ans+=ref;
            }else {
                ans=2;
                ref=0;
                break;
            }
            ref=0;
          }else{
            ref++;
          }
        }
        if(ref==1 || ref==2 || ref ==0){
              ans+=ref;
          }else {
              ans=2;
          }
          cout<<ans<<endl;
    }
}