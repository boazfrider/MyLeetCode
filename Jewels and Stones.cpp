class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char,int> keeper;
        int counter=0;
        for(auto ch : jewels)
        {
            keeper[ch]++;
        }
        
        for(auto ch : stones)
        {
            if(keeper[ch]!=0)
                counter++;
        }
        return counter;
        
    }
};