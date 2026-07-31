class Solution {
public:
    int maxProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int product1=nums[nums.size()-1]-1;
          int product2=nums[nums.size()-2]-1;
          int maxprod=product1*product2;

     return maxprod;
      
    }
};