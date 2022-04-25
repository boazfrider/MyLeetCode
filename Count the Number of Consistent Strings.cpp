class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        int arr[26]={0};
        int i=0;
        bool flag=true;
        while(allowed[i])
        {
            arr[allowed[i]-'a']++;
            i++;
        }
        for(int k=0 ; k<words.size() ; k++)
        {
            flag=true;
            for(int j=0; j< words[k].length() ; j++)
            {
                if(arr[words[k][j]-'a']==0){
                   flag=false;
                    //break;
                }
                    
            }
            if(flag)
                count++;
        }
        return count;
    }
};