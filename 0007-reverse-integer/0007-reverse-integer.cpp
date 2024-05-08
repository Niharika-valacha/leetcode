class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int remainder;
        while(x!=0)
        {
            remainder= x%10;
            rev=rev*10+remainder;
            x/=10;
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0;// edge case [-231, 231 - 1], then return 0
        return rev;
        
    }
};