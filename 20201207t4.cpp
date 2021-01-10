//描述
//读入n名学生的姓名、身份证号、成绩，分别输出成绩最高和成绩最低学生的姓名和身份证号。注意：学生名单中可能缺考，没有成绩，表示为n/a.
//输入
//每个测试输入包含1个测试用例，格式为
//  第1行：正整数n (1<=n<=100)
//
//  第2行：第1个学生的姓名 学号 成绩
//
//  第3行：第2个学生的姓名 学号 成绩
//
//  ... ... ...
//
//  第n+1行：第n个学生的姓名 学号 成绩
//其中姓名为不超过10个字符的字符串，身份证是标准18位，成绩为0到100之间的一个整数。
//输入中至少有一位学生有成绩。
//
//输出
//
//对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，项与项之间有1个空格。如果成绩最高的学生有多个，输出姓名字典序最小的那个，如果成绩最低的有多个，输出姓名字典序最大的那个。
//
// 样例
// 输入
//
//3
//
//Joe   510502199001011234 89
//
//Mike   51050220000101123x 100
//
//Mary   510502199901011234 n/a
//
//输出
//Mike 51050220000101123x
//
//Joe 510502199001011234

#include<stdio.h>
int main (void){
restart:	int i,n,j;
	int max,min,temp=0,tempmax,tempmin;
	scanf("%d",&n);
	int a[n],stu[n];
	if (n>=1 && n <= 100){	
		struct stuinfo{
			char name;
			char id[17];
			char score;
			int realscore;
		};
		for(i=0;i<n;i++){
restart1:	struct stuinfo stu[i];
			scanf("%s",&stu[i].name);
			for(j=0;j<18;j++){
				scanf("%1s",&stu[i].id[j]);
			}
			scanf("%s",&stu[i].score);
			
			if (sizeof(stu[i])>80){
			printf ("姓名长度不合法，请再次输入\n");
			goto restart1;
			}
			else if( stu[i].score != *"n/a"){
				stu[i].realscore = stu[i].score - 48;
				if(stu[i].realscore >= 0 && stu[i].realscore <= 100)
				continue;
				else {
					printf ("分数不合法，请再次输入\n");
					goto restart1;
				}
			}
			else if( stu[i].score == *"n/a")
				stu[i].score = '\0';
			
			if(i>=1){
				max = stu[i-1].score;
				min = stu[i-1].score;
				if(stu[i].score > stu[i-1].score){
					max = stu[i].score;	
					tempmax = i;			
				}
				else if(stu[i].score = stu[i-1].score){
					temp++;			
				}
				else if(stu[i].score < stu[i-1].score){
					min = stu[i].score;		
					tempmin = i;	
				}
			}	
		printf("%s %s",stu[tempmax].name,stu[tempmax].id);
		printf("\n");
		printf("%s %s",stu[tempmin].name,stu[tempmin].id);	
		}
		
}
else
printf ("n不合法，请再次输入\n");
goto restart;
return 0;	
}
 
