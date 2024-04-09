#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        auto it = nums.begin();
        while(it!=nums.end()){
            if(*it == 0){
               it =  nums.erase(it);
                count++;
            }
            else{
            it++;
            }
        }
        while(count>0){
            nums.push_back(0);
            count--;
        }
    }
};