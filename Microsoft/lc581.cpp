#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int ans = 0, i = 0, j = nums.size() - 1;
        int curr_max=INT_MAX, curr_min=INT_MIN, start=0,end=-1;        
        while(j >= 0){
            if(nums[i] >= curr_min) curr_min = nums[i];
            else end = i;
            if(nums[j] <= curr_max) curr_max = nums[j];
            else start = j;
            ++i;
            --j;
        }
        return end - start + 1;
    }
};