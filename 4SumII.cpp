class Solution {
public:
  int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
         unordered_map<int,int> m;
         int ans=0;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {   
            for(int j=0;j<nums2.size();j++)
            {
                m[nums1[i]+nums2[j]]++;    //storing sum of 2 array elements in HASHMAP
            }
        }
       
            for(int k=0;k<nums3.size();k++)    //Iterating in other 2 arrays
            {
                 for(int l=0;l<nums4.size();l++)
                 { 
                     int x=-(nums3[k]+nums4[l]);  //find additive inverse of sum of nums3 and nums4
                  
                     if(m.find(x)!=m.end())    //if it exists then adding freq of that element to ans
                     {
                         ans=ans+m[x];
                            
                     }
                 }
            }
        
        return ans;
    
    }
};