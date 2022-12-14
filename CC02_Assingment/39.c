// WAP to Read a Line From a File and Display it.
#include<stdio.h>

int main()
{
    FILE *fp;
    char c,filename[20];    
    printf("Enter filename to Read and display line :\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp!=NULL)
    {
        c=fgetc(fp);
        while(c!=EOF)
        {
            printf("%c",c);
            c=fgetc(fp);
        }
    }
    fclose(fp);

    return 0;
}