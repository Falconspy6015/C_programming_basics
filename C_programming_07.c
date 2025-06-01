#include <stdio.h>

int main(){

// need to print sum , average and min

int a;

printf("enter 5 values \n");
scanf("%d",&a);
int min =a;
int sum =a;
for(int i =1; i<5;i++){

scanf("%d",&a);
sum = sum +a;
if (min>a){
min =a;}


}

int avg = sum/5;
printf (" the sum is %d , avg is %d and min is %d \n " , sum , avg , min);
}

//mistakes made: scanf forgot quotes again.
