#include <stdio.h>

int main()
{
    char str[10];
    while(scanf("%s", str) != EOF){
        if(str[0] == 'Hajj'){
            printf("Hajj-e-Akbar\n");
        }
        else if(str[0] == 'Umrah'){
            printf("Hajj-e-Asghar\n");
        }
        else if(str[0] == '*'){
            break;
        }
    }
    return 0;
}
