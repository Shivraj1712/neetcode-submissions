class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0 , j = nums.size() - 1, minVal = INT_MAX;
        while(i <= j){
            int mid = i + (j - i) / 2;
            if(nums[mid] < minVal){
                minVal = nums[mid];
            }
            if(nums[mid] < nums[j]){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }
        return minVal;
    }
};
