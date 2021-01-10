//描述
//
// 
//
//计算n个不同整数的所有的组合
//
//  
//
//输入
//
// 
//
//第1行是一个整数m，表示随后有m组数据。
//
//每组数据占一行，第一个整数n表示随后有n个不同的整数。
//
// 
//
//输出
//
// 
//
//对每组数据，输出这n个不同整数的不同组合，含空组合。每个组合输出前输出“--> ”。
//
//要求必须按照上课讲的递归方法来写，先输出包含该元素的情况，再输出不包含的情况，这样才能保证输出顺序和标准答案一致。
//
// 
//
//样例
//
// 
//
//输入
//
//输出
//
//2
//
//2 1 2
//
//3 1 2 3
//
//
//
//--> 1 2
//
//--> 1
//
//--> 2
//
//--> 
//
//--> 1 2 3
//
//--> 1 2
//
//--> 1 3
//
//--> 1 
//
//--> 2 3
//
//--> 2
//
//--> 3
//
//--> 

//      for (int i = 0; i < n; i++)
//      {
//          cout << number[i];
//      }
//      cout<<endl;
        //memset(tag,1,sizeof(tag[0])*n);
//      for (int i = 0; i < n; i++)
//      {
//          cout << tag[i]<<endl;
//      }

#include<stdio.h>
#include<string.h>

void subset(int list[], int tag[], int n,int len)
{
    if (n == len)
    {
        printf("-->");
        for (int i = 0; i < len; i++)
        {
            if (tag[i] == 1)
                printf(" %d",list[i]);
        }
        printf("\n");
        return;
    }
    tag[n] = 1;
    subset(list, tag, n + 1,len);

    tag[n] = 0;
    subset(list, tag, n + 1,len);
}

int main() {
	int m;
	scanf("%d",&m);
    while(m--)
    {
        int n;
        scanf("%d",&n);
        int number[n];
        int tag[n];
        for (int i = 0; i < n; i++)
        {
           scanf("%d",&number[i]);
        }
        subset(number, tag, 0,n);
    }
    return 0;
}


//#include <stdio.h>
//
//int subset(int s[], int t[], int k, int len) {
//	if (k == len) {
//		printf("--> ");
//		for (int i = 0; i < len; i++) {
//			if (t[i] == 1) {
//				printf("%d ", s[i]);
//			}
//		}
//		printf("\n");
//		return 1;
//	}
//	
//	t[k] = 1;
//	subset(s, t, k + 1, len);
//	
//	t[k] = 0;
//	subset(s, t, k + 1, len);
//}
//
//int main() {
//	int m, o;
//	scanf("%d", &m);
//	for (o = 0; o < m; o++) {
//		int n;
//		scanf("%d", &n);
//		
//		int element;
//		int s[n];
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &element);
//			s[i] = element;
//		}
//		
//		int len = n;
//		int k = 0;
//		int t[n];
//		subset(s, t, k, len);
//	}
//	return 0;
//}


