class Solution {
public:

    uint32_t reverseBits(uint32_t n,int c = 32) {
        return c==0 ? 0 : reverseBits(n>>1,c-1)|(n&0x00000001)<<(c-1);
    
    }
};