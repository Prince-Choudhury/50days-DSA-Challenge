class Solution
{
public:
    string removeDups(string S)
    {

        unordered_map<char, int> mp;
        string res = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (mp[S[i]] == NULL)
            {
                res += S[i];
            }
            mp[S[i]]++;
        }
        return res;
    }
};