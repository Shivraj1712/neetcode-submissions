class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0 , st = 0 , end = nums.size() - 1;
        while(mid <= end){
            if(nums[mid] == 0){
                swap(nums[st],nums[mid]);
                st ++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};