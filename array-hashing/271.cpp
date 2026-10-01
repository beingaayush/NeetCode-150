#include <bits/stdc++.h>
using namespace std;

class Codec {
public:

    // Encode strings into one string
    string encode(vector<string>& strs) {
        string ans = "";

        for(string s : strs){
            // Store length + separator + actual string
            ans += to_string(s.size()) + "#" + s;
        }

        return ans;
    }

    // Decode one string back into original strings
    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0;

        while(i < s.size()){
            int j = i;

            // Find the '#'
            while(s[j] != '#'){
                j++;
            }

            // Get the length of the string
            int len = stoi(s.substr(i, j - i));

            // Move after '#'
            j++;

            // Extract exactly 'len' characters
            ans.push_back(s.substr(j, len));

            // Move to next encoded string
            i = j + len;
        }

        return ans;
    }
};