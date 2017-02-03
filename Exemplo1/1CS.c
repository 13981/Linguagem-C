#include <stdio.h>

void copiarString(char *copiar, char *colar){
	
	while(*copiar != '\0'){
		*colar = *copiar;
		++copiar;
		++colar;
	}
	*colar = '\0';
	
	
}
	
	int main(void){
	
	
	void copiarString(char *copiar, char *colar);
	
	char string1[20];
	int i = 1;
	
	printf("\nEscreva uma frase : ");
	//puts("\nEscreva uma frase : ");
	
	gets(string1);
    //fgets(string1, 100, stdin);
   
	char string2[20];
	
	copiarString(string1, string2);
	printf("\nA frase escrita foi: %s", string2);
	

	FILE *file = fopen("arquivo4.txt", "w");

   
//    if (file == NULL)									/*ponteiro nulo*/
// {
//    printf("ERRO! O arquivo não foi aberto!\n");
// }
//   else
//   {
//     printf("\nO arquivo foi guardado com sucesso!");
//   }
    
	while(string2[i] != '\0') {
	fputc(string2[i], file);
	++i;}
	
    fclose(file);        
          

	
	return 0;
}


