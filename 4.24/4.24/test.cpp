#include <stdio.h>
#include <iostream>
#include "test.h"
using namespace std;
//
//int main()
//{
//	int ret = 0;
//	ret = Add(2, 3);
//	return 0;
//}
void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	f(nullptr);
	return 0;
}


