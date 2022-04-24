class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        stack<int> st;
       
        int size=prices.size();
        vector<int> ans(size,0);
        for(int i = 0 ; i < prices.size() ; i++)
        {
            while(st.empty()==false && prices[i]<=prices[st.top()])
            {
                ans[st.top()]=prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            ans[st.top()]=prices[st.top()];
            st.pop();
        }
        
        return ans;
        
    }
};