#include<stdio.h>
void main()
{
	char sample[50];
	printf("문자열을 입력하세요...\n");
	gets(sample);
	printf("당신이 입력한 문자열은 = %s\n", sample);
}