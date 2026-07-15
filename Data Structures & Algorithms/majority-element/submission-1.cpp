class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0 , ans = -1;
        for(auto i : nums){
            if(freq == 0) ans = i;
            if(ans == i) freq++;
            else freq--;
        }
        return ans;
    }
};