class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
     unordered_map<int,int> mp;
        for(int i = lowLimit ; i<=highLimit ; i++)
        {
            mp[sumdigits(i)]+=1;
        }
        int max=0;
        for( auto& i : mp)
        {
            if(i.second > max)
            {
                max=i.second;
            }
            
        }
        return max;
    }
    int sumdigits(int sum){
        int k=0;
        while(sum){
            k+=sum%10;
            sum=sum/10;
        }
       // cout<<k<<endl;
        return k;
    }
};