/*
* @Author: Rohit Ner
* @Date:   2018-09-02 23:40:40
* @Last Modified by:   Rohit Ner
* @Last Modified time: 2018-09-02 23:42:26
*/
#include <stdio.h>

int main()
{
	int a,*x,p;
	a = 7;
	x = &a;
	p = (int)x+a;
	printf("%d",p);
}