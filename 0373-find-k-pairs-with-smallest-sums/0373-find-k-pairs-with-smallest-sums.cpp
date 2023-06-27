class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
         int n1=nums1.size();
        int n2=nums2.size();
        int mini=min(n1,k);
        int cnt=0;
        for(int i=0;i<mini;i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        while(!pq.empty() && k--){
            vector<int> temp;
            int fst=pq.top().second.first;
            int sec=pq.top().second.second;
            temp.push_back(nums1[fst]);
            temp.push_back(nums2[sec]);
            ans.push_back(temp);
            pq.pop();
            if (sec < n2 - 1) 
                pq.push({nums1[fst] + nums2[sec+1], {fst, sec+1}});
            cnt++;
            temp.clear();
        }
        return ans;
    }
};