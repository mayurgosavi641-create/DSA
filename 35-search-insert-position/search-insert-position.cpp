class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int start=0;
     int end=nums.size()-1;
     int n=nums.size();
     if(target>nums[n-1]){
        return n;
     }
     if(target<nums[start]){
        return start;
     }
     while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        
        else if(nums[mid]>=target && nums[mid-1]<target){
            return mid;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
     }
     return -1;
    }
};