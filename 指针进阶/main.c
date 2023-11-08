#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	char arr1[] = "abcdef";
	char arr2[] = "abcder";
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (arr1 == arr2) {
		printf("1");
	}
	else {
		printf("2");
	}
	if (p1 == p2) {
		printf("3");
	}
	else {
		printf("4");
	}
	return 0;
}