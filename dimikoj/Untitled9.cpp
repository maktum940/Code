#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--){
		int a;
		scanf("%d", &a);
		if(a == 0){
			printf("even\n");
		}
		else if(a%2 == 0){
			printf("even\n");
		}
		else{
			printf("odd\n");
		}
	}
	return 0;
}
