/*
* @Author: Rohit Ner
* @Date:   2018-09-02 20:45:57
* @Last Modified by:   Rohit Ner
* @Last Modified time: 2018-09-02 20:52:59
* @Topic: To show that a number is stored in float as 8 bit number
*/

#include <stdio.h>

int main()
{
	int a, b;
	float p, q;
	scanf("%d", &a);
	p = a + 0.4;
	if(p >  a + 0.4) printf("A");
	if(p <  a + 0.4) printf("B");
	if(p == a + 0.4) printf("C");
	// | input   | output | p
	// |       1 | B      | 1.0110011
	// |  2 :  3 | A      |	10.011001
	// |  4 :  7 | A      | 100.01100
	// |  8 : 15 | B      | 1000.0110
	// | 16 : 31 | B      | 10000.011
	// | 32 : 63 | A      | 100000.01
}