#include <stdio.h>

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
}
