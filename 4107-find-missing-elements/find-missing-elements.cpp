class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest = INT_MAX, biggest = INT_MIN;
        for (int num : nums) {
            smallest = min(smallest, num);
            biggest = max(biggest, num);
        }
        
        vector<int> ans;
        for (int j = smallest; j <= biggest; j++) {
            bool found = false;
            for (int k = 0; k < nums.size(); k++) {
                if (nums[k] == j) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans.push_back(j);
            }
        }
        
        return ans;
    }
};