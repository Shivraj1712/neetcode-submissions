class Solution {
public:
    int maxArea(vector<int>& h) {
        int result = 0;
        int i = 0 , j = h.size() - 1;
        while(i <= j){
            int area = min(h[i],h[j]) * (j-i);
            result = max(area,result);
            (h[i] <= h[j]) ? i++ : j--;
        }
        return result;
    }
};
