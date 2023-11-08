#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	char arr1[] = "abcdef";
	char arr2[] = "abcder";
	const char* p1 = "abcdef";//复习，这样会让指针变成只读的
	const char* p2 = "abcdef";//如果const在*后面则是这个变量无法改变
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