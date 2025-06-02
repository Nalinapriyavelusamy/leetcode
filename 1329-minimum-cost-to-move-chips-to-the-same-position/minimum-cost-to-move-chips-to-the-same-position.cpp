class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int evenCount = 0;
        int oddCount = 0;
        for (int chip = 1; chip <= chips.size(); chip++)
        {
            if (chips[chip - 1] % 2 == 0) 
                evenCount++;
            else 
                oddCount++;
        }
        return min(evenCount, oddCount);
    }
};
