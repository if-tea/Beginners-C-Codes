#include<stdio.h>
#include<math.h>

int main() {

	int start, end, f, i, j, count;

	printf("\nInput lower-bound: ");
	scanf("%d", &start);
	printf("\nInput upper-bound: ");
	scanf(" %d", &end);

	printf("\nPrime numbers between %d and %d are:\n\n", start, end);

	count = 0;
	for (i = start;i <= end;i++) {


		f = 1;
		for (j = 2; j <= i / 2; j++) {

			if (i % j == 0) {

				f = 0;
				break;
			}
		}

		if (f == 1 && i > 1) {

			printf("%8d", i);
			count++;

		}

	}

	printf("\n\nTotal Primes = %d", count);
	return 0;

}
