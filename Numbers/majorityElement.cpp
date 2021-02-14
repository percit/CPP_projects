//https://leetcode.com/problems/majority-element/submissions/
#include <iostream>
#include <vector>
#include<utility>
#include <algorithm>
int majorityElement(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int a = nums.at(0);
    int b = 0, max = 0, major = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums.at(i) == a){
            ++b;
            if(max < b) {
                max = b;
                major = a;
            }
        }
        else {
            if(max < b){
                max = b;
                major = a;
            }
            a = nums.at(i);
            b = 1;
        }
    }
    return major; 
}
