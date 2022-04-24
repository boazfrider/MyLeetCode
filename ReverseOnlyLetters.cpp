class Solution {
public:
    string reverseOnlyLetters(string s) {
        int p1=0;
        int p2=s.size()-1;
        
        while(p1<p2)
        {
            if(isLetter(s[p1]) && isLetter(s[p2])){
                swap(s[p1],s[p2]);
                cout<<s<<endl;
                p1++;
                p2--;
                continue;
            }
            if(isLetter(s[p1]) && isLetter(s[p2])==false){
                p2--;
                continue;
            }
            if(isLetter(s[p1])==false && isLetter(s[p2])){
                p1++;
                continue;
            }
            else if(!isLetter(s[p1]) && !isLetter(s[p2]))
            {
                p1++;
                p2--;
            }
                            
        }
        return s;
    }
    // void swap(char& ch1 , char& ch2)
    // {
    //     char temp=ch1;
    //     ch1=ch2;d
    //     ch2=temp;
    // }
    bool isLetter(char ch)
    {
         return ((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')) ?  true :  false;
    }
};