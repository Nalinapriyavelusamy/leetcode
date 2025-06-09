class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int n = nums.size();
        int num = nums[n/2];
        return num;
    }
};