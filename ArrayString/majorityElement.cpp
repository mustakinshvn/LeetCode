class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size()/2 , ans = -1;
        map<int,int>mp; 
        int cnt= mp[nums[0]];
        for(int i=0; i< nums.size() ; i++){
            int x= nums[i];
            mp[x]++;

            if(mp[x]>= mp[cnt]){
                ans= x;
                cnt= x;
            }
            

        }
        return ans;
    }
};