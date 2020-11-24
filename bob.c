#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int nargs,char **args)
{
int i,n,c,x;
if(nargs<=2||nargs>3){
	n=100;
	x=100;
}else{
	n=atoi(args[1]);
	x=atoi(args[2]);
}
c=0;

srand(time(NULL));
for(i=0;i<n;i++)
	{
		c=rand()%x;
		printf("%d\n",c);
	}
return 0;
}
