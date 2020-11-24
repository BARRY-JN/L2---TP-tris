#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void permute(int S[], int a, int b){
int x;
x=S[a];
S[a]=S[b];
S[b]=x;
}

void tri_a_bulle(int S[]){
int i,j,n=100;
for(i=n-1;i>=1;i--){
	for(j=0;j<=i-1;j++){
		if(S[j]>S[j+1]){
			permute(S,j,j+1);
		}
	}
}
}

int main()
{
int i=0,n,c,S[1000];
c=0;
n=100;
/*srand(time(0));
for(i=0;i<n;i++)
	{
		//c=rand()%100;
		
		S[i]=c;
	}
*/
while(scanf("%d",&c)==1){
	S[i]=c;
	i++;
}
tri_a_bulle(S);
for(i=0;i<n;i++)
	{
		printf("%d\n",S[i]);
	}
return 0;
}
