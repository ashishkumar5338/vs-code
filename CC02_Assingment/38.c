// WAP to Write a Sentence to a File.
#include<stdio.h>

int main()
{
    FILE *fp;
    char c,filename[20];    
    printf("Enter filename :\n");
    scanf("%s",filename);
    printf("Write a scentence in file then press Ctrl + Z:\n");
    fp=fopen(filename,"w");
    if(fp!=NULL)
    {
        c=getchar();
        while(c!=EOF)
        {
            c=getchar();
            fputc(c,fp);
        }
    }
    fclose(fp);

    return 0;
}