class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
      int m=matrix[0].size();
      int startrow=0;
      int endrow=n-1;
      while(startrow<=endrow){
        int midrow=(startrow+endrow)/2;
        if(matrix[midrow][0]<=target && matrix[midrow][m-1]>=target){
            int start=0;
            int end=m-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(matrix[midrow][mid]==target){
                    return true;

                }
                else if(matrix[midrow][mid]>target){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            return false;
        }
        else if(matrix[midrow][0]>target){
            endrow=midrow-1;
        }
        else {
            startrow=midrow+1;
        }
      } 
      return false;
    }
};