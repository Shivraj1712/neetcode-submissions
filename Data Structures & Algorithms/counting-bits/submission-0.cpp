class Solution {
private:
    int getBits(int i){
        int count = 0 ;
        while(i != 0){
            count += i % 2 ;
            i /= 2;
        }
        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for(auto i = 0 ; i <=n ; ++i){
            int val = getBits(i);
            bits.push_back(val);
        }
        return bits;
    }
};
