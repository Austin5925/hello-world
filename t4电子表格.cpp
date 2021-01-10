//����
//
//
//
//��һ��r��c��(1<=r,c<=50)�ĵ��ӱ���д��ϵ��±��Ϊ1~r���д����ұ����1~c�����涨���˼��ֲ�����(x, y�ȶ�������)
//
//l  SR x1 x2 
//����x1�к�x2��
//
//l  SC y1 y2 
//����y1�к�y2��
//
//l  DR x
//ɾ��x��
//
//l  DC y
//ɾ��y��
//
//l  IR x
//��x���������һ�У��²�����е����е�Ԫ��ֵΪ0
//
//l  IC y
//��y��ǰ�����һ�У��²�����е����е�Ԫ��ֵΪ0
//
// 
//
//����
//
// 
//
//��һ����2������r, c����ʾ���ӱ����r��c�С���������r�У�ÿ��c����������ʾÿ����Ԫ���ֵ���ٽ�������һ����1������n����ʾ�����n�У�ÿ����һ���������
//
// 
//
// 
//
//���
//
// 
//
//���������n�β�����ĵ��ӱ�����ݡ�
//
// 
//
//��������
//
// 
//
//3 5
//
//1 2 3 4 5
//
//3 4 5 6 7
//
//5 6 7 8 9
//
//4
//
//SR 1 3
//
//SC 2 4
//
//IR 2
//
//DC 2
//
// 
//
//�������
//
// 
//
//5 7 6 9
//
//0 0 0 0
//
//3 5 4 7
//
//1 3 2 5

#include<stdio.h>
#include<string.h>
int main() {
	int r, c, m, n;
	scanf("%d %d", &r, &c);
	int a[101][101] = {0};
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &m);
			a[i][j] = m;
		}
	}
	
	scanf("%d", &n);
	for (int i = 0; i < n + 1; i++) {
		char cmd[10];		
		fgets(cmd, sizeof(cmd), stdin);
		
		int p = 0, q = 0, t = 0;
		for (int j = 3; j < 10; j++) {
			if (cmd[j] == '\n') {
				break;
			}
			if (t == 0 && cmd[j] != ' ') {
				p = p * 10 + (cmd[j] - '0');
			}
			if (t == 1 && cmd[j] != ' ') {
				q = q * 10 + (cmd[j] - '0');
			}
			if (cmd[j] == ' ') {
				t = 1;
			}
		}
		p = p - 1;
		q = q - 1;
		
		if (cmd[0] == 'S' && cmd[1] == 'R') {
//			printf("1\n");
			for (int j = 0; j < c; j++) {
				a[100][j] = a[p][j];
				a[p][j] = a[q][j];
				a[q][j] = a[100][j];
			}
		}
		
		if (cmd[0] == 'S' && cmd[1] == 'C') {
//			printf("2\n");
			for (int j = 0; j < r; j++) {
				a[j][100] = a[j][p];
				a[j][p] = a[j][q];
				a[j][q] = a[j][100];
			}			
		}
		
		if (cmd[0] == 'D' && cmd[1] == 'R') {
//			printf("3\n");
			for (int j = p; j < r; j++) {
				for (int k = 0; k < c; k++) {
					a[j][k] = a[j + 1][k];
				}
			}
			for (int k = 0; k < c; k++) {
				a[r][k] = 0;
			}
			r = r - 1;
		}
		
		if (cmd[0] == 'D' && cmd[1] == 'C') {
//			printf("4\n");
			for (int j = p; j < c; j++) {
				for (int k = 0; k < r; k++) {
					a[k][j] = a[k][j + 1];
				}
			}
			for (int k = 0; k < r; k++) {
				a[k][c] = 0;
			}
			c = c - 1;
		}
		
		if (cmd[0] == 'I' && cmd[1] == 'R') {
//			printf("5\n");
			for (int j = r; j >= p; j--) {
				for (int k = 0; k < c; k++) {
					a[j][k] = a[j - 1][k];
				}
			}
			for (int k = 0; k < c; k++) {
				a[p][k] = 0;
			}
			r = r + 1;
		}
		
		if (cmd[0] == 'I' && cmd[1] == 'C') {
//			printf("6\n");
			for (int j = c; j >= p; j--) {
				for (int k = 0; k < r; k++) {
					a[k][j] = a[k][j - 1];
				}
			}
			for (int k = 0; k < c; k++) {
				a[k][p] = 0;
			}
			c = c + 1;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", a[i][j]);
			if (j == c - 1) printf("\n");
		}
	}
	
	return 0;
}


