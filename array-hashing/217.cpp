#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        unordered_set<int> st;
        for(int num : nums){
            // if num already existes in the set
            if(st.count(num)) return true;
            
            // if not then insert
            st.insert(num);
        }
        return false;
    }
};    