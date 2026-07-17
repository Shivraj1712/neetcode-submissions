class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> freq;
        int left = 0 , length = 0;
        for(auto right = 0 ; right < s.size() ; ++right){
            while(freq.find(s[right]) != freq.end()){
                freq.erase(s[left]);
                left++;
            }
            length = max(length,right - left + 1);
            freq.insert(s[right]);
        }
        return length ;
    }
};
