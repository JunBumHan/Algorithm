    #include <stdio.h>



    int isArithmeticalSequence(int n)
    {
        int digits[4] = {0, }, idx = 0;
        int commonDifference;

        while(n != 0)
        {
            digits[idx++] = n % 10;
            n /= 10;
        }
        if(idx <= 2) return 1; // 두 자릿수 참 반환

        commonDifference = digits[1] - digits[0];
        for(int i = 1; i < idx; ++i)
        {
            if(digits[i] != commonDifference + digits[i-1]) return 0;
        }
        return 1;
    }

    int main(void)
    {
        int n,sum = 0;
        scanf("%d",&n);

        for(int i = 1; i <= n; ++i)
        {
            if(isArithmeticalSequence(i)) sum++;
        }
        printf("%d",sum);
    }