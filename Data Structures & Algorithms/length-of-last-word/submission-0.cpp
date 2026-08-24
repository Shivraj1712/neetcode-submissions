class Solution {
public:
    int lengthOfLastWord(string s) {
        int pos = -1;
        string word = "";
        while((pos = s.find(' ')) != string::npos){
            string temp = s.substr(0,pos);
            if(!temp.empty()) word = temp;
            s = s.erase(0,pos+1);
        }
        if(!s.empty()) return s.size();
        return word.size();
    }
};