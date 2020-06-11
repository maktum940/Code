#include <stdio.h>

int main()
{
	int t, a, b, c;
	scanf("%d", &t);
	int x = 0;
	int y = t;
	
	while(scanf("%d %d %d", &a, &b, &c) == 3){
		
		if(a >= 0 && b >= 0 && c >= 0 && a <= 20 && b <= 20 && c <= 20){
			printf("%d\n", a+b);
			x++;
		}
		if(x == y){
			break;
		}
	}
	return 0;
}
