#include<stdio.h>
int st[1000][1000]={0};
void star(int x,int y,int n)
{
	if(n==1)
	{
		st[x][y]='*';
	}
	else
	{
		star(x,y,n/3);
		star(x,y+n/3,n/3);
		star(x,y+2*n/3,n/3);
		star(x+n/3,y,n/3);
		star(x+n/3,y+2*n/3,n/3);
		star(x+2*n/3,y,n/3);
		star(x+2*n/3,y+n/3,n/3);
		star(x+2*n/3,y+2*n/3,n/3);
	}
}
int main()
{
	
	int n,i,j;
	scanf("%d",&n);
	star(0,0,n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			
		}
		else
		{
			printf("\n");
		}
		
		for(j=0;j<n;j++)
		{
            if(st[i][j] == NULL){
                printf(" ");
            }
            else{
			    printf("%c",st[i][j]);
            }
		 } 
		
	}
	
}