#include <stdio.h>
int main(){
float an1, an2, an3;

printf("Angulo 1:\n");
scanf("%f", &an1);

printf("Angulo 2:\n");
scanf("%f", &an2);

printf("Angulo 3:\n");
scanf("%f", &an3);



if( an1 == 90 || an2 == 90 || an3 == 90 ){
	printf("Triangulo Retangulo!\n");
} else if(an1 > 90 || an2 > 90 || an3 > 90 ){
	printf("Triangulo Ostusangulo! \n");
	
} else if(an1 < 90 && an2 < 90 && an3 < 90){
	printf("Triangulo Acutangulo!\n");
	
}

	
}
