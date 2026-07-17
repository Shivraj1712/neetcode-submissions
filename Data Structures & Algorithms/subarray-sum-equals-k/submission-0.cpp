class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long running_sum = 0 ;
        int count = 0;
        unordered_map<int,int> freq;
        freq[0] = 1;
        for(auto i = 0 ; i < nums.size() ; ++i){
            running_sum += nums[i];
            int target = running_sum - k;
            if(freq.find(target) != freq.end()){
                count += freq[target];
            }
            freq[running_sum]++;
        }
        return count ;
    }
};