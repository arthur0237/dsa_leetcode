#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        set<int> s;
        int i=0;
        int count = 0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
            }
            else if(nums[i]!=1){
            s.insert(count);
            count = 0;
            }
            i++;
        }
        if(nums[nums.size()-1]==1){
            s.insert(count);
        }
        auto it = s.end();
        it--;
        return *it;
    }
};