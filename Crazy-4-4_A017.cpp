/*
isosceles righttriangle
isosceles triangle
not a triangle
regular triangle
rectangular triangle
obtuse triangle
acute triangle
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	int tmp;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
		{tmp = a; a = b; b = tmp;}
	if (b > c)
		{tmp = b; b = c; c = tmp;}
	if (a > c)
		{tmp = c; c = a; a = tmp;}
	if (a > b)
		{tmp = a; a = b; b = tmp;}

	if (a + b <= c)
		printf("not a triangle");					//�D�T����
	else if ((a == b || b == c || c == a) && pow(a, 2) + pow(b, 2) == pow(c, 2))
		printf("isosceles righttriangle");			//���y�����T����
	else if (a == b && b == c)
		printf("regular triangle");					//���T����
	else if (a == b || b == c || c == a)
		printf("isosceles triangle");				//���y�T����
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		printf("rectangular triangle");				//�����T����
	else if (pow(a, 2) + pow(b, 2) > pow(c, 2))
		printf("acute triangle");					//�U���T����
	else if (pow(a, 2) + pow(b, 2) < pow(c, 2))
		printf("obtuse triangle");					//�w���T����
}