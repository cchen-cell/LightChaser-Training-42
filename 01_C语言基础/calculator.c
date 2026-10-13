#include<stdio.h>
int main()
{
    int a;//定义一个变量保存运算方式
    double num1;
    double num2;
    printf("1代表加法,2代表减法,3代表乘法,4代表除法\n");
    printf("请输入你想要的运算方式\n");
    scanf("%d",&a);//赋值a来获取运算方式
    printf("请输入两个数字\n");
    scanf("%lf %lf",&num1,&num2);//赋值num1和num2
    //利用if语句判断a的值来获取对应运算结果
    if(a==1)
    {
        printf("结果为：%.2lf\n",num1+num2);
    }
     else if(a==2)
    {
        printf("结果为：%.2lf\n",num1-num2);
    }
   else if(a==3)
    {
        printf("结果为：%.2lf\n",num1*num2);
    }
    else if(a==4)
    {
        if(num2==0)//检查除数是否为0
        {
            printf("除数不能为0\n");
        }
        else{
            printf("结果为：%.2lf\n",num1/num2);

        }
        
    }
    else
    {
        printf("请输入正确的运算方式");
    }
    return 0;
}