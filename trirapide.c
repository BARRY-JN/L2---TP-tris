#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void permute(int t[],int a,int b)
{
int c;
c=t[a];
t[a]=t[b];
t[b]=c;
}

int partition(int t[], int g, int d)
    {
    int compt=g;
    int pivot=t[g];
    int i;

    for(i=g+1;i<=d;i++)
        {
        if(t[i]<pivot)
            {
            compt++;
            permute(t,compt,i);
            }
        }
    permute(t,compt,g);
    return(compt);
    }

void tri_rapide(int t[],int g,int d)
    {
    if(g<d)
        {
        int pivot=partition(t,g,d);
        tri_rapide(t,g,pivot-1);
        tri_rapide(t,pivot+1,d);
        }
    }

int main()
{
int c,S[1000000],i,n;
i=0;
n=1000000;

while(scanf("%d",&c)==1){
	S[i]=c;
	i++;
}

tri_rapide(S,0,n);

for(i=0;i<n;i++)
	{
		printf("%d\n",S[i]);
	}
return 0;

}
