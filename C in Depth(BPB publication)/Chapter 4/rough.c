#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i=0;
	int a[100],count=0;
	scanf("%d",&n);
	while(i<n)
	{
	    scanf("%d",a[i]);
	    if(a[i]%2==0)
	    count++;
	    i++;
	}
	if(count>n/2)
	printf("READY FOR BATTLE\n");
	else
	printf("NOT READY\n");
	
	return 0;
}

