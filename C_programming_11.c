#include <stdio.h>
#include <string.h>

int main(){

char str[50];
fgets(str,50,stdin);

int n = strlen(str);
if(str[n-1] =='\n'){
str[n-1] ='\0';
n--;

}
printf("length is %d\n\n",n);
fputs(str,stdout);
}
//learnings: fputs adds its own /n . and strlen counts spaces and enter key as well so we replaced /n by \0.

