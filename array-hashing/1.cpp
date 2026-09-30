#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            // Check if the required number already exists
            if(mp.count(need)) return {mp[need], i};

            // store number & its index
            mp[nums[i]] = i;
        }
        return {};
    }
};