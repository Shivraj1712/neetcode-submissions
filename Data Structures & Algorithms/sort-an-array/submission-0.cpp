class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(auto i = 0 ; i < nums.size() -1 ; ++i){
            for(auto j = 0 ; j < nums.size() - i - 1; ++j){
                if(nums[j] > nums[j+1]) swap(nums[j],nums[j+1]);
            }
        }
        return nums;
    }
};