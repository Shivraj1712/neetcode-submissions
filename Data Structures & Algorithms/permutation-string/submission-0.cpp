class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        unordered_map<char,int> m1, m2;
        for(auto i : s1) m1[i]++;
        for(auto i = 0 ; i < s1.size(); ++i){
            m2[s2[i]]++;
        }
        if(m1 == m2) return true;
        int l = 0;
        for(auto i = s1.size(); i < s2.size(); ++i){
            m2[s2[i]]++;
            m2[s2[l]]--;
            if(m2[s2[l]] == 0){
                m2.erase(s2[l]);
            }
            l++;
            if(m1 == m2) return true;
        }
        return false;
    }
};
