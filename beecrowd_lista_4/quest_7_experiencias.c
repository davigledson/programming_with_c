#include <stdio.h>
 
int main() {
 
  char cobaia;
  int quantCobaia=0,Ntestes,totalC = 0, totalR =0, totalS = 0,total=0;
  scanf("%d",&Ntestes);
  for(int c =0;c<Ntestes;c++){

    scanf("%d %c",&quantCobaia,&cobaia);  
      
    fflush(stdin);
       
     
      if(cobaia == 'C'){
      totalC+=quantCobaia;
      }
      else if(cobaia == 'R'){
          
        totalR+=quantCobaia;
      }
      else if(cobaia == 'S'){
          
         totalS+=quantCobaia;
      }
      total +=quantCobaia;
      
      
  }
 
    int Pcoelhos = (totalC * 100) / total;
    int Pratos = (totalR * 100) / total;
    int Psapos = (totalS * 100) / total;
  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",totalC);
  printf("Total de ratos: %d\n",totalR);
  printf("Total de sapos: %d\n",totalS);
  printf("Percentual de coelhos: %.2f %%\n", Pcoelhos);
  printf("Percentual de ratos: %.2f %%\n",Pratos);
  printf("Percentual de sapos: %.2f %%\n",Psapos);
 
    return 0;
}