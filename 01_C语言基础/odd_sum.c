#include<stdio.h>
int main()
{
    int sum=0;//定义一个初始值为0的变量进行累加
    for(int i=1;i<=100;i++)
    {
        if(i%2==1)//判断i是否为奇数
        {
            sum+=i;//如果i为奇数就进行累加
        }
    }
    printf("%d",sum);
    return 0;
}