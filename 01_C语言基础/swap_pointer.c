#include<stdio.h>
int main()
{
    int a=1;
    int b=2;
    printf("a的值为:%d,b的值为:%d\n",a,b);
    int* p1=&a;
    int* p2=&b;
    int tem=*p1;//通过临时变量存储指针p1指向的值
    *p1=*p2;//把p2指向的值赋给a
    *p2=tem;//把临时变量中存储的值赋给b
    printf("现在a的值为:%d,b的值为:%d\n",a,b);
    return 0;
    
}