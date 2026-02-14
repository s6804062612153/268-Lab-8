#include <stdio.h>
void addthree(int number[], int pos[4][2], int size);
void printM(int number[], int size);

int main() {
	int number[5] = {20,50,100,99,9};
	int pos[4][2]={{1,2},{3,4},{0,3},{4,60}};
	addthree(number,pos,sizeof(number)/sizeof(number[0]));
}
void addthree(int number[], int pos[4][2], int size){
	for(int i = 0; i < 4; i++) {
        int index = pos[i][0];  
        int value = pos[i][1];  
        number[index] += value;
    }
	printM(number, size);
}

void printM(int number[], int size){
    for(int i=0;i<size;i++){
		printf("%d ",number[i]);
    }
}