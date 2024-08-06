#include <bits/stdc++.h>

using namespace std;

class Arrows {
    public:

    int longestArrow(string s) {
        int maxLength = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<') {
                int length = 1;
                int j = i + 1;

                while (j < s.size() && s[j] == '-') {
                    length++;
                    j++;
                }

                maxLength = max(maxLength, length);

                length = 1;
                j = i + 1;

                while (j < s.size() && s[j] == '=') {
                    length++;
                    j++;
                }
                maxLength = max(maxLength, length);
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '>') {
                int length = 1;
                int j = i - 1;

                while (j >= 0 && s[j] == '-') {
                    length++;
                    j--;
                }

                maxLength = max(maxLength, length);

                length = 1;
                j = i - 1;

                while (j >= 0 && s[j] == '=') {
                    length++;
                    j--;
                }

                maxLength = max(maxLength, length);
            }
        }

        return maxLength;
    }
};