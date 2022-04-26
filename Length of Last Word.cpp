
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int end=s.size()-1;
        int counter=0;
        while(s[end]==' ')
            end--;
        for(int i=end ;i>=0 ; i--)
        {
            if(s[i]==' ')
                break;
            counter++;
        }
        return counter;
    }
};