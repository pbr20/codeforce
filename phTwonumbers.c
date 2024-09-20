#include<stdio.h>
#include<math.h>

int main(){

int A,B,C,D,E;
scanf("%d%d",&A,&B);

C= round((double)A/B);
D= floor((double)A/B);
E= ceil((double)A/B);

printf("floor %d / %d = %d\n",A,B,D);
printf("ceil %d / %d = %d\n",A,B,E);
printf("round %d / %d = %d\n",A,B,C);


    return 0;
}