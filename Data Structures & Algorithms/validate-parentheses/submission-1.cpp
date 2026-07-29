class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0) return true;
        stack<char>st;
        for(auto i : s){
            if(i == '{') st.push('{');
            else if(i == '[') st.push('[');
            else if(i == '(') st.push('(');
            else if(i == '}'){
                if(st.empty() || st.top() != '{') return false;
                st.pop();
            }else if(i == ']'){
                if(st.empty() || st.top() != '[') return false;
                st.pop();
            }else if(i == ')'){
                if(st.empty() || st.top() != '(') return false;
                st.pop();
            }
        }
        return st.size() == 0;
    }
};
