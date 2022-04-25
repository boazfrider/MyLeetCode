class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        bool flag=true;
        for(int i = 0 ; i < arr1.size() ; i++)
        {
            flag=true;
            for(int k=0 ; k < arr2.size() ; k++)
            {
                cout<<abs(arr1[i]-arr2[k])<<endl;
                if(abs(arr1[i]-arr2[k])<=d){
                    flag=false;
                    break;
                }
            }
            if(flag==true)
                count++;
        }
        return count;
    }
};