class Solution
{
    public:
        int jump(vector<int> &nums)
        {
            if (nums.size() < 2) return 0;
            int ans = 1, cur = nums[0], backup = nums[0];
            for (int i = 1; i < nums.size(); i++)
            {
                if (cur == 0)
                {
                    cur = backup;
                    ans++;
                }
                cur--;
                backup--;
                if (backup < nums[i]) backup = nums[i];
            }
            return ans;
        }
};