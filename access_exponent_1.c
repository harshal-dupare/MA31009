/*
* @Author: Rohit Ner
* @Date:   2018-09-08 00:21:57
* @Last Modified by:   Rohit Ner
* @Last Modified time: 2018-09-08 00:26:37
* @Topic: Question 5 Assignment 2
*/

#include <stdio.h>

int main()
{
	int a,b,c,*d;
	float *p,*q,r,s,t;
	a = 58+256*256*128;
	b = 86+256*256*256;
	p=(float*)&a;q=(float*)&b;r=*p;s=*q;t=r+s;d=(int*)&t;c=*d;
	printf("%d\n",c%256);
}