#include <stdio.h>

int main(void){
	int n, t, p;
	scanf("%d %d %d", &n, &t, &p);

	int nums[n];
	int count = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &nums[i]);
		if(nums[i] >= t)
			count++;
	}

	if(count >= p){
		printf("0\n");
		return (0);
	}

	int days = 0;
	while(count < p){
		days++;
		count = 0;
		for(int i = 0; i < n; i++){
			nums[i]++;
			if(nums[i] >= t)
				count++;
		}
	}

	printf("%d\n", days);

	return (0);
}
