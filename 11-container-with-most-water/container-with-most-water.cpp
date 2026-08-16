class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftboundary=0;
        int rightboundary=height.size()-1;
        int maxarea=0;
        while(leftboundary<rightboundary){
            int width=rightboundary-leftboundary;
            int ht=min(height[leftboundary],height[rightboundary]);
            int currarea=width*ht;
            maxarea=max(currarea,maxarea);
            if(height[leftboundary]<height[rightboundary]){
                leftboundary++;
            }
            else{
                rightboundary--;
            }

        }
        return maxarea;
    }
};