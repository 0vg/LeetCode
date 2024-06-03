/* 
Palindrome

Runs at 4MS runtime and 8.15MB memory
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x == reverseDigits(x)) {
            return true;
        }
        return false;
    }

    long long reverseDigits(int num) {
        long long rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }
};
