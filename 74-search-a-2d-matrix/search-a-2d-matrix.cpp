class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
 int m=matrix.size();
 int n=matrix[0].size();
 int sr=0;
 int er=m-1;
 while(sr<=er){
    int mr=(sr+er)/2;
    if(matrix[mr][0]<=target && matrix[mr][n-1]>=target){
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(matrix[mr][mid]==target){
                return true;
            }
            else if(matrix[mr][mid]<target){
                st=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return false;
    }
    else if(matrix[mr][0]>target){
        er=mr-1;
    }
    else{
        sr=mr+1;
    }
 }
 return false;
    }
};