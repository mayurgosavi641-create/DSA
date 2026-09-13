class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int start=0;
     int end=nums.size()-1;
     int n=nums.size();
     if(n==1 && target==nums[0]){
        return 0;
     }
     if(target>nums[end]){
        return end+1;
     }
     if(target<=nums[start]){
        return start;
     }
     while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]>target && nums[mid-1]<target){
            return mid;
        }
        else if(nums[mid]<target && nums[mid+1]>=target){
            return mid+1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }
     return -1;
    }
};