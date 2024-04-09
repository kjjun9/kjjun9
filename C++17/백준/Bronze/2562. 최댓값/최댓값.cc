#include <stdio.h>
int main() {
	int a = 0, num[9], MAX;
	for (int i = 0; i < 9; i++) {
		scanf("%d",&num[i]);
		if (a < num[i]) {
			a = num[i];
			MAX = i;
		}
	}
	printf("%d\n%d", a, MAX+1);
}