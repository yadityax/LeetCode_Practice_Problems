class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(st.empty())
                    st.push(s[i]);
                else if((s[i] == ')' && st.top() != '(') ||
                    (s[i] == '}' && st.top() != '{') ||
                    (s[i] == ']' && st.top() != '['))
                    {
                        st.push(s[i]);
                    }
                else
                    st.pop();
            }
        }
        return st.empty()?0:st.size();
    }
};