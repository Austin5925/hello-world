#include <stdio.h>
#include <Windows.h>
#include <string.h>

/*************************************************
*将GB2312编码的字符串转为UTF-8编码
*输入:
*p:指向待转码字符串
*返回:
*指向已转码字符串的指针
*过程:
*将GB2312转为Unicode编码
*再将Unicode转为UTF-8
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
	printf("请输入车牌号：");
	char plate[16];
	scanf("%s", plate);                                   
	char *result;
	result = Gb2312ToUtf8(plate);
	printf("%s\n",result);
	system("pause");
	return 0;
}
