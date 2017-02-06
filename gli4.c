#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char refeicao[5]; // str2[5], str3[5];
	int i, res;	
	float div, final, total ;
    char str1[5]; 
	
	
	printf("Qual e a refeicao: ");
	//scanf ("%s", refeicao);
	gets(refeicao);
	
	printf("\nInsira o valor da Glicemia atual: ");
	scanf("%d", &i);
	
	if (i <= 150){
	    res = 0;
}
	   else if (i > 150 && i <= 200){
	   	res = 1;
	   }
	   
	   else if (i > 200 && i <= 250){
	   	res = 2;
	   }
	   
	   else if (i > 250 && i <= 300){
	   	res = 3;
	   }
	   
	   else if (i > 300 && i <= 350){
	   	res = 4;
	   }
	   
	   else if (i > 350 && i <= 400){
	   	res = 5;
	   }
	   
	   else if (i > 450 && i <= 500){
	   	res = 6;
	   }
	   
	   else if (i > 500 && i <= 550){
	   	res = 7;
	   }
	   
	   if (i >= 550){
	   	res = 8;
	   	printf("Glicemia muito alta contacte o seu medico\n");
	   }
	   
    //printf("Unidades: %d\n", res);  

   

    printf("Insira o valor de hidratos de carbono: ");
    scanf("%f", &div);
    final = div / 12;
 
 	//printf("Unidades: %.2f\n", final);
 		
 	
 	total = final + res;
 	
 	//printf("Unidades a aplicar : %.2f U", total);
	 
	//sprintf (str2, "%.d", res);
	//printf("\nU pela glicemia: %s\n", str2);
	
 	//sprintf (str3, "%.2f", final);
	//printf("\nU pelos hidratos: %s\n", str3);
	
    sprintf (str1, "%.2f", total);
	printf("\nTotal de unidades a aplicar: %s\n", str1);
	
	
	//strcat (str1, str2);
	
	
	
	return 0;
}
