#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        map<pair<int,int>,int> mask;
        int result=0;
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                mask[{j,k}]=0;
            }
        }
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                char ch;
                cin>>ch;
                if(ch=='.'){
                    ;
                }else{
                    if((j==0 || j==9 || k==0 || k==9)){
                       if(mask[{j,k}]==0){
 mask[{j,k}]=1;
                         result+=1;
                       }
                    }else if(k==1 || k==8 || j==1||j==8){
                          if(mask[{j,k}]==0){
                        mask[{j,k}]=1;
                        result+=2;
                       }
                    }else if(k==2 || k==7 || j==2||j==7){
                          if(mask[{j,k}]==0){
                         mask[{j,k}]=1;
                        result+=3;
                       }
                    }else if(k==3 || k==6 || j==3||j==6){
                          if(mask[{j,k}]==0){
                         mask[{j,k}]=1;
                        result+=4;
                       }
                    }else if(k==4 || k==5 || j==4||j==5){
                          if(mask[{j,k}]==0){
                         mask[{j,k}]=1;
                        result+=5;
                       }
                    }
                }
            }
        }
       cout<<result<<endl;
    }
}