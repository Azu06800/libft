#include <stdio.h>
#include <stdlib.h>

void rrab_rec(char *ab, int i, int mode) {
	char	tmp;


	if(ab[i] == '\0') {
		return;
	}

	if(mode == 1) {
		rrab_rec(ab, i+1, mode);
	}

	tmp = ab[i];
	ab[i] = ab[i-1];
	ab[i-1] = tmp;

	if(mode == 2) {
		rrab_rec(ab, i+1, mode);
	}

}

void	rrab(char *ab, int mode)
{
	rrab_rec(ab, 1, mode);
}

int main (void) {

	char *a = malloc(sizeof(char)*6);
	a[0] = 2;
	a[1] = 5;
	a[2] = 1;
	a[3] = 9;
	a[4] = 8;
	a[5] = '\0';


	for(int i=0;i<5;i++)
		printf("%d\n", a[i]) ;

	rrab(a, 2);
	printf("\n");

	for(int i=0;i<5;i++)
		printf("%d\n", a[i]) ;
}
