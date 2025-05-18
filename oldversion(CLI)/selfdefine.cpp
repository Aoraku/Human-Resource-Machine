#include<iostream>
#include<queue>
# define inf 0x3f3f3f3f

void selfprintinfo();
//bool selfanscheck(int total, int* array);
int selfinboxtotal=2;
int selfoffer[2]={20,6};
int selfoutboxtotal=12;
int selfexamine[12]={1,1,2,3,5,8,13,1,1,2,3,5};
int selfinstructionaccess[11]={1,1,1,1,1,1,1,1,1,1,1};
//inbox0 outbox1 copyfrom2 copyto3 add4 sub5 jump6 jumpifzero7 jumpifnegative8 bump+9 bump-10
int selfspaceaccess=5;
int selfspacevalue[5]={-inf,-inf,-inf,-inf,0};


void selfprintinfo(){
	printf("Level information:Self-Defined Level --- Fibonacci\n");
	printf("For every number N, output fibonacci elements which < N.\n");
	printf("Available Space:5	Accepted Command:inbox outbox copyfrom copyto add sub jump jumpifzero jumpifnegative bump+ bump-\n");
	return;
}

