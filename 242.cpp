#include <iostream>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int record[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            record[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            record[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (record[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};