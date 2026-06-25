class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size();i++){
            int x = nums[i];
            for(int j = i + 1; j < nums.size();j++){
                if(nums[j] == x)
                   return true;
            }
        }
        return false;
    }
};