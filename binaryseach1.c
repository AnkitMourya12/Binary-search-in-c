#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],lef,ryt,mid,i,j,n,val;
	printf("enter the array size:");
	scanf("%d",&n);
	lef=1;
	ryt=n;
	mid=(lef+ryt)/2;
	printf("enter the element:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\n");
	printf("enter the value for serching");
	
	scanf("%d",&val);
	
		while(lef<=ryt)
		{
			if(val>arr[mid])
			{
				lef=mid+1;
				
			}
			else
			if(val<arr[mid])
			ryt=mid-1;
			
			else
		{
				printf("found at loction no=%d",mid+1);
			break;
			}
			mid=(lef+ryt)/2;
		}
			if(lef>ryt)
			printf("no:is not found");
			getch();
			
	   
	             
		}
	

