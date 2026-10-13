#include<stdio.h>
struct sheet//定义一个数据类型来存储学生姓名和分数
{
    char name[100];
    float score;
};
int main()
{
int num;//定义一个变量来保存学生人数
printf("请输入学生人数");
scanf("%d",&num);
struct sheet stu[num];//定义一个结构体数组来存储多名学生数据
for(int i=0;i<num;i++ )//通过循环录入每个学生名字和分数
{
    printf("请输入第%d个学生的名字\n",i+1);
    scanf("%s",stu[i].name);
    printf("请输入第%d个学生的分数\n",i+1);
    scanf("%f",&stu[i].score);

}
for(int j=0;j<num;j++)//通过循环打印每个学生名字和分数
{
    printf("第%d个学生的姓名为%s,分数为%.1f\n",j+1,stu[j].name,stu[j].score);
}
return 0;
}