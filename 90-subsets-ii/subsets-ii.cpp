class Solution {
public:
void getallsubsets(vector<int>& nums,vector<int>& ans, int i,vector<vector<int>>& allsubsets){
    if(i==nums.size()){
        allsubsets.push_back({ans});
        return;
    }
    //include element
    ans.push_back(nums[i]);
    getallsubsets(nums,ans,i+1,allsubsets);
    //pop back last element for backtracking
    ans.pop_back();
    //exclusion step (if current element is equal to the previous element which is already included in the subset then skip the element)
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    getallsubsets(nums,ans,idx,allsubsets);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

       vector<int>ans;
       vector<vector<int>>allsubsets;
       sort(nums.begin(),nums.end()); //sort the vector so the same values lies one after one 
       getallsubsets(nums,ans,0,allsubsets); 
       return allsubsets;
    }
};