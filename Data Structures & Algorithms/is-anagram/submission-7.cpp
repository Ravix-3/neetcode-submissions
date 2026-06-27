// Frequency Array based Approach
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int freq[26] ={0};
        
        for(char ch : s)       // range based for loop
          freq[ch - 'a']++;  //freq[index]=freq[index]+1

        for(char ch : t)
          freq[ch - 'a']--;
        
        for(int i = 0 ; i < 26 ; i++)
            if(freq[i] != 0)
               return false;
         
        return true;
    }
};
