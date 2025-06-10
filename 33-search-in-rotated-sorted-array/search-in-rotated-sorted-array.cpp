class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            for(int j= 0;j<nums.size();j++){
                if(nums[i] == target)
                return i;
            }
        }
        return -1;
    }
};