#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    int longestConsecutive(vector<int>& nums){
        unordered_set<int> st;
        for(int i : nums) st.insert(i);

        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            if(!st.count(num-1)){
                int curr = num;
                int len = 1;

                while(st.count(curr + 1)){
                    curr++;
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};