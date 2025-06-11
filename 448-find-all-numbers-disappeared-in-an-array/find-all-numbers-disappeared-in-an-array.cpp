class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st;
        vector<int>v;
        for(int i = 0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i = 1;i<= nums.size();i++){
            if(st.count(i) == 0)
            v.push_back(i);
        }
        return v;
    }
};