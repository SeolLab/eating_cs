//�ٵ��� �� ��, ���� ��
#include <stdio.h>
void main() {
	int baduk[12] = { 1,0,2,0,1,1,2,0,2,1,0,1 };
	//0�� ����, 1�� ���� ��, 2�� �� ��
	int i, x, y;
	for (i = 0; i < 12; i++) {
		x = i % 4 + 1;
		y = i / 4 + 1;
		printf("%d�� %d����", y, x);
		if (baduk[i] == 1)
			printf(" ���� ���� ���� �ֽ��ϴ�.\n");
		else if (baduk[i] == 2)
			printf(" �� ���� ���� �ֽ��ϴ�.\n");
		else
			printf("�� ���� ���� ���� �ʽ��ϴ�.\n");
	}
}