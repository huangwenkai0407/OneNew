#include<cstdio>
int main(void){
	int data[]={
	1,2,3,4,5,6,7,9,10,11,
	12,13,14,15,16,17,18
	};
	int *p1;
	p1 = data;
	printf("%p\n",p1);//000000000063fe0
	p1++;	
	printf("%p\n",p1);//000000000063fe01
	printf("%x\n",*p1);	//2
	printf("%d\n",*p1);//2
	
	
	return 0;
} 
