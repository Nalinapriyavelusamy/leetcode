class Solution {
public:
    int rob(vector<int>& nums) {
        int house1 = 0;
        int house2 = 0;
        for(int i = 0;i<nums.size();i++){
            int curr = max(house1 , nums[i]+house2);
            house2 = house1;
            house1 = curr;
        }
        return house1;
    }
};