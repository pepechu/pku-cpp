# include <stdio.h>
# include <stdlib.h>

int MyCompare (const void* elem1, const void* elem2) {
	unsigned int *p1, *p2;
	p1 = (unsigned int*) elem1;
	p2 = (unsigned int*) elem2;
	return ((*p1) % 10) - ((*p2) % 10); 
}

# define NUM 5

int main() {
	unsigned int an[NUM] = {4, 3, 67, 12, 1};
	qsort(an, NUM, sizeof(unsigned int), MyCompare);
	for (int num : an) {
		printf("%d ", num);
	}
	printf("\n");
	return 0;
}