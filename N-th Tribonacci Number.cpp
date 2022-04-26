class Solution {
public:
    int tribonacci(int n) {
        if(n==1 || n==2)
            return 1;
        if(n==0)
            return 0;
        int t0=0,t1=1,t2=1,sum;
        for(int i=3 ; i<=n ; i++){
            sum=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=sum;
            
        }
        return sum;
        
    }
};