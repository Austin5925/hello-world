//����
//
// 
//
//����n����ͬ���������е����
//
//  
//
//����
//
// 
//
//��1����һ������m����ʾ�����m�����ݡ�
//
//ÿ������ռһ�У���һ������n��ʾ�����n����ͬ��������
//
// 
//
//���
//
// 
//
//��ÿ�����ݣ������n����ͬ�����Ĳ�ͬ��ϣ�������ϡ�ÿ��������ǰ�����--> ����
//
//Ҫ����밴���Ͽν��ĵݹ鷽����д�������������Ԫ�ص�������������������������������ܱ�֤���˳��ͱ�׼��һ�¡�
//
// 
//
//����
//
// 
//
//����
//
//���
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


