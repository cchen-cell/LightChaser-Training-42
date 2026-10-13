#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    double avg;
    double sum=0.0;
    printf("请输入个数\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("请输入大于0的个数");
        return 1;
    }
    int*p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
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