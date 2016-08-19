#include<stdio.h>
void say(void)
{
	int x,y;
	y =0;
	*(&x+3) -=34;
	
}
void main(void)
{
	int x;
	x =0;
     	x =1;	
	printf("x=%d\n",x);
        x++;
	if(x!=10)
	  say();


}
	

