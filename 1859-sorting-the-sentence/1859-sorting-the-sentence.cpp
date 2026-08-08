class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(9);

        string word = "";

        for (int i = 0; i <= s.size(); i++) {

            if (i == s.size() || s[i] == ' ') {

                // Last character is the position
                int pos = word.back() - '0';

                // Remove the position digit
                word.pop_back();

                // Store word at correct position
                ans[pos - 1] = word;

                word = "";
            }
            else {
                word += s[i];
            }
        }

        string result = "";

        for (int i = 0; i < 9; i++) {
            if (ans[i] != "") {
                if (!result.empty())
                    result += " ";

                result += ans[i];
            }
        }

        return result;
    }
};