#include<stdio.h>
main()
{
	int n,evensum,i,oddsum;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		evensum=evensum+i;
		else
		oddsum=oddsum+i;
		i++;
	}
	printf("\nevensum=%d",evensum);
	printf("\noddsum=%d",oddsum);
	
	printf("\ndifference=-%d",evensum-oddsum);
}
