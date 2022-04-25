class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        int counterword=0;
        unordered_map<char,int> brokenletter;
        int counter=0;
        bool flag=true;
        for(char ch : brokenLetters)
        {
            brokenletter[ch]++;
        }
        
        int i = 0 ;
        while(text[i])
        {
            if(brokenletter[text[i]])
                flag=false;
            if(text[i]==' ' && flag){
            counter++;
            }
            if(text[i]==' ' && flag==false)
                flag=true;
            i++;
        }
        if(i=text.length()-1 && flag)
            counter++;
        return counter;
        
    }
};