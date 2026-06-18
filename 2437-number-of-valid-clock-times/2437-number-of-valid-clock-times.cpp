class Solution {
public:
    int countTime(string time) {

        int count = 0;

        for (int h = 0; h < 24; h++) {

            for (int m = 0; m < 60; m++) {

                string curr = "";

                if (h < 10)
                    curr += '0';

                curr += to_string(h);
                curr += ':';

                if (m < 10)
                    curr += '0';

                curr += to_string(m);

                bool valid = true;

                for (int i = 0; i < 5; i++) {

                    if (time[i] != '?' &&
                        time[i] != curr[i]) {

                        valid = false;
                        break;
                    }
                }

                if (valid)
                    count++;
            }
        }

        return count;
    }
};