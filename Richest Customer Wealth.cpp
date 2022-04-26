class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int k=0 ; k<accounts.size(); k++)
        {
            int temp = sum(accounts[k]);
            if (temp>max)
                max=temp;
        }
        return max;
    }
    int sum(vector<int>& arr)
    {
        int sum=0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};