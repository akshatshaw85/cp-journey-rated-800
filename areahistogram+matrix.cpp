#include<bits/stdc++.h>
using namespace std;
class Solution {
 private:
vector<int>nextsmaller(vector<int>arr,int n){
       stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
}
  vector<int> prevsmaller(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n =heights.size();
     vector<int>next(n);
     vector<int>previous(n);
     next=nextsmaller(heights,n);
     previous=prevsmaller(heights,n);
     int area=INT_MIN;
     for(int i=0;i<n;i++){
        int len=heights[i];
        if(next[i]==-1){
        next[i]=n;
        }
        int w=next[i]-previous[i]-1;
         int temparea=len*w;
        area=max(temparea,area);
     }
     return area;

    }
  public:
    // Function to calculate the maximum area of a rectangle
    // in the given matrix.
    int maxArea(vector<vector<int>> &mat) {
       int m=mat.size();
       int n=mat[0].size();
       int area=largestRectangleArea(mat[0]);
       for(int i=1;i<mat.size();i++){
           for(int j=0;j<mat[0].size();j++){
               if(mat[i][j]!=0){
                   mat[i][j]=mat[i][j]+mat[i-1][j];
               }else{
                   mat[i][j]=0;
               }
           }
           area=max(area,largestRectangleArea(mat[i]));
       }
       return area
       ;
    }
};