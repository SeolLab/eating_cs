//바둑판 흰 돌, 검은 돌
#include <stdio.h>
void main() {
	int baduk[3][4] = { {1,0,2,0},{1,1,2,0},{2,1,0,1} };
	//0은 없음, 1은 검은 돌, 2는 흰 돌
	int x, y;
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 4; x++) {
			printf("%d행 %d열에", y + 1, x + 1);
			if (baduk[y][x] == 1)
				printf(" 검은 돌이 놓여 있습니다.\n");
			else if(baduk[y][x] == 2)
				printf(" 흰 돌이 놓여 있습니다.\n");
			else
				printf("는 돌이 놓여 있지 않습니다.\n");
		}
	}
}