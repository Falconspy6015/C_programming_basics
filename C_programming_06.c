#include <stdio.h>

int main(){


int a;
printf("enter 5 int \n");

scanf("%d",&a);
int max =a;

for (int i =1; i<5;i++){

scanf("%d",&a);
if (max<a){
max=a;
}

}
printf("the max is %d\n",max);


}

//learnings: need to initialise max first u cant just define it in the loop as it will have garbage value thats why u read the first number seperatly.

