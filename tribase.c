#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000


int num_suiv(int x, int a){
int i;
for(i=1;i<a;i++){
	x=x/10;
}
x=x%10;
//
return x;
}

void triParComptage(int tab[],int n){
   // Initialisation des variables
   int i,j,tabComptage[n+1],tailleTab=999,x=0;

   for(i=0;i<=n;i++){
      tabComptage[i]=0;
   }

   for(i=0;i<=tailleTab;i++){
      tabComptage[tab[i]]++;
   }

   for(i=0;i<=n;i++){
      for(j=0;j<=tabComptage[i];j++){
         tab[x++]=i;
      }
  }
}

int main()
{
int S[N],c,i=0,n;

while(scanf("%d",&c)==1){
	S[i]=c;
	i++;
}
n=i;
triParComptage(S,1000);
for(i=0;i<n;i++)
	{
		printf("%d\n",S[i]);
	}
return 0;
}
