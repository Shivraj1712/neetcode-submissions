class Solution {
private: 
    bool check(vector<int>& piles, int m , int h){
        long long count = 0 ;
        for(auto i : piles){
            count += ceil((double)i / m);
        }
        return count <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , ans = INT_MAX, high = INT_MIN;
        for(auto i : piles) high= max(high,i);
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(piles,mid,h)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
