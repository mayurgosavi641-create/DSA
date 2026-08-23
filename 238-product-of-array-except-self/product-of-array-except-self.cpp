class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans(n,1);
   //calculate the prefix product and store it in the ans vector
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    //initialize the suffix product with 1 and multiply each next element with the previous one and then multiply with the ans[i]
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
   
    return ans;
    }
};