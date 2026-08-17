class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int maxcount=INT_MIN;
     int n=nums.size();
     for(int i=0;i<nums.size();i++){
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                count++;

            }
            maxcount=max(count,maxcount);
            if(maxcount>n/2){
                return nums[i];
            }
        }
     }
     return maxcount;
    }
    };