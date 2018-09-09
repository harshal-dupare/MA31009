#include<stdio.h>
#include<stdlib.h>

main(int argc, char **argv) {
	int ib,ir,mar,mbr,pc, d, e, f, p, q, n, k[100], i, flag;
	pc = 0;
	i = 0;
	FILE * fp;
	char *ProgFile;
	ProgFile = argv[1];
	// fp = fopen(ProgFile, "r");
	// rewind(fp);
	
	do {
		
		if(i <= pc){scanf("%d", &k[i]);	i++; continue;}          	// for terminal execution
		// if(i <= pc){fscanf(fp,"%d", &k[i]);	i++; continue;}			// for file execution
		ir = k[pc];
		pc++;
		
		if((ir == 10)&&(flag == 0))pc = ib;
		
		if(ir == 11)mar = ib;	if(ir == 21) ib = mar;
		if(ir == 12)mbr = ib;   if(ir == 22) ib = mbr;
		if(ir == 13)pc = ib;		if(ir == 23) ib = pc;
		if(ir == 14)d = ib;   	if(ir == 24) ib = d;
		if(ir == 15)e = ib;		if(ir == 25) ib = e;
		
		if(ir == 0)mbr = k[mar];   if(ir == 1) k[mar] = mbr;		
		if(ir == 31)p = ib;			if(ir == 32) q = ib;
		
		if(ir == 33) { ib = p + q;	if(ib < 0) flag = 1;	else flag = 0; }
		if(ir == 34) { ib = p - q;	if(ib < 0) flag = 1;	else flag = 0; }		
		
		if(ir == 35) ib = p*q;	if(ir == 36) ib = p/q;
		if(ir == 47){printf("Give input:\n");	scanf("%d", &ib);}
		if(ir == 48){printf("output_ib: %d\n", ib);	sleep(1);	fflush(stdout);}
		
		if(ir/100 == 5) {ib = ir%100; /*printf("value of ib now is : %d\n", ib);*/}
		
	}while(ir!=49);
	
	printf("\nOver\n");
}

