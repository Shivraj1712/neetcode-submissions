class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j = 0 , l = 0, i = 0;
        string ans = "";
        while(j < word1.size() && l < word2.size() && j + l < word2.size() + word1.size()){
            if(j < word1.size() && i % 2 == 0){
                ans += word1[j++];
            }else if(l < word2.size() && i % 2 != 0){
                ans += word2[l++];
            }
            i++;
        }
        while(j < word1.size()){
            ans+= word1[j++];
        }
        while(l < word2.size()){
            ans+= word2[l++];
        }
        return ans;

    }
};