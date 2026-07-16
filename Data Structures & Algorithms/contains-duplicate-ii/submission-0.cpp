class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < k ; ++i){
            if(mp.find(nums[i]) != mp.end()) return true;
            mp[nums[i]]++;
        }
        for(int i = k ; i < nums.size(); ++i){
            if(mp.find(nums[i]) != mp.end()) return true;
            mp[nums[i]]++;
            mp.erase(nums[i-k]);
        }
        return false;
    }
};