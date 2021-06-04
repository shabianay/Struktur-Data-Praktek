//SHABIAN ARSYL YONANTA
//20051397032
//MI_B_2020
#include <stdio.h>
#include <stdlib.h>
int prima(int n, int i){
 if(n%i==0)
 return 0;
 if(i==2)
 return 1;
 prima(n, i-1);
}
int main()
{
 int i,n, output;
 printf("SHABIAN ARSYL YONANTA\n");
 printf("20051397032\n");
 printf("MI_B_2020\n");
 printf("Input bilangan : ");
scanf("%d", &n);
 i=n-1;
 if(n!=1){
 if(prima(n, i) || n==2){
 puts("Bilangan tersebut prima");
 }
 else{
 puts("Bilangan tersebut bukan prima");
 }
 }
 else{
 puts("Bilangan tersebut bukan prima");
 }
 return 0;
}
//SHABIAN ARSYL YONANTA
//20051397032
//MI_B_2020
