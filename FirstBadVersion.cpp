// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        int middle;
        int savelast;
        while(left<=right)
        {
            middle=left + (right - left) / 2;
            if(isBadVersion(middle)==true){
                savelast=middle;
                right=middle-1;
            }
            else{
                left=middle+1;
            }
        }
        return savelast;
    }
};