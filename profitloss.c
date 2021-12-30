#include<stdio.h>
void main()
{ 
    int cp,sp;
    printf ("enter two numbers");
    scanf("%d%d",&cp,&sp);
    if(cp<sp)
    {
	
    printf("profit");
    }
    else if(cp>sp)
    {
	 printf("loss");
    }
    else
    {
	 printf("zero");
    }
}
