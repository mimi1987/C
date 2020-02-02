/*
 * Program prints out the order details like delivery address, thick dough and ingredients.
 * -t is a on/off switch which defines the dough
 * -d specifies the deliver address and needs it as an option value.
 * Author: Michael Migsch
 * Year: 2020
 * Version: 0.10;
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;

	while ((ch = getopt(argc, argv, "d:t")) != EOF)
		switch (ch) {
			case 'd':
				delivery = optarg;
				break;
			case 't':
				thick = 1;
				break;
			default:
				fprintf(stderr, "Unknown argument '%s'\n", optarg);
				return 1;
		}
	
	argc -= optind;
	argv += optind;
	
	if (thick)
		puts("Thick crust.");

	if (delivery[0])
		printf("To be delivered %s.\n", delivery);
	
	puts("Ingredients:");
	
	for (count=0; count < argc; count++)
		puts(argv[count]);

	return 0;
}
