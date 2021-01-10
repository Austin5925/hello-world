#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[100]={0};
		int i,j,temp,m,s=0;
		scanf("%d",&m);
		if(m>=1&&m<=100)
		{
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<m-1;i++)
		{
			for(j=0;j<(m-1)-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(j=0;j<m;j++)
		{
			if(a[j+1]>a[j])
			{
				printf("%d\n",a[j+1]);
				s=1;
				break;
			}
		}
		if(s==0)
		printf("ERROR\n");
		
	    }
	}
	return 0;
}

