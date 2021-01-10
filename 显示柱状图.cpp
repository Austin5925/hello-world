//D: 显示柱状图
//描述
//根据输入的数字和符号生成相应的柱状图显示。
//输入
//每个输入包含一个测试用例，第一个整数m(1<=m<=20)，表示随后有m组数据，每组数据由一个数字n（-15<=n<=15）和一个字符组成，每组数据之间用空格分隔。
//数字代表柱状图的高度，字母代表该柱使用的画图符号。如果数字后没有字母，默认该柱的画图符号使用加号’+’。
//输出
//每个柱之间用1个空格间隔，图的空白处用空格填充。用减号’-’表示x轴。正数柱状向上，负数柱状向下。
//样例
//输入
//6 1a 3 4b 2 -2 1
//输出
//
//    b      
//  + b      
//  + b +    
//a + b +   +
//-----------
//        +  
//        +  

#include<stdio.h>
#include<stdlib.h>

int main()
{
   char table[21][31];//显示
   int num[20];//接收数字
   char sign[20];//接收符号
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int up=0,down=0;//表示x轴上方和下方各有多少行
    for(i=0;i<n;i++)
    {
        if(num[i]>0&&up<num[i])
        {
            up=num[i];

        }
        else if(num[i]<=0&&down>num[i])
        {
            down=num[i];

        }
    }
    int row=up-down+1;

    for(j=0;j<n;j++)
    {
        if(num[j]>0)
        {
            for(i=0;i<row;i++)
            {
                if(i<up-num[j])
                {
                    table[i][j]=' ';
                }
                else if(i<up&&i>=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else
                {
                    table[i][j]=' ';
                }
            }
        }
        else
        {
            for(i=0;i<row;i++)
            {

                if(i<up)
                {
                    table[i][j]=' ';
                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else if(i>up&&i<=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    } else{
                        table[i][j]=sign[j];
                    }
                }
                else
                    {
                     table[i][j]=' ';

                }
            }

        }
    }


    for(i=0;i<row;i++)
    {
        if(i==up)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    printf("%c",table[i][j]);
                }
                else
                {
                    printf("%c-",table[i][j]);
                }

            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",table[i][j]);
            }
        }
        printf("\n");
    }


    return 0;

}

