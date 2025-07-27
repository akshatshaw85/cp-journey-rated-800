#include <bits/stdc++.h>
using namespace std;
 
int fmax(vector<int> arr) {
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (maxi < arr[i]) {
            maxi = arr[i];
        }
    }
    return maxi;
}
 
vector<int> fsort(vector<int> arr) {
    int n = fmax(arr);
    vector<int> v(n + 1, 0);
    vector<int> result(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++) {
        v[arr[i]]++;
    }
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i]; j++) {
            result[count++] = i;
        }
    }
    return result;
}
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        vector<int> arr;
        for (int i = 0; i < a; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
 
        vector<int> mask = fsort(arr);
        bool flag = true;
        for(int j=0;j<arr.size();j++){
            if(arr[j]!=mask[i]){
                flag=false;
                break;
            }
        }
     if(flag==true){
        cout<<"YES"<<endl;
     }
     if(flag== false && b==1){
        cout<<"NO"<<endl;
     }
     if(b>=2){
        cout<<"yes"<<endl;
     }
    }
}
