class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
 int m=matrix.size();
 int n=matrix[0].size();
 int sr=0;
 int er=m-1;
 while(sr<=er){
    int mr=(sr+er)/2;
    if(target>=matrix[mr][0] && target<=matrix[mr][n-1]){
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(target==matrix[mr][mid]){
                return true;
            }
            else if(target>matrix[mr][mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;

    }
    else if(target<matrix[mr][0]){
        er=mr-1;
    }
    else{
        sr=mr+1;
    }
 }
 return false;
    }
};