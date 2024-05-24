#include <stdio.h>
 #define true 1
int main() {
 
   int opc=1;
   int i=0,g=0,grenais=0,contadori=0,contadorg=0,contadore=0;
   
   while(1){ 
       
       scanf("%d %d",&i,&g);
       if(i>g) contadori++;
       if(i<g) contadorg++;
       if(i==g) contadore++; 
       grenais++;
       
       
        printf("Novo grenal (1-sim 2-nao)\n");
       scanf("%d",&opc);
       if(opc == 2){
           
           printf("%d grenais\n",grenais);
           printf("Inter:%d\n",contadori);
           printf("Gremio:%d\n",contadorg);
            printf("Empates:%d\n",contadore);
            
            if(contadori >contadorg){
                printf("Inter venceu mais\n");
            } else if(contadori < contadorg){
                printf("Gremio venceu mais\n");
            }
            break;
       } if(opc ==1){
           continue;
       }
      
      
     
       
       
   }
   
 
    return 0;
}