class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int employee=0;
       for(int i=0;i<hours.size();i++){
        if(hours[i]>=target){
            employee++;
        }
       } 
       return employee;
    }
};