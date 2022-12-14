// Copy the contents of one text file to another file, after removing all whitespaces.
#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char c,fname1[20],fname2[20];
    printf("Enter filename from you want to copy contents :\n");
    scanf("%s",fname1);
    printf("Enter filename in which you want to paste contents of %s:\n",fname1);
    scanf("%s",fname2);
    fp1=fopen(fname1,"r");
    fp2=fopen(fname2,"w");
    printf("Copied contents are :\n");
    if(fp1!=NULL && fp2!=NULL)
    {
        while((c=fgetc(fp1))!=EOF)
        {
            if(c==' ')
            {continue;}
            printf("%c",c);
            fputc(c,fp2);
        }
    }
    _fcloseall;



    return 0;
}