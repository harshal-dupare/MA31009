/*
* @Author: Rohit Ner
* @Date:   2018-09-02 21:29:39
* @Last Modified by:   Rohit Ner
* @Last Modified time: 2018-09-02 22:58:44
*/

#include <stdio.h>

int main()
{
	int x, y, z;
	float u, v, w, t;
	scanf("%d%d",&x,&y);
	z = x + y;
	u = 2 + 1.0/3;
	v = u + x;
	w = v + y;
	t = u + z;
	if(w >  t) printf("D");
	if(w <  t) printf("E");
	if(w == t) printf("F");
	printf("\n");
	// | input             | output 
	// | 1 1 : 6 6         | F     
	// | 7 7 : 13 13       | E     
	// | 14 14             | A     
	// | 15 15 : 29 29     | D     
	// | 30 30             | F     
	// | 31 31 : 61 61     | E     
	// | 62 62             | F     
	// | 63 63 : 125 125   | D     
	// | 126 126           | F     
  // | 127 127 : 253 253 | E
	// | 254 254           | F
  // | 127 127 : 253 253 | E
}