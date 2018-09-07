/*
* @Author: Rohit Ner
* @Date:   2018-09-02 23:11:43
* @Last Modified by:   Rohit Ner
* @Last Modified time: 2018-09-07 19:36:06
* @Topic : Question 1 Assignment 2
*/
#include <stdio.h>

int main()
{
	int p, q, r, *x, *y, *z;
	float a, b, c, d, *t;
	scanf("%f%f",&a,&b);
	c = 2.0;
	x = (int*)&a; y = (int*)&b; z = (int*)&c;
	p = (*x) + (*y) + (*z);
	t = (float*)&p; d = *t;
	printf("%f",d);
}