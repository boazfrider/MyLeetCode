class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> temp ;
        string tempstr="";
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i]!=' ')
                tempstr+=s[i];
            else{
                temp.push_back(tempstr);
                tempstr="";
            }
        }
        temp.push_back(tempstr);
        tempstr="";
        for(int k = 0 ; k < temp.size() ; k++){
            reverse(temp[k].begin(),temp[k].end());
            cout<<temp[k];
            tempstr+=temp[k];
            if(k!=temp.size()-1)
                 tempstr+=" ";
        }
        return tempstr;
                    
    }
};