#include<bits/stdc++.h>
using namespace std;
bool if_prime(int a){
    for(int i=2;i<a;i++){
       if(a%i == 0){
        return false;
       }
    }
    return true;
}
void remove_once(vector<int>& arr, int num) {
    auto it = find(arr.begin(), arr.end(), num);
    if (it != arr.end()) {
        arr.erase(it); 
    }
}

int fmin(const vector<int>& arr) {
    if (arr.empty()) {
        throw invalid_argument("Array is empty");
    }

    int minimum = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    } 
    return minimum;
}
bool if_divide(vector<int> a,int b){
    for(int i=0;i<a.size();i++){
        if(a[i]%b==0)return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vector<int>arr;
        for(int j=0;j<a;j++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        vector<int>b;
        vector<int>c;
        for(int j=0;j<a;j++){
            if(if_prime(arr[j]) || arr[j]==1){
               b.push_back(arr[j]);
            }else{
                c.push_back(arr[j]);
            }
        }
         if(b.size()==0 || c.size()==0){
            int min = fmin(arr);
            remove_once(arr,min);
            b.push_back(min);
            for(int j=0;j<b.size();j++){
              if(  if_divide(b,arr[j])){
                   b.push_back(arr[j]);
                }else{
                    c.push_back(arr[j]);
                }
            }
         }
        if(b.size()==0 || c.size()==0) {

            cout<<"-1"<<endl;
            continue;
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int j=0;j<b.size();j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
        for(int j=0;j<c.size();j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}