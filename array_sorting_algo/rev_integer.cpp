class Solution
{
public:
    int reverse(int x)
    {
        int num = x; // Use a separate variable to iterate through digits
        int dig = 0;
        int ans = 0;

        while (num != 0)
        {
            dig = num % 10;
            if ((ans < INT_MIN) || (ans > INT_MAX))
            {
                return 0;
            }
            ans = ans * 10 + dig;
            num = num / 10; // Update the number to move to the next digit
        }

        return ans;
    }
};
