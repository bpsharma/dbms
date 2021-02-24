/* Program to save student marks data in binary format*/
#include<stdio.h>
struct{
	int rollno,physics,chemistry,maths;
	char name[51],class[5],section;
} s;
int main(){
	char choice;	
	FILE *fp=fopen("stmarks.bin","wb"); //writing in binary mode
	for(;;){
		printf("Roll No: ");scanf("%d%*c",&s.rollno);
		printf("Name : ");scanf("%[^\n]%*c",&s.name);
		printf("Class : ");scanf("%s%*c",&s.class);
		printf("Section : ");scanf("%c%*c",&s.section);
		printf("Physics Marks : ");scanf("%d%*c",&s.physics);
		printf("Chemistry Marks : ");scanf("%d%*c",&s.chemistry);
		printf("Maths Marks : ");scanf("%d%*c",&s.maths);
		
		fwrite(&s,sizeof(s),1,fp);
		printf("Add More [Y/N] : ");scanf("%c%*c",&choice);
		if(choice=='n' || choice=='N'){
			fclose(fp);break;
		}
	}	
}
