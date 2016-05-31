#include <stdio.h>

int main()
{
	int i;
	printf("DROP TABLE SNP;\n");
	printf("CREATE TABLE SNP (\n");
	printf("\tCHROM\tchar(5) NOT NULL,\n");
	printf("\tPOS\tint NOT NULL,\n");      
	printf("\tREF\tchar(1) NOT NULL,\n");
	printf("\tALT\tvarchar(5) NOT NULL,\n ");
	for	(i=1; i<297; i++) {	
	   if(i>0 && i<10) printf("\tRWG_00%d\tchar(3) NOT NULL,\n", i);
	   else if(i>=10 && i<100) printf("\tRWG_0%d\tchar(3) NOT NULL,\n", i);
	   else printf("\tRWG_%d\tchar(3) NOT NULL,\n", i);
	   }
	printf("\tindex\tPOS_idx(POS),\n");
	printf("\tindex\tCHROM_idx(CHROM)\n");
	printf(");\n\n");

	printf("DROP TABLE INDEL;\n");
	printf("CREATE TABLE INDEL (\n");
	printf("\tCHROM\tchar(5) NOT NULL,\n");
	printf("\tPOS\tint NOT NULL,\n");      
	printf("\tREF\tvarchar(50) NOT NULL,\n");
	printf("\tALT\tvarchar(210) NOT NULL,\n ");
	for	(i=1; i<297; i++) {	
	   if(i>0 && i<10) printf("\tRWG_00%d\tvarchar(255) NOT NULL,\n", i);
	   else if(i>=10 && i<100) printf("\tRWG_0%d\tvarchar(255) NOT NULL,\n", i);
	   else printf("\tRWG_%d\tvarchar(255) NOT NULL,\n", i);
	   }
	printf("\tindex\tPOS_idx(POS),\n");
	printf("\tindex\tCHROM_idx(CHROM)\n");
	printf(");\n");

}


