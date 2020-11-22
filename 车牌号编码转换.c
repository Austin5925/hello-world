#include <stdio.h>
#include <Windows.h>
#include <string.h>

/*************************************************
*��GB2312������ַ���תΪUTF-8����
*����:
*p:ָ���ת���ַ���
*����:
*ָ����ת���ַ�����ָ��
*����:
*��GB2312תΪUnicode����
*�ٽ�UnicodeתΪUTF-8
*************************************************/
char* Gb2312ToUtf8(char *p){
	DWORD dwNum = MultiByteToWideChar(CP_ACP, 0, p, -1, NULL, 0);
	char *psText;
	wchar_t *pwText = (wchar_t*)malloc(dwNum*sizeof(wchar_t));
	dwNum = MultiByteToWideChar(CP_ACP ,0 ,p ,-1 ,pwText ,dwNum );
	dwNum = WideCharToMultiByte(CP_UTF8,0,pwText,-1,NULL,0,NULL,NULL);
	psText=(char*)malloc(dwNum*sizeof(char));
	dwNum = WideCharToMultiByte(CP_UTF8,0,pwText,-1,psText,dwNum,NULL,NULL);
	free(pwText);
	return psText;
}

int main(){
	printf("�����복�ƺţ�");
	char plate[16];
	scanf("%s", plate);                                   
	char *result;
	result = Gb2312ToUtf8(plate);
	printf("%s\n",result);
	system("pause");
	return 0;
}
