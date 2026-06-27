class Solution {
public:
    bool isPalindrome(string s) {
     string result ="";
     for(char ch : s)
     {
       if(isalnum(ch))
        {
            result += tolower(ch);
        }
     }
     string original = result;
     reverse(result.begin(),result.end());
     return original == result ;
    }
};
