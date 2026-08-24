class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i : arr) mp[i]++;
        int maxVal = -1 ;
        for(auto &[num,count] : mp){
            if(num == count) {
                maxVal = max(maxVal,num);
            }
        }
        return maxVal;
    }
};