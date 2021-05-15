//바둑판 흰 돌, 검은 돌
#include <stdio.h>
void main() {
	int baduk[12] = { 1,0,2,0,1,1,2,0,2,1,0,1 };
	//0은 없음, 1은 검은 돌, 2는 흰 돌
	int i, x, y;
	for (i = 0; i < 12; i++) {
		x = i % 4 + 1;
		y = i / 4 + 1;
		printf("%d행 %d열에", y, x);
		if (baduk[i] == 1)
			printf(" 검은 돌이 놓여 있습니다.\n");
		else if (baduk[i] == 2)
			printf(" 흰 돌이 놓여 있습니다.\n");
		else
			printf("는 돌이 놓여 있지 않습니다.\n");
	}
}