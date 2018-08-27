#include <cstdio>

int p[5] = { 1, 1, 1, 1, 1 }, i1, t;
int main() {
	for (int i = 0; i <= 4; i++) {
		for (int j = i+1; j >= 1; j--) p[i] *= j;
	}
	while (scanf_s("%d", &i1) && (i1 != 0)) {
		for (int i = 0; i1 != 0; i++) {
			t += i1 % 10 * p[i];
			i1 /= 10;
		}
		printf("%d\n", t);
		t = 0;
	}
	return 0;
}