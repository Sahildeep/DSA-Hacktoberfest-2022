 bool sortByVal(const pair<int, int> &a, 
               const pair<int, int> &b) 
{ 
    return (a.second < b.second); 
} 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        unordered_map<int , int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v1;
        for(auto x: mp){
            v1.push_back(make_pair(x.second , x.first));
        }
        sort(v1.begin() , v1.end());
        int temp = v1.size();
        for(int i=temp-1;i >(temp-k-1);i--){
            v.push_back(v1[i].second);
        }
        return v;
    }
