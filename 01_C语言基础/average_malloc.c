#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;//定义变量来存储要输入的个数
    double avg;
    double sum=0.0;//定义并初始化变量用于累加求和
    printf("请输入个数\n");
    scanf("%d",&n);
    if(n<=0)//检查个数
    {
        printf("请输入大于0的个数");
        return 1;
    }
    int*p=(int*)malloc(n*sizeof(int));//申请n个int类型大小的内存空间，将返回指针强转并赋值
    if(p==NULL)//检查内存是否申请成功
    {
        printf("动态内存申请失败\n");
    }
    else{
    for(int i=0;i<n;i++)
    {
        printf("请输入第%d个数字\n",i+1);
        scanf("%d",&*(p+i));
        sum+=*(p+i);
    }
    avg=sum/n;
    printf("平均数为：%.2lf\n",avg);
    free(p);
}
    
    return 0;
    
}