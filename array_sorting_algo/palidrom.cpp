class Solution
{
public:
    bool isPalindrome(int x)
    {
        int number = x;
        int digit = 0;
        long rev = 0;
        while (number > 0)
        {
            digit = number % 10;
            rev = rev * 10 + digit;
            number = number / 10;
        }
        // cout<<rev<<" "<<x;
        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
