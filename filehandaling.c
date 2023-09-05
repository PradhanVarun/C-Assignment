// file handaling----->append, write, read
//append--->will save the programme which has been run in post and which will be run in present.
//write---->will write the programm in the console
//read----->

#include<stdio.h>
main()
{
	char val[10];
	FILE *fptr;
	
	fptr=fopen("D:\FileHandaling.txt", "a");
	printf("Please enter the val: ");
	scanf("%s", &val);
	fprintf(fptr,"%s",val);
	//fclose(fptr);
	
	return 0;
}
