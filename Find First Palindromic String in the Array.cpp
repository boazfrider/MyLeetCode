class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0 ; i < words.size() ; i++)
        {
            if(isPalindrom(words[i]))
                return words[i];
        }
        return ans;
    }
    bool isPalindrom(string s)
    {
        int length=s.length();
        int i=0 , j=length-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};