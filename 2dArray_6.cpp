#include<stdio.h>
int main()
{
	
int a[10][10],i,n1,n2,j,sum;
	printf("Enter Number of Rows : ");
	scanf("%d",&n1);
	printf("Enter Number of Colums : ");
	scanf("%d",&n2);
		
	printf("Enter Element in 2D Array a: \n");
	for(i=0;i<n1;i++)
	for(j=0;j<n2;j++)
	{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	}
	
	printf("Array a[]=\n");
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
      	{
		printf("%d  ",a[i][j]);
    	}
    	printf("\n");
    }
    
    for(j=0;j<n2;j++)   
	{ sum=0;
	for(i=0;i<n1;i++)
      	{
		sum=sum+a[i][j];
    	}
    	printf("Sum of %d colums :%d\n  ",j,sum);
    	printf("\n");
    }
    return 0;
}
