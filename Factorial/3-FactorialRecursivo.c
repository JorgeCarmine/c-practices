#include <stdio.h>


int fact(int n){
	if (n < 0){
		return 0;
	}else if(n > 1){
		return n * fact(n - 1);
	}
}

int main(){
	int n;
	printf("Dame un numero\n");
	scanf("%i", &n);
	printf("En numero es: %i\n", fact(n));
} 