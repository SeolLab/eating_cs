//�ٵ��� �� ��, ���� ��
#include <stdio.h>
void main() {
	int baduk[3][4] = { {1,0,2,0},{1,1,2,0},{2,1,0,1} };
	//0�� ����, 1�� ���� ��, 2�� �� ��
	int x, y;
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 4; x++) {
			printf("%d�� %d����", y + 1, x + 1);
			if (baduk[y][x] == 1)
				printf(" ���� ���� ���� �ֽ��ϴ�.\n");
			else if(baduk[y][x] == 2)
				printf(" �� ���� ���� �ֽ��ϴ�.\n");
			else
				printf("�� ���� ���� ���� �ʽ��ϴ�.\n");
		}
	}
}