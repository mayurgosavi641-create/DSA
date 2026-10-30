class Solution {
public:
    vector<vector<int>>generateMatrix(int n){
vector<vector<int>>ans(n,vector<int>(n,0));
        int idx=1;
        int srow=0;
        int scol=0;
        int erow=n-1;
        int ecol=n-1;
        while(srow<=erow && scol<=ecol){
        for(int i=srow;i<=ecol;i++){
            ans[srow][i]=idx;
            idx++;

        }
        for(int i=srow+1;i<=erow;i++){
            ans[i][ecol]=idx;
            idx++;
        }
        for(int i=ecol-1;i>=scol;i--){
            if(srow==erow){
                continue;
            }
            ans[erow][i]=idx;
            idx++;
        }
        for(int i=erow-1;i>srow;i--){
            if(scol==ecol){
                continue;
            }
            ans[i][scol]=idx;
            idx++;
        }
        srow++,scol++;
        erow--;
        ecol--;
        }
        
    
    return ans;

    }
};