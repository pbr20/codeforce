#include<stdio.h>

int main (){

long long int N;
long long int A =0;

scanf("%lld",&N);

//for(long long int i=1; i<=N; i++){    //long long int do overflow on loop also it can cause time limit exceed
//   A = A + i;
// }

A = ((N+1)*N)/2;  //in case of long long int try to find formula instead of loop if possible

printf("%lld\n",A);

    return 0;
}