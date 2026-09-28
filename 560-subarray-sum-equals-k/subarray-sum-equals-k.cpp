class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int count=0;
     for(int i=0;i<nums.size();i++){
        int currcount=0;
        for(int j=i;j<nums.size();j++){
            currcount+=nums[j];
            if(currcount==k){
                count++;
            }
        }
     } 
     return count; 
    }
};