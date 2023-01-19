class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int> umap;
        for(auto it:s)
        {
            umap[it]++;
        }
        
        priority_queue<pair<int,char>> pq;
        for(auto it:umap)
        {
            pq.push({it.second,it.first});
        }
        
        while(!pq.empty())
        {
            int num=pq.top().first;
            char chs=pq.top().second;
            pq.pop();
            for(int i=0;i<num;i++)
            {
                ans+=chs;
            }
        }
        
        return ans;
    }
};