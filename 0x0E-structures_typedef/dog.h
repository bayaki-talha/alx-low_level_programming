#include <stdio>

struct dog 
{
	char name;
	float age;
	char *owner;
};
int main(void)
{
	struct dog myDog;
	myDog.name = "aseel";
	myDog.age = 2;
	myDog.owner = "bayaki";
	return (0);
}
