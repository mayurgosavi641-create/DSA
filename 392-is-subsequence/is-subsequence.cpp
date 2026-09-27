class Solution {
public:
    bool isSubsequence(string s, string t) {
  int i=0;
  int j=0;
  while(s.length()>i && t.length()>j){
    if(s[i]==t[j]){
        i++;
    }
    j++;
  }
  if(i==s.length()){
    return true;
  }
  return false;
    }
};