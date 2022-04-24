class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> histo;
        unordered_map<int,int> counting;
        
        for(int num : arr)
        {
            histo[num]++;
        }
        for(auto val:histo)
        {
            counting[val.second]++;
            if(counting[val.second]>1)
                return false;
        }
        return true;
    }
};