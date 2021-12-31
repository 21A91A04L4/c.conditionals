#include<stdio.h>
void main()
{
	int m,p,c,cs;
	scanf("%d%d%d%d",&m,&p,&c,&cs);
	if(m<35)
	{
	printf("failed in maths");
    }
    if(p<35)
    {
    printf("failed in physics");
	}
	if(c<35)
	{
    printf("\nfailed in chemistry");
    }
    if(cs<35)
    {
    printf("\nfailed in computer science");
    }

     
}
