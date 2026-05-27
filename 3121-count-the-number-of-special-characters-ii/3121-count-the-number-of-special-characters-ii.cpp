class Solution {
public:
    int numberOfSpecialChars(string word) {

        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);

        // Store positions
        for (int i = 0; i < word.size(); i++) {

            char ch = word[i];

            // Lowercase
            if (islower(ch)) {
                lastLower[ch - 'a'] = i;
            }

            // Uppercase
            else {

                // Store first uppercase occurrence only
                if (firstUpper[ch - 'A'] == -1) {
                    firstUpper[ch - 'A'] = i;
                }
            }
        }

        int count = 0;

        // Check special characters
        for (int i = 0; i < 26; i++) {

            // Both lowercase and uppercase exist
            if (lastLower[i] != -1 && firstUpper[i] != -1) {

                // All lowercase before uppercase
                if (lastLower[i] < firstUpper[i]) {
                    count++;
                }
            }
        }

        return count;
    }
};