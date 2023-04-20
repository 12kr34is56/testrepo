int t;
    int sum=0,prod=1;
    while (num)
    {
        t=num%10;
        sum=sum+t;
        prod=prod*t;
        num/=10;

    }