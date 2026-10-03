class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end()); 
    int idx=0;
    for(int i=idx+1;i<nums.size();i++){
        if(nums[i]==nums[idx]){
            return true;
        }
        idx++;
    }
    
     return false;
    }
};