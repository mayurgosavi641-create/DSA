class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int start=0;
    int end=nums.size()-1;
    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    while(start<=end){
        int middle=(start+end)/2;
        if(middle==0 && nums[middle] != nums[middle+1]){
            return nums[middle];
        }
        if(middle==nums.size()-1 && nums[middle] != nums[middle-1]){
            return nums[middle];
        }
        if(nums[middle] != nums[middle-1] && nums[middle] != nums[middle+1]){
            return nums[middle];
        }
        else if(middle % 2 == 0){
            if(nums[middle] == nums[middle-1]){
            end=middle-1;
            }
            else{
                start=middle+1;
            }
        }
        else if(middle % 2 != 0) {
        
            if(nums[middle] == nums[middle-1]){
                start=middle+1;
            }
            else{
                end=middle-1;
            }
        
        }
    }
    return -1;
    }
};