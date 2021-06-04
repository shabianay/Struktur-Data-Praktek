//SHABIAN ARSYL YONANTA
//20051397032
//MI_B_2020
#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("SHABIAN ARSYL YONANTA\n");
 printf("20051397032\n");
 printf("MI_B_2020\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
//SHABIAN ARSYL YONANTA
//20051397032
//MI_B_2020
