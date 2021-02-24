/* Program to read student marks data in binary format*/
#include<stdio.h>
struct{
	int rollno,physics,chemistry,maths;
	char name[51],class[5],section;
} s;
int main(){
	FILE *fp=fopen("stmarks.bin","rb");
	if(fp!=NULL){
		while(fread(&s,sizeof(s),1,fp)){
			printf("%d %s %s %c %d %d %d\n",s.rollno,s.name,s.class,s.section,s.physics,s.chemistry,s.maths);
		}
		fclose(fp);
	}	
	else{
		printf("Unable to open the file");
	}
}

