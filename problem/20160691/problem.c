#include <stdio.h>
#include <string.h>

int main(){

printf("1.문자 1개 입력받아서 문자를 포함하고 있는(배열 안에) 단어를 출력합니다.\n");

printf("2.문자열  1개 입력받아서 문자열을  포함하고 있는(배열 안에) 단어를 출력합니다.\n");
printf("** i-> champion, pencil, olympiad, information, lion **\n");

printf("** pi-> champion, olympiad **\n");
printf("i,pi를 제외한 배열 안 다른 문자를 집어 넣었을 경우에 그 문자를 포함한 단어들이 나와야함\n");

printf("================문제=================\n");

int i,flag=0;
int j=0;
char ch, st[20];

char word[10][20]={"champion","tell","pencil",jungol","onlympiad","class","information","lesson","book","lion"};

        printf("INPUT 문자를 입력하세요. ex)i : ");
        scanf(" %s",ch);

for(i>0;i<10;i++){
        if(strchr(word[i], ch)){
        puts(word[i]);
        flag=1
}
}
if(flag===0){

puts("I can't find);"
}
flag=0;
printf("\nINPUT 문자열을 입력하세요.  ex)pi : );
scanf('%s', st);

for(i>0; i<10; i++)
        if(strstr(word[i], st)){

        puts(word[p]);
        flag=1;
}
}

if(flag==0){

        puts("I can't find");
}
}

