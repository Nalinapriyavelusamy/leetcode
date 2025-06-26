class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(27,0);
        for(int i=0;i<sentence.size();i++){
            int t=sentence[i]-'a';
            ans[t]++;
        }
        bool a= true;
        for(int i=0;i<26;i++){
            if(ans[i]==0){
                a=false;
                break;
            }
        }
        return a;
    }
};