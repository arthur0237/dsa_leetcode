#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    vector<int> arr;
    int i = nums.size();
    k = k%i;
    i = i-k;
    while(i<nums.size()){
        arr.push_back(nums[i]);
        i++;
    }
    for (int j = i - 1; j >= k; j--) {
        nums[j] = nums[j - k];
    }
    int z = 0;
    while(z<k){
        nums[z] = arr[z];
        z++;
    }
     
    }
};