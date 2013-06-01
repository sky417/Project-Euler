#include <stdio.h>

int main() {

	int nums[2] = {0, 0};
	long int result = 0;

	while(1) {

		int newnum = nums[0] + nums[1];
		printf("%d\t", newnum);
		if (newnum > 4000000) break;

		result += newnum;

		nums[0] = nums[1];
		nums[1] = newnum;
	}

	printf("%ld\n", result);

}