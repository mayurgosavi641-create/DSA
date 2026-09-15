class Solution {
public:
    bool isPerfectSquare(int num) {
     long long start=2;
     long long end=num/2;
     if(num<2){
        return true;
     }
     while(start<=end){
        long long mid=(start+end)/2;
        long long guess_square=mid*mid;
        if(guess_square == num){
            return true;

        }
        else if(guess_square < num){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }
     return false;
    }
};