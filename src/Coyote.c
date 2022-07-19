#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

void *coyote_function();
void *roadRunner_function();
int roadRunnerth, coyoteth;

int hp = 100;
int counter = 0;
int search = 50, search_lim = 50;// searching algorithm variables

bool compare(int th1, int th2){

	srand(time(NULL));
	
	int fark = th2 - th1;
	int random = rand() % 5 + 1;
	hp = hp - random;
	
	if(search_lim != 1)
		search_lim = search_lim/2;


	if(fark > 0) {
		printf("Remaining HP is %d\n", hp);

		search = search + search_lim;
		return 1;
	}
	else if(fark < 0){
		printf ("Remaining HP is %d\n",hp);

		search = search - search_lim;
		return 1;
	}

	else {
		printf("\n--- GOOD GAME ---\n\n");
		printf("Coyote caught RoadRunner in %d tries\n\n", counter);
		return 0;
	}

}

int main(){

	pthread_t coyote, roadRunner;
	
	pthread_create(&roadRunner, NULL, &roadRunner_function, NULL);
	pthread_join(roadRunner, NULL);

	while(hp > 0) {

		pthread_create(&coyote, NULL, &coyote_function, NULL);
		sleep(1);
		pthread_join(coyote, NULL);

		if(!compare(coyoteth, roadRunnerth))
			break;

		printf("----------------\n");
	}
}

void *coyote_function()
{
	//srand(time(NULL));

	coyoteth = search;
	counter ++;

	printf("Coyote estimates : %d\n", coyoteth);
	pthread_exit(0);
}

void *roadRunner_function(){
	
	srand(time(NULL));

	int value2 = rand() % 10 + 1;
	roadRunnerth = value2;

	printf("\nRoadRunner's Prediction : %d\n\n", roadRunnerth);

	pthread_exit(0);
}

