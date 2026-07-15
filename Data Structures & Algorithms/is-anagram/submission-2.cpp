class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> freq1, freq2 ;
        for(auto i : s) freq1[i]++;
        for(auto i : t) freq2[i]++;
        if(freq1.size() != freq2.size()) return false;
        for(auto it : freq1){
            if(freq2.find(it.first) == freq2.end()) return false;
            if(freq2[it.first] != it.second) return false;
        }
        for(auto it : freq2){
            if(freq2.find(it.first) == freq1.end()) return false;
            if(freq2[it.first]  != it.second) return false;
        }
        return true;
    }
};
