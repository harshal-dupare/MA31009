/*
* @Author: rohitner
* @Date:   2018-09-07 19:28:04
* @Last Modified by:   Rohit Ner
* @Last Modified time: 2018-09-07 19:36:28
* @Topic : Big number is stored in float in form of seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm (e access 128)
*          Question 4 Assignment 2
*/

#include <stdio.h>

int main()
{
	float a,*t,d;int q,*x,p;
	a = 514.41;q=256*256*43;
	x=(int*)&a;p=(*x)+q;
	t=(float*)&p;d=*t;
	printf("%f\n",d);
}