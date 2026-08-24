class Solution {
public:
    int isValid(string& s){
        string vowels = "aeiou";
        return vowels.find(s.front()) != string::npos && vowels.find(s.back()) != string::npos;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> vowelCount(words.size()+1,0);
        for(auto i = 0 ; i < words.size(); ++i){
            int count = isValid(words[i]);
            vowelCount[i+1] = vowelCount[i] + count;
        }
        for(auto i = 0 ; i < queries.size(); i++){
            int right = queries[i][1];
            int left = queries[i][0];
            int count = vowelCount[right+1] - vowelCount[left];
            ans.push_back(count);
        }
        return ans;
    }
};