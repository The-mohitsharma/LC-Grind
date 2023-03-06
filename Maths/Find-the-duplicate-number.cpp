#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // using fast and slow poointer.
        int slow = nums[0];
        int fast = nums[0];
        // loop until they meet.
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];

        } while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];

        }
        return slow;

        
    }
};
// time complexity : O(N)
// space complexity : O(1)
