#include<stdio.h>
#include<string.h>

typedef struct players{
    int num;
    char name[10];
}players;


int main(){
    struct players users[10];
    int len;
    for(int i=1; i<=5; i++){
        do{
            users[i].num = i;
            printf("Input player %d name [ must be 3 or 8 character ]: ", users[i].num);
            scanf("%[^\n]", users[i].name); getchar();
            len = strlen(users[i].name);
        }while(len <= 3 || len >= 8);
    }

    for(int i=1; i<=5; i++){
        printf("%d. %s\n", users[i].num, users[i].name);
    } 

    return 0;
}