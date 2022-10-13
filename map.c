#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void
map(int x, int y)
{
	int i;
	int j = x * y + 1;
	int k;

	srand(time(NULL));
	k = rand() % 4;
	
	switch (k) {
	case 0:
		printf("\e[32m*");
		break;
	case 1:
		printf("\e[34m~");
		break;
	case 2:
		printf("\e[37m#");
		break;
	case 3:
		printf("\e[93m@");
		break;
	}

	for (i = 1; i < j; i++) {
		k = rand() % 4;

		if (k == 3) {
			printf("\e[34m~");
		} else {
			switch (k) {
			case 1:
				printf("\e[32m*");
				break;
			case 2:
				printf("\e[37m#");
				break;
			case 3:
				printf("\e[93m@");
				break;
			}
		}

		if (i % x == 0)
			printf("\e[0m\n");
	}
}

int
main(void)
{
	map(64, 64);
	return 0;
}
