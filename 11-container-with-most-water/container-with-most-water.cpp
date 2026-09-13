class Solution {
public:
    int maxArea(vector<int>& height) {
      int lb=0;
      int rb=height.size()-1;
      int maxarea=0;
      while(lb<rb){
        int width=rb-lb;
        int ht=min(height[lb],height[rb]);
        int area=width*ht;
        maxarea=max(area,maxarea);
        if(height[lb]<height[rb]){
        lb++;
        }
        else{
        rb--;
        }
      }
      return maxarea;
    }
};