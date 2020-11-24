#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int FilsG(int i)
{
return 2*i+1;
}

int FilsD(int i)
{
return 2*i+2;
}

void permute(int t[],int a,int b)
{
int c;
c=t[a];
t[a]=t[b];
t[b]=c;
}

void entasser(int i, int t[], int n)
{
int imax=i;
if(FilsG(i)<n && t[FilsG(i)]>t[imax])
{
	imax=FilsG(i);
}
if(FilsD(i)<n && t[FilsD(i)]>t[imax])
{
	imax=FilsD(i);
}
if(imax!=i)
{
	permute(t,i,imax);
	entasser(imax,t,n);
}
}

void constras(int t[],int n)
{
int i;
for(i=n/2-1; i>=0; i--)
{
	entasser(i,t,n);
}
}

void tritat(int t[], int n)
{
constras(t,n);
int i;
for(i=n-1; i>=1; i--)
{
	permute(t,0,i);
	entasser(0,t,i);
}
}	

int main()
{
int c,S[10000],i,n;
i=0;

while(scanf("%d",&c)==1){
	S[i]=c;
	i++;
}

n = i;

tritat(S,n);

for(i=0;i<n;i++)
	{
		printf("%d\n",S[i]);
	}
return 0;

}
