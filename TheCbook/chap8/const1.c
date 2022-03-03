#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	const int ci = 123;
	
	// Pointer to const
	const int *cpi;
	
	// Pointer to a non-const
	int *ncpi;

	cpi = &ci;
	ncpi = &i;

	printf("Ci has value %i at address %p, cpi has value %i"
	"and points at address %p \n", ci, &ci, *cpi, cpi);

	// Needs a cast because it is usually a  big mistake,
	// see what it permits below.

	ncpi = (int *)cpi;
	
	// Now to get undefined behavior
	// modify a const through a pointer
	*ncpi = 42;

	printf("ci has value %i at address %p, cpi has value %i"
	"and points at address %p. \n", ci, &ci, *cpi, cpi);

	exit(EXIT_SUCCESS);
}
