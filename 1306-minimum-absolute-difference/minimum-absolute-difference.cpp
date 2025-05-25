class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>v;
        map<vector<int>,int>cnt;
        int mi=INT_MAX;
        for(int i=1;i<arr.size();i++){
            mi=min(mi,arr[i]-arr[i-1]);
        }
        map<int,int>mp;
        for(auto u:arr) mp[u]++;
        for(auto u:arr){
            vector<int>v1;
            if(mp[u+mi]){
                v1.push_back(u);
                v1.push_back(u+mi);
                sort(v1.begin(),v1.end());
                if(!cnt[v1]) v.push_back(v1);
            }
        }
        return v;
    }
};