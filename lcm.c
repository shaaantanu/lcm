#include<stdio.h>

int find_lcm(int, int);  

int main()
{
    int a, b, lcm;
        scanf("%d %d", &a, &b);
    printf("Input First number: %d Input second number: %d\n",a,b);

    lcm = find_lcm(a,b);   
    printf("LCM of %d and %d = %d ", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b) 
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
    return 0;
}
