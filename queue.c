#include <stdio.h>
typedef struct queue{
    int data[100];
    int head;
    int tail;
}queue;
int main(){
    queue test;
    //入队
    test.head=0;
    test.tail=0;
    for(int i=0;i<10;i++){
    	int temp;
		scanf("%d",&temp);
		test.data[test.tail]=temp;
		test.tail++;
    }
    //出队
    while(test.tail>test.head){
        printf("%d ",test.data[test.head]);
		test.head++;
    }
    return 0;
}
