#include <stdio.h>
typedef struct stack{
	int top;
	int data[100];
}stack;
int main(){
    stack test;
    test.top=0;
    for(int i=0;i<10;i++){     //入栈
    	int temp;
    	scanf("%d",&temp);
    	test.data[test.top]=temp;
    	test.top++;
    }
    test.top--;       //top指向的是没赋值的,所以-1
    while(test.top>-1){     //出栈
    	printf("%d ",test.data[test.top]);
    	test.top--;
    }
	return 0;
}