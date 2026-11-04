class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> minHeap;
        for(auto it:mp){
            minHeap.push({it.second,it.first});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        vector<int>ans;
        while (!minHeap.empty()) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
    return ans;
    }
};
