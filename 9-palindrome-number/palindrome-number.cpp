class Solution {
public:
    bool isPalindrome(int x) {
    vector<int>ans;
    if(x<0){
        return false;
    }
    while(x>0){
        int digit=x%10;
        ans.push_back(digit);
        x/=10;
    }
    int start=0;
    int end=ans.size()-1;
    while(start<end){
        if(ans[start] != ans[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
    }
};