#include <stdio.h>

void go_south_east(int *lon, int *lat) {
	*lon = *lon + 1;
	*lat = *lat - 1;
}

int main() {
	int longitude = 100;
	int latitude = 50;
	
	go_south_east(&longitude, &latitude);

	printf("You are here, longitude: %i and latitude: %i\n", longitude, latitude);
	
	return 0;
}
