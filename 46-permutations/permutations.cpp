class Solution {
public:
    void getallpermutations(vector<int>& nums,int idx,vector<vector<int>>& ans){
     if(idx==nums.size()){
        ans.push_back({nums});
        return;
     }
     for(int i=idx;i<nums.size();i++){

    swap(nums[i],nums[idx]);
    getallpermutations(nums,idx+1,ans);
    swap(nums[i],nums[idx]);
     }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
       getallpermutations(nums,0,ans);
       return ans;
    }
};