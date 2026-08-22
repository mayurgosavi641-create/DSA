class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();
      int startrow=0;
      int endrow=m-1;
      while(startrow<=endrow){
        int midrow=(startrow+endrow)/2;
        if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1]){
            int start=0;
            int end=n-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(matrix[midrow][mid]==target){
                    return true;
                }
                else if(matrix[midrow][mid]<target){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
            }
            return false;
        }
        else if(target<=matrix[midrow][0]){
            endrow=midrow-1;
        }
        else {
            startrow=midrow+1;
        }
      } 
      return false; 
    }
};