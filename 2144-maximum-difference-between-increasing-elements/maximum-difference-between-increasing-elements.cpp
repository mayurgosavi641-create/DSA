class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {

                maxdiff = max(maxdiff, nums[j] - nums[i]);
            }
        }

                if (maxdiff > 0) {
                    return maxdiff;
                } else {
                    return -1;
                }
            
        
        return -1;
    }
};