class Solution {
private: 
    bool check(vector<int> & arr,int m, int d){
        int count = 1, sum = 0;
        for(auto i : arr){
            if(sum + i > m){
                count++;
                sum = 0;
            }
            sum += i;
        }
        return count <= d;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN, high = 0, ans = INT_MAX;
        for(auto i : weights){
            low = max(low,i);
            high += i;
        }
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(weights,mid,days)){
                ans = min(ans,mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};