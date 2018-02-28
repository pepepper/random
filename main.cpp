#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
start:char matrix[13]={"マトリックス"};
	char result[13]={NULL};
	char ret[128];
srand((unsigned) time(NULL));
for(int i=0;i<12;i=i+2){
	int x=rand()%6;
result[i]=matrix[x*2];
result[i+1]=matrix[x*2+1];
}
result[12]=NULL;
printf("%s",result);
cont:printf("\nまだ生成する? (y/n) ");
scanf("%s",ret);
if(strstr(ret,"y"))
goto start;
else if(strstr(ret,"n"))
return 0;
else
goto cont;
}