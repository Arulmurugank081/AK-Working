#include <stdio.h>
#include <iostream>
using namespace std;

int fib(int num)
{
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return fib(num-1) - fib(num-2);
}

int main(int argc, char **argv)
{
    std::cout<<fib(5);
	printf("hello world\n");
	return 0;
}
