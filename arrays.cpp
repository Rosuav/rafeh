#include <stdio.h>
#include <string>

void show_elements(int array[], int num_elements)
{
	for (int i=0;i<num_elements;++i) printf("%d ",array[i]);
	printf("\n");
}

struct by_lightning
{
	int voltage;
	int amperage;
};

struct intpair
{
	int x;
	int y;
	int operator <(intpair &other);
};

int intpair::operator <(intpair &other)
{
	if (x < other.x) return 1;
	if (x > other.x) return 0;
	return (y < other.y);
}

int main()
{
	printf("Hello, world!\n");
	int array[20];
	for (int i=0;i<20;++i)   //   for i in range(20)
		array[i] = i * (1<<28);
	show_elements(array,20);
	printf("The sixth element of the array is %d\n", array[5]);
	printf("Times two is %d\n", array[5] * 2);
	printf("Times four is %d\n", array[5] * 4);
	double trouble = 3.141592;
	printf("Trouble! Rounded the wrong way. %f\n",trouble);
	by_lightning foo;
	foo.voltage = 240; foo.amperage = 10;
	printf("I have felt %d volts at %d amps across my finger.\n", foo.voltage, foo.amperage);
	intpair q = {1,2};
	intpair w = {1,3};
	intpair e = {0,2};
	intpair r = {2,4};
	#define cmp(a,b) if (a < b) printf(#a " < " #b "\n"); if (b < a) printf(#b " < " #a "\n")
	cmp(q,w); cmp(q,e); cmp(q,r);
	cmp(w,e); cmp(w,r);
	cmp(e,r);
	std::string asdf = "asdf";
	std::string qwer = "qwer";
	if (asdf < qwer) printf("asdf < qwer\n");
}
