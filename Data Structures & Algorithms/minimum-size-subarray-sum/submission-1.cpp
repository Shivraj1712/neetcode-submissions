class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 , r = 0, length = INT_MAX ;
        long long sum = 0 ;
        while(l <= r && r < nums.size()){
            sum += nums[r];
            while(sum >= target){
                sum -= nums[l];
                length = min(length,r-l+1);
                l++;
            }
            if(sum == target) length = min(length,r-l+1);
            r++;
        }
        return length == INT_MAX ? 0 : length;
    }
};