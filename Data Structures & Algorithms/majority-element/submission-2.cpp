class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0 , ans = 0 ;
        for(auto i : nums){
            if(freq == 0){
                freq++;
                ans = i;
                continue;
            }
            if(ans == i) freq++;
            else freq--;
        }
        return ans;
    }
};