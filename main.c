#include <stdio.h>
#include <time.h>
#define BUFFERSIZE 1024

int String2Int (char String2IntInput[]){
	int i = 0, Output = 0;
	for (;String2IntInput[i]!='\0';i++){
		Output = Output * 10;
		Output = Output + (String2IntInput[i]-'0');
	}
	return Output;
}

int main (int argc, char **argv) {
	FILE *fptr = fopen(argv[1],"r");
	char Buffer[BUFFERSIZE];
	fgets(Buffer, BUFFERSIZE, fptr);
	printf("%d",time(NULL) - String2Int(Buffer));
	fclose(fptr);
}
