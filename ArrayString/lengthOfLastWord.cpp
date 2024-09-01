class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int ans=0; bool flag = false;
        for(int i= len-1; i>= 0 ; i--){
            if((s[i]>= 'a' && s[i]<= 'z') ||(s[i]>= 'A' && s[i]<='Z') ){
               flag= true;
            }else flag= false;
            if(flag) ans++;
            if(ans && !flag) break;

        }

        return ans;
    }
};