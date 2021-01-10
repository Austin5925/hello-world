#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, l, m, k = 0, o, p = 0, z = 0; //P=1 NO  P=0 YES
    scanf("%d\n", &n);                         //\n用来存储Enter,防止被下一个scanf读取
                                               //\n可用getchar()来代替
    char ch[n][100];
    //中括号表示字符串长度 char代表一个字符；char[]代表数组，可用来储存字符串
    for (i = 0; i < n; i++)
    {
        scanf("%[^\n]s", ch[i]); //scanf后加地址，若输入ch[1]--代表一个值，需加&
                                   //若输入ch--本身就代表地址，不需加&
                                   //防止有输入字符串内空格 //由于此题输入字符串中无空格，使用scanf("%s",ch)也可以
        getchar();
    }
    for (j = 0; j < n; j++)
    {
        l = strlen(ch[j]);
        for (m = 0; m < l; m++)
        {
            if (ch[j][m] == 'A')
            {
                k++;
                if (ch[j][m + 1] == 'S' && ch[j][m + 2] == 'C' && ch[j][m + 3] == 'U')
                {
                    for (o = 0; o < l; o++)
                    {
                        z++;
                        if (ch[j][m + 4 + o] == '\0')
                        {
                            p = 1;
                            break;
                        }
						if (ch[j][m + 4 + o] != 'A')
                        {
						p = 1;
						break;
                        }
                        if (z == k)
                        {
                            p = 0;
                            break;
                        }
                        else
                        {
                            p = 1;
                        }
                    }
                    break;
                }
            }
            else
            {
                if (ch[j][0] == 'S' && ch[j][1] == 'C' && ch[j][2] == 'U' && ch[j][3] == '\0')
                {
                    p = 0;//YES
                    break;
                }
                else
                {
                    p = 1;
                }
            }
        }
  		if (p == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
	}
}

