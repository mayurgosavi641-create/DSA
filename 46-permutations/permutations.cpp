class Solution {
public:
    void getallpermutations(vector<int>& nums,int idx,vector<vector<int>>& ans){
        //base case : if idx gets equal size of nums then store the permutation in ans
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }

        for(int i=idx;i<nums.size();i++){
            //swap elements inside nums so permutations get stored with no extra space
        swap(nums[i],nums[idx]);
        //recursive call for next permutations
        getallpermutations(nums,idx+1,ans);
        //swap for backtracking
        swap(nums[i],nums[idx]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getallpermutations(nums,0,ans);
        return ans;
    }
};