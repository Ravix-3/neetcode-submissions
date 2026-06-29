class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++)
        {
            if (visited[i])
                continue;

            vector<string> group;

            string key = strs[i];
            sort(key.begin(), key.end());

            group.push_back(strs[i]);
            visited[i] = true;

            for (int j = i + 1; j < strs.size(); j++)
            {
                if (visited[j])
                    continue;

                if (strs[i].length() != strs[j].length())
                    continue;

                string temp = strs[j];
                sort(temp.begin(), temp.end());

                if (key == temp)
                {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};