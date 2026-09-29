#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isAnagram(string s, string t)
    {
        // If lengths are different, they cannot be anagrams
        if(s.size() != t.size()) return false;

        vector<int> count(26, 0);  // Store frequency of each character

        // Increase count for s and decrease for t
        for(int i=0; i<s.size(); i++){
            count[s[i] - 'a'] ++;
            count[t[i] - 'a'] --;
        }

        // Every character's frequency should be 0
        for(int i=0; i<26; i++){
            if(count[i] != 0) return false;
        }

        return true;
    }
};