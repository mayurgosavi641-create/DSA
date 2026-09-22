class Solution {
public:
    bool isSubsequence(string s, string t) {
     int i=0; //start for string s
     int j=0; // start for string t
     while(s.length()>i && t.length()>j){
        if(s[i]==t[j]){
            i++;
        }
        j++;
     }
     //if the index i is equal size of string s then string is present in t
     if(i==s.length()){
        return true;
     }
     return false;
    }
};