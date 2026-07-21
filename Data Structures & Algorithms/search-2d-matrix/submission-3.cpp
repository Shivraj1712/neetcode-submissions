class Solution {
private:
    bool check(vector<int>& arr, int target){
        int low = 0 , high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2 ;
            if(arr[mid] == target) return true;
            else if(arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowRow = 0 , highRow = matrix.size() - 1;
        int lowCol = 0 , highCol = matrix[0].size() - 1;
        while(lowRow <= highRow){
            int mid = lowRow + (highRow - lowRow) / 2;
            if(matrix[mid][lowCol] <= target && matrix[mid][highCol] >= target){
                bool ans = check(matrix[mid],target);
                return ans;
            }else if(matrix[mid][highCol] < target){
                lowRow = mid +1 ;
            }else{
                highRow = mid - 1;
            }
        }
        return false;
    }
};
