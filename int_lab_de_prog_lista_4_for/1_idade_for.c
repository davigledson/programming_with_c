#include <stdio.h>

int main(){
 int idade,nE=0,eO=0,eF=0,i;

for(int i=1;i<=10;i++){
 scanf("%d",&idade);
    if(idade <16){
    	printf("Nao eleitor:\n");
        nE++;
    } else if(idade >18 && idade<=65){
    	printf("eleitor Obrigatorio\n");
        eO++;
    } else if(idade >=16 && idade <=18 || idade > 65){
    	printf("Eleitor facultativo:\n");
        eF++;
    }
}

printf("Nao eleitor: %d\n",nE);
printf("eleitor Obrigatorio: %d\n",eO);
printf("Eleitor facultativo: %d\n",eF);
}