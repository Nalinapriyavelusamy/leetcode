class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (const string& sentence: sentences) {
            istringstream  iss(sentence);
            string word;
            int count = 0;

            while (iss >> word) {
                count++;
            }

            maxWords = max(maxWords, count);

        }

        return maxWords;
    }
};