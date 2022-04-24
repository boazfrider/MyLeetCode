class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool all_capital=true;
        for(int i = 0 ; i < word.length() ; i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                all_capital=true;
            }
            else{
                all_capital=false;
                break;
            }
        }
        if(all_capital)
            return true;
        int k=0;
        bool first_capital;
        if(word[k]>='A' && word[k]<='Z')
        {
            first_capital=true;
        }
        else{
            first_capital=false;
        }
        if(first_capital)
        {
            for(int j=1; j < word.length() ; j++)
            {
                if(word[j]>='a' && word[j]<='z')
                    continue;
                else
                    return false;
            }
        }
        else{
            for(int j=1; j < word.length() ; j++)
            {
                if(word[j]>='a' && word[j]<='z')
                    continue;
                else
                    return false;
            }
            
        }
        return true;
            
    }
};