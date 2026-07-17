class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> p(n+1,1), s(n+1,1);
        for(auto i = 0 ; i < n; ++i){
            p[i+1] = p[i] * nums[i];
        }
        for(auto i = n - 1; i >= 0; --i){
            s[i] = s[i+1] * nums[i];
        }
        vector<int>ans (n);
        for(auto i = 0 ; i < n ; ++i){
            ans[i] = p[i] * s[i+1];
        }
        return ans;
    }
};
