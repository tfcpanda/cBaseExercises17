#include<stdio.h>
int main()
{   int n,i;             //声明变量,其中i为循环变量
	float score,sum=0.0;     //利用score读取各个学生的成绩，并累加到sum中
	printf("How many student in your class?:");
	scanf("%d",&n);
	i = 0;                  //初始化循环变量
	while(i<n)            //循环控制条件
	{ 
	   printf("Please input score of student[%d]:",i);
	   scanf("%f",&score);
	   sum = sum+score;    //将分数累加到sum中
	   i++;	              //调整循环变量的值
	}
	printf("The average score is %.2f",sum/n); 
    return 0; 
}