#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "event-emitter.h"
#include <unistd.h>



void eventToFire(void *a){
	printf("\n\n\n\n\n\nEl evento ha sido lanzado con %p\n\n\n\n\n\n\n", (char *) a);
}

void deleteCenter(void *a){
	removeCenter((char *)a);
}

int main (void) {
	char nombre[100];
	int i = 0;
	int a,b,c,d,e;
	for(; i <5; i++){
			scanf("%100s", nombre);
			newCenter(nombre);
	};

	printf("\nOBSERVE CENTER FROM CENTER\n");
	observeCenterFromCenter("A", "B", "hola");
	observeCenterFromCenter("A", "B", "hola");
	observeCenterFromCenter("A", "B", "hola");
	observeCenterFromCenter("A", "B", "hola");
	observeCenterFromCenter("A", "B", "hola");
	observeCenterFromCenter("A", "B", "hola");
	observeCenterFromCenter("A", "B", "chao");
	observeCenterFromCenter("A", "B", "papita");
	observeCenterFromCenter("A", "B", "sd");
	observeCenterFromCenter("A", "B", "holsda");
	observeCenterFromCenter("A", "D", "hoala");
	observeCenterFromCenter("A", "C", "chao");
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient(NULL, &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &i, NULL, "hola", eventToFire);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("A", &a, &c, "borrate", deleteCenter);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	observeCenterFromClient("B", &b, &c, "hola", eventToFire);
	observeCenterFromClient("C", &a, NULL, "hola", eventToFire);
	observeCenterFromClient("C", &a, &c, "hola", eventToFire);
	observeCenterFromCenter("C", "A", "hola");
	observeCenterFromCenter("C", "A", "borrate");
	post("C", "hola", &c, (void *)"CENTER");
	postDelayed("A", "borrate", &c, (void *)"C", 6000);
	imprimirCentros();
	printf("\n\n\n\n\n\n");
	removeAllObservers(&e);
	removeObservers("A", &b);
	removeObservers("A", &a);
	removeObservers("A", &c);
	removeObserver("A", &i, "hola");
	removeObserver("A", &a, "hola");
	imprimirCentros();
	observeCenterFromClient("A", &b, &c, "hola", eventToFire);
	// observeCenterFromClient("A", &b, NULL, "hola", eventToFire);
	// observeCenterFromClient("B", &b, &c, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("C", &a, &b, "hola", eventToFire);
	observeCenterFromClient("D", &b, &c, "hola", eventToFire);
	imprimirCentros();
	removeObserverFromCenter("A", "B", "hola");
	removeObserverFromCenter("A", "C", "hola");
	removeCenter("A");
	removeObserversFromCenter("A", "B");
	printf("\n\n\n\n\n\n remove all observers de b %p \n\n", &b);
	removeAllObservers(&b);
	//imprimirCentros();
	sleep(7);
	//imprimirCentros();
	
	return 0;
}