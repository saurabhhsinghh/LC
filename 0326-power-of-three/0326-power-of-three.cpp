class Solution {
public:
    bool isPowerOfThree(int num) {
        
    while(num > 1) {
            if(num % 3)return false;
            num /= 3;
        }
        return num == 1;
    }
};