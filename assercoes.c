#include <stdio.h>
#include <assert.h>
int dados(int kg,int *gti);

int main(void) {
	int a = 4;
	int *gti = &a;

	
	dados(40,gti);
	puts("Pode continuar");
	return 0;
}
int dados(int kg,int *gti)
{

	assert(gti != (NULL));
	assert(kg >= 30);

	return 1;

}
