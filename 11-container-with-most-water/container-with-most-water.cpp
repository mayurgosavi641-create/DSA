class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea =0;
        int n=height.size();
       int lb =0;
       int rb =n-1;
       while(lb<rb){
        int width = rb-lb;
        int ht = min(height[lb],height[rb]);
        int currwater = width*ht;
        maxarea = max(maxarea,currwater);
     height[lb]<height[rb] ? lb++ : rb--;
       }
       return maxarea;
    }
};