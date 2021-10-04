#include "cointoss.h"

int TossCoin(int numericalOutput)
{
	//seeding the random number generator
	srand(time(0));
	int *coin = NULL;

	//allocating enough bytes to store data for the coin
	coin = (int*)(malloc(sizeof(int)));

	*coin = (int)(rand() % 2);

	if(numericalOutput > 0)
	{
		return *coin;
	}

	//visuals
	else if(numericalOutput <= 0)
	{
		if(*coin == 0)
		{
			printf("Heads\n");
		}
		else if(*coin == 1)
		{
			printf("Tails\n");
		}
		else
		{
			printf("The coin somehow landed on its side\n");
		}
	}
	else
	{
		printf("How is this scenario even possible\n");
		printf("*Ahem* Just imgaine that the coin dissapeared, or something\n");
	}
	
	//ensuring that this function wont cause a memory leak
	//one might ask, why bother with memory leaks on such a small progam?
	free(coin);

	return -1;
}


