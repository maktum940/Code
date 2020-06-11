#include<stdio.h>
#include<string.h>
int main()
{
	int t, a, b, i, res;
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		char input[1000];
		scanf("%s", input);
		a = strlen(input);
		a = a-1;
		
		if(input[0] == '0'){
			res = 0;
		}
		else if(input[0] == '1'){
			res = 1;
		}
		else if(input[0] == '2'){
			res = 2;
		}
		else if(input[0] == '3'){
			res = 3;
		}
		else if(input[0] == '4'){
			res = 4;
		}
		else if(input[0] == '5'){
			res = 5;
		}
		else if(input[0] == '6'){
			res = 6;
		}
		else if(input[0] == '7'){
			res = 7;
		}
		else if(input[0] == '8'){
			res = 8;
		}
		else if(input[0] == '9'){
			res = 9;
		}
		
		
		
		if(input[a] == '0'){
			res = res+0;
		}
		else if(input[a] == '1'){
			res = res+1;
		}
		else if(input[a] == '2'){
			res = res+2;
		}
		else if(input[a] == '3'){
			res = res+3;
		}
		else if(input[a] == '4'){
			res = res+4;
		}
		else if(input[a] == '5'){
			res = res+5;
		}
		else if(input[a] == '6'){
			res = res+6;
		}
		else if(input[a] == '7'){
			res = res+7;
		}
		else if(input[a] == '8'){
			res = res+8;
		}
		else if(input[a] == '9'){
			res = res+9;
		}
		
		printf("Sum = %d\n", res);
	}
	return 0;
}
