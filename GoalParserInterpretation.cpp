class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int index = 0 ; index < command.size() ; index++)
        {
            if(command[index]=='(' && command[index+1]==')'){
                ans+='o';
                index++;
                continue;
            }
            if(command[index]=='(' && command[index+1]!=')')
                ans+=helper(command,index);
            else
                ans+=command[index];
        }
        return ans;
        
    }
    
    string helper(string temp , int& index)
    {
        string ans="";
        index++;
        while(temp[index]!=')')
        {
            ans+=temp[index];
            index++;
        }
            return ans;
    }
};