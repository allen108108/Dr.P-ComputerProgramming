#include <stdio.h>

int main(void) {
	int h,w,d;
	int area, vol;
	scanf("%d", &h);
	scanf("%d", &w);
	scanf("%d", &d);
	
	area = (h * w + h * d + w * d) * 2;
	vol = h * w * d;
	
	printf("%d\n", area);
	printf("%d\n", vol);
	
	return 0;
}
