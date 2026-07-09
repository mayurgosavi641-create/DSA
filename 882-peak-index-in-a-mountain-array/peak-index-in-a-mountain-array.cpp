class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     int start=1;
     int end=arr.size()-2;
     while(start<=end){
        int middle=(start+end)/2;
        if(arr[middle-1]<arr[middle] && arr[middle+1]<arr[middle]){
            return middle;
        }
        if(arr[middle]>arr[middle-1]){
            start=middle+1;

        }
        else{
            end=middle-1;
        }
     } 
     return 0;
     
    }
};