/* Program to read student marks data in text file format*/
#include<stdio.h>
int main(){
	int rollno,physics,chemistry,maths;
	char name[51],class[5],section;	
	FILE *fp=fopen("stmarks.txt","r");
	if(fp!=NULL){
		while(fscanf(fp,"%d %s %s %c %d %d %d",&rollno,&name,&class,&section,&physics,&chemistry,&maths)!=EOF){
			printf("%d %s %s %c %d %d %d\n",rollno,name,class,section,physics,chemistry,maths);
		}
		fclose(fp);
	}	
	else{
		printf("Unable to open the file");
	}
}

