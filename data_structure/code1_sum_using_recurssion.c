#include<stdio.h>
int sum_of_n_no(int);
int sum_of_integer(int);
int main()
{
	int n;
	int s;
	printf("please eneter the no of sum you wants");
	scanf("%d",&n);
	s=sum_of_integer(n);
	//s=sum_of_n_no.(n);
	printf("%d",s);
}

int sum_of_integer(int b)
	{
		int s;
		if(b==1)
			return(b);
		s=b+sum_of_integer(b-1);
		return(s);
	}
