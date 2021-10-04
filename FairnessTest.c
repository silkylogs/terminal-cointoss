#include "cointoss.h"

int main()
{
	long long unsigned int headCount = 0;
	long long unsigned int tossCount = 0;
	float percent = 0.0;

	while(1)
	{
		//i dont think it matters wether HEAD was actually
		//tossed, because the probability would be the same
		if(1 == TossCoin(1))
		{
			headCount++;
		}
		tossCount++;
		percent = (float)(headCount) / (float)(tossCount) * 100.0;

		printf("Cumulative chance of head: %.3f%% %llu/%llu\r", percent, headCount, tossCount);
	}

	return 0;
}
