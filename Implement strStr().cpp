class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="") return 0;
        int find=haystack.find(needle);
        return find;
    }
};