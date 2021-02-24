/* Program to save student marks data in binary format*/
#include<stdio.h>
typedef struct{
	int rollno,physics,chemistry,maths;
	char name[51],class[5],section;
} Student;
int main(){
	char choice;	
	FILE *fp=fopen("stmarks.txt","w");
	for(;;){
		printf("Roll No: ");scanf("%d%*c",&rollno);
		printf("Name : ");scanf("%[^\n]%*c",&name);
		printf("Class : ");scanf("%s%*c",&class);
		printf("Section : ");scanf("%c%*c",&section);
		printf("Physics Marks : ");scanf("%d%*c",&physics);
		printf("Chemistry Marks : ");scanf("%d%*c",&chemistry);
		printf("Maths Marks : ");scanf("%d%*c",&maths);
		
		fprintf(fp,"%d %s %s %c %d %d %d\n",rollno,name,class,section,physics,chemistry,maths);
		printf("Add More [Y/N] : ");scanf("%c%*c",&choice);
		if(choice=='n' || choice=='N'){
			fclose(fp);break;
		}
	}	
}
