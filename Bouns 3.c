#include<stdio.h>

int main()
{
int x =0,ctr=0;
scanf("%d",&x);
while(x!=0)
{
 if(x & 1 ==1) ctr++;
 x = x >> 1 ;

}

printf("%d",ctr);

}
