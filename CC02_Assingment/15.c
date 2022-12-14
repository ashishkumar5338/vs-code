//WAP that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments.
#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
    int i,l,j;
    char search;
    if(argc<2)
        printf("opps,Text not entered!!!");
    if(argc>1)
    {
        for(i=1;i<=argc;i++)
        {   
            l=strlen(argv[i]);
            printf("\n argv %2d -- ",i);
            for(j=0;j!=l;j++)
            {
                printf("%c",argv[i][j]);
            }
            printf("\n");
            for(j=0;j!=l;j++)
            {
                search=argv[i][j];
                int count=0;
                for(int k=0;k<=l;k++)
                    if(argv[i][k]==search)
                        count++;
                printf(" %c - %2d\n",search,count);
            }                        
        }
    }
    return 0;
}