class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int startrow=0;
        int endrow=m-1;
        int startcolmn=0;
        int endcolmn=n-1;
        while(startrow<=endrow && startcolmn<=endcolmn){
            for(int i=startcolmn;i<=endcolmn;i++){
                ans.push_back(matrix[startrow][i]);
            }
            for(int i=startrow+1;i<=endrow;i++){

                ans.push_back(matrix[i][endcolmn]);
            }
            for(int i=endcolmn-1;i>=startcolmn;i--){
                if(startrow==endrow){
                    break;
                }
                ans.push_back(matrix[endrow][i]);
            }
            for(int i=endrow-1;i>startrow;i--){
                if(startcolmn==endcolmn){
                    break;
                }
                ans.push_back(matrix[i][startcolmn]);
            }
            startrow++;
            endrow--;
            startcolmn++;
            endcolmn--;
        }
        return ans;
    }
};