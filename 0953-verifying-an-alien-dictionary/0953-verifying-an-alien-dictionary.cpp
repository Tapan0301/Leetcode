class Solution
{
    public:
        bool isAlienSorted(vector<string> &words, string order)
        {
            for (int i = 0; i < words.size() - 1; i++)
            {
                for (int j = i + 1; j < words.size(); j++)
                {
                    for (int k = 0; k < words[i].size(); k++)
                    {
                        if (words[i].size() == k) break;
                        if (words[j].size() == k) return false;
                        if (order.find(words[i][k]) == order.find(words[j][k])) continue;
                        if (order.find(words[i][k]) > order.find(words[j][k])) return false;
                        else break;
                    }
                }
            }

            return true;
        }
};