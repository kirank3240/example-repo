#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long num[4] = {1170723404, -836590, 749221872, 600110014};
	int res[4] = {0};
	int out[4] = {-1, -1, -1, -1};
	int i, j;
	int size = sizeof(num)/sizeof(num[0]);

	for (j = 0; j < 32; j++) {
		for (i = 0; i < size; i++) {
			if (num[i] != 0) {
				res[i] = 1;
			} else {
				res[i] = 0;
			}
		}
		for (i = 0; i < size; i++) {
			out[i] = out[i] + res[i];
		}
		for (i = 0; i < size; i++) {
			num[i] = num[i] >> 1;
		}
	}

	for (j = 0; j < size; j++) {
		printf("%d\n", out[j]);
	}

	return 0;
}


