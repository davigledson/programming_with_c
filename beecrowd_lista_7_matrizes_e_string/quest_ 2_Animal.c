//PROBLEMA: 1049 - Animal
#include <stdio.h>
#include <string.h>
 
int main() {
 
   char cat[50],catsub[50],subsub[50];
   
    scanf("%s",cat);
    scanf("%s",catsub);
    scanf("%s",subsub);
    
    if(strcmp(cat,"vertebrado") == 0){
        
        if(strcmp(catsub,"ave") == 0){
            if(strcmp(subsub,"carnivoro") == 0){
                printf("aguia\n");
            } else if(strcmp(subsub,"onivoro")==0){
                printf("pomba\n");
            }
        } else if(strcmp(catsub,"mamifero")==0){
                if(strcmp(subsub,"onivoro") == 0){
                printf("homem\n");
                } else if(strcmp(subsub,"herbivoro")==0){
                    printf("vaca\n");
                }
        }
        
    } else if(strcmp(cat,"invertebrado")==0){
        if(strcmp(catsub,"inseto") == 0){
            if(strcmp(subsub,"hematofago") == 0){
                printf("pulga\n");
            } else if(strcmp(subsub,"herbivoro")==0){
                printf("lagarta\n");
            }
        } else if(strcmp(catsub,"anelideo")==0){
             if(strcmp(subsub,"hematofago") == 0){
                printf("sanguessuga\n");
            } else if(strcmp(subsub,"onivoro")==0){
                printf("minhoca\n");
            }
        }
    }
    
 
    return 0;
}