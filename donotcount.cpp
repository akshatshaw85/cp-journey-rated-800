#include<bits/stdc++.h>
using namespace std;
bool check(string s,string n){
    for(int i=0;i<s.size()-n.size();i++){
        if(s.substr(i,n.size())==n){
            return true;
        }
    }
    return false;
}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a;cin>>b;
    string x0;
    string y;
    cin.ignore();
    getline(cin,x0);
    
    getline(cin,y);
    string x1= x0+x0;
    string x2= x1+x1;
    string x3= x2+x2;
    string x4= x3+x3;
    string x5= x4+x4;
    if(x0==y){
        cout<<"0"<<endl;
        continue;
    }
   if( x0.size()>=y.size()&& check(x0,y) ){
        cout<<"0"<<endl;
        continue;
    }
    if( x1.size()>=y.size()&& check(x1,y) ){
        cout<<"1"<<endl;
        continue;
    }
    if( x2.size()>=y.size() && check(x2,y)){
        cout<<"2"<<endl;
        continue;
    }
    if(x3.size()>=y.size()&&check(x3,y) ){
        cout<<"3"<<endl;
        continue;
    }
    if(x4.size()>=y.size() &&check(x4,y)){
        cout<<"4"<<endl;
        continue;
    }
    if(x5.size()>=y.size()&&check(x5,y)){
        cout<<"5"<<endl;
    continue;
}else{
    cout<<"-1"<<endl;
}

}
}