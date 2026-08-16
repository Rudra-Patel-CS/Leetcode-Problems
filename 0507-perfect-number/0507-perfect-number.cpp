class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Logic:
        // Find the divisor of the num -->sumof all
        // check is it same as num - Yes -->True,No-->False
        if(num<=1)
        return false;
        int sum=1; //in all integer we have to add the add 1 -->divisor of all
        for(int i =2; i*i<=num ;i++)
        {
            if(num % i==0)
            {
                    sum += i;
                // Memorise the 1 case of same number like...
                // 25 = 5 * 5 -->here consider the 5 only one time...
                if(i*i!=num)
                {
                    sum = sum + num/i;
                }
            }

        }
        return num == sum; //--true...
    }
};