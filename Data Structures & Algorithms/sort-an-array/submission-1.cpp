class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i = 1 ; i < nums.size() ; ++i){
            int j = i - 1;
            while(j >= 0 && nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
                j--;
            }
        }
        return nums;
    }
};