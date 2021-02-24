/* Program to save student marks data in CSV format*/
#include<stdio.h>
int main(){
	int rollno,physics,chemistry,maths;
	char name[51],class[5],section,choice;	
	FILE *fp=fopen("stmarks.csv","w");
	for(;;){
		printf("Roll No: ");scanf("%d%*c",&rollno);
		printf("Name : ");scanf("%[^\n]%*c",&name);
		printf("Class : ");scanf("%s%*c",&class);
		printf("Section : ");scanf("%c%*c",&section);
		printf("Physics Marks : ");scanf("%d%*c",&physics);
		printf("Chemistry Marks : ");scanf("%d%*c",&chemistry);
		printf("Maths Marks : ");scanf("%d%*c",&maths);
		
		fprintf(fp,"%d,%s,%s,%c,%d,%d,%d\n",rollno,name,class,section,physics,chemistry,maths);
		printf("Add More [Y/N] : ");scanf("%c%*c",&choice);
		if(choice=='n' || choice=='N'){
			fclose(fp);break;
		}
	}	
}
