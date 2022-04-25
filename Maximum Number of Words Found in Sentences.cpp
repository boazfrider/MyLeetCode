class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=1;
        int max=0;
        for(int i=0 ; i<sentences.size() ; i++){
            int temp=help(sentences[i]);
            if(temp>max)
                max=temp;
                
        }
        return max;
    }
    int help(string s)
    {
        int count=1;
        int i=0;
        while(s[i])
        {
            if(s[i]==' ')
                count++;
            i++;
        }
        return count;
    }
};