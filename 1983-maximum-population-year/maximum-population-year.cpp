

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int count[101] = {0};  // For years 1950 to 2050
        
        for (auto &log : logs) {
            int birth = log[0];
            int death = log[1];
            // Increase population from birth year
            for (int year = birth; year < death; year++) {
                count[year - 1950]++;
            }
        }
        
        int maxPop = 0;
        int maxYear = 1950;
        
        for (int i = 0; i < 101; i++) {
            if (count[i] > maxPop) {
                maxPop = count[i];
                maxYear = 1950 + i;
            }
        }
        
        return maxYear;
    }
};
