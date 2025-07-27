#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> m;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            m.push_back(a);
        }
        map<int,int>mask;
        for(int j=0;j<n;j++){
            if(mask.find(m[j])==mask.end()){
                mask[m[j]]=1;
            }else{
                mask[m[j]]++;
            }
            }
            if(mask.size()==1){
                cout<<"yes"<<endl;
                
            }
    if(mask.size()>2){
        cout<<"NO"<<endl;
    }else if(mask.size() == 2){
        auto it = mask.begin();
        int a= it->second;
        it++;
        int b= it->second;
        if(a==b || a==b+1 || a+1 ==b){
            cout<<"yes"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
    }

    }
}