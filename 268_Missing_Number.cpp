#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int n = nums.size();
   n = (n*(n+1))/2;
   int a=0;
   for(int i=0;i<nums.size();i++){
    a = a + nums[i]; 
   }
   return n-a;
    }
};