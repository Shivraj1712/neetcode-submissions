class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 2;
        for(auto i = 2 ; i < nums.size(); ++i){
            if(nums[write-2] != nums[i]){
                nums[write] = nums[i];
                write++;
            }
        }
        return write;
    }
};