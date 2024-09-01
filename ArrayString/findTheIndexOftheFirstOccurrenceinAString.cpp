class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.size() , ans=- 1;
        for(int i=0; i< haystack.size(); i++){
             if(haystack.substr(i,len) == needle){
                ans= i; break;
             }
        }

        return ans;
    }
};