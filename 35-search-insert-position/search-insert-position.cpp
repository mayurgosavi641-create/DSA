class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int start=0;
      int end=nums.size()-1;
       if(target<=nums[start]){
        return start;
       }
        if(target>nums[end]){
            return end+1;
        }
      while(start<=end){
        int mid=(start+end)/2;
        if(target==nums[mid]){
            return mid;
        }
       
        if(target>=nums[mid] && target<=nums[mid+1]){
            return mid+1;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      }
      return -1;
    }
};