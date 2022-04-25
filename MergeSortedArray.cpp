class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        if(m==0)
        {
            for(int i=0;i<n;i++)
                nums1[i]=nums2[i];
            return;
        }
        for(int i=m-1,j=m+n-1;i>=0;i--,j--)
            nums1[j]=nums1[i];
        int it=0;
        int i=n,j=0;
        while(i<m+n&&j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums1[it++]=nums1[i++];
            }
            else
            {
                nums1[it++]=nums2[j++];
            }
        }
        if(j<n)
        {
            while(j<n)
            {
                nums1[it++]=nums2[j++];
            }
        }
        
    }
};