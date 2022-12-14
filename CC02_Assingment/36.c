// Write a program to retrieve the student information from file created in previous 
//  question and print it in following format: 
//       Roll No.    Name     Marks
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int roll;
    char name[20],filename[20];
    float marks;
    printf("Enter filename :\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp!=NULL)
    {
        printf("Roll no.\tName\tMarks\n");
        while(fscanf(fp,"%s%d",name,&roll)!=EOF)
        {
            fseek(fp,2*sizeof(int),1);  //To skip class and year data created in previous program
            fscanf(fp,"%f",&marks);
            printf("%d\t\t%s\t%.2f\n",roll,name,marks);
        }
    }
    else
    {
        printf("File is not present in the current folder.");
        exit(1);
    }
    fclose(fp);

    return 0;
}