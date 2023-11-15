#include <stdio.h>

int getDigitCount(int num) {
	if (num == 0) {
		return 1;
	}
	int count = 0;
	while (num > 0) {
		count++;
		num = num / 10;
	}
	return count;
}

int getMaxDigit(int num) {
	int maxDigit = -1;
	while (num > 0) {
		int digit = num % 10;
		if (digit > maxDigit) {
			maxDigit = digit;
		}
		num = num / 10;
	}
	return maxDigit;
}

int getMinDigit(int num) {
	int minDigit = 10;
	while (num > 0) {
		int digit = num % 10;
		if (digit < minDigit) {
			minDigit = digit;
		}
		num = num / 10;
	}
	return minDigit;
}

int main() {
	int n;
	scanf("%d", &n);
	if(n>=0&&n<=100000000) {
		int digitCount = getDigitCount(n);
		int maxDigit = getMaxDigit(n);
		int minDigit = getMinDigit(n);

		printf("%d %d %d", digitCount, maxDigit, minDigit);
	
	} else
		printf("err");
	return 0;
}
