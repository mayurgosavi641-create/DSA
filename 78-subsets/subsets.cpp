class Solution {
public:
void getallsubsets(vector<int>&nums,vector<int>& ans,int i,vector<vector<int>>& allsubsets){
    if (i==nums.size()){
        //store in ans
    allsubsets.push_back({ans});
        return;
    }
    //include element
    ans.push_back(nums[i]);
    getallsubsets(nums,ans,i+1,allsubsets);
    //backtrack
    ans.pop_back();
    //exclude element
    getallsubsets(nums,ans,i+1,allsubsets);
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>ans;
       vector<vector<int>>allsubsets;
       getallsubsets(nums,ans,0,allsubsets);
return allsubsets;
    }
};