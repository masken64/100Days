class Solution {
public:
    int maxDepth(string s) {
      int ans = 0;
      int n = s.length();
      int left =0;
      for(int i =0;i<n;i++){
        if(s[i]=='('){
            left++;
            ans = max(ans,left);
        }
        else if(s[i]==')'){
            left--;
        }
      }
      return ans;  
    }
};
