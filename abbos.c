#include <stdio.h>

int main(){

	int n,b=1;

	scanf("%d",& n);

	while(n>0){
		printf("%d ",n);

		if(n>1){
			printf("* ");
		}
		b*=n;
	n--;
	}
	printf("=%d",b);


	return 0;
}
