#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // Compare sorted strings
        return s == t;
    }
};
