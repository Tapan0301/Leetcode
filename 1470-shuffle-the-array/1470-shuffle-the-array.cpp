class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int front=0,rear=n;
        while(front<n)
        {
            ans.push_back(nums[front]);
            ans.push_back(nums[rear]);
            front++;
            rear++;
        }
        return ans;
    }
};