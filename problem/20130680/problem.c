#include<stdio.h>
int main()
{
	char op;
	int x,y;

	printf("\ninsert number and insert +or-or*or/or%% and insert number:");	
	scanf("%d %c %d", &x, &op, &y);

	if( op == '+' )
		printf("%lf %c %lf = %d \n", x, op, y, x+y);
	else if( op == '-')
		printf("%d %c %d = %d \n, x", op, y, x-y);
	else if( op == '*')
		printf("%d %c %d = %d \n", x, op, y, x*y);
	else if( op == '/')
		printf("%d %c %d = %d \n", x, op, y, x/y);
	else if( op == '%')
		printf("%d %c %d = %d \n", x, op, y, x%y);
	else
		printf("you can only use  \'+-*/%.\' \n");

	return;
}
