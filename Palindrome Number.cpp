class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int temp=x;
        int n=0;
        while(temp!=0)
        {
            n++;
            temp=temp/10;
        }
        std::cout<<n;
        int* arr=new int[n];
        for(int i=n-1; i>=0 ; i--)
        {
            arr[i]=x%10;
            x=x/10;
        }
        for(int i=0; i<n/2 ; i++)
        {
            if(arr[i]!=arr[n-i-1])
                return false;
           
        }
        return true;
    }
};