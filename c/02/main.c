#include <stdio.h>

int main(void)
{
	int niveau_joueur = 1;
	printf("Choisir un level :");

	scanf("%d", &niveau_joueur);
	printf("le level est : %d\n", niveau_joueur);

	niveau_joueur++;

	printf("le level sera : %d\n", niveau_joueur);

	int age = 15;
	int quinze = -1;

	quinze = (age == 15) ? 1 : 0;

	printf("il a quinze ans ?  %d\n", quinze);


	return 0;
}