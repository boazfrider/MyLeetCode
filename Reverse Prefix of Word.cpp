class Solution {
public:
    string reversePrefix(string word, char chh) {
        stack<char> temp;
        string ans="";
        string rest="";
        bool flag=true;
        int i=0;
        for(auto ch : word)
        {
            if (ch == chh  ){
                temp.push(ch);
                i++;
                flag=false;
                break;
            }
            temp.push(ch);
            i++;
        }
        while(temp.empty()==false)
        {
            char c= temp.top();
            ans.push_back(c);
            temp.pop();
        }
          while(i<word.length())
          {
              ans.push_back(word[i]);
              i++;
          }
        if(flag==true)
            return word;
        return ans;
    }
};