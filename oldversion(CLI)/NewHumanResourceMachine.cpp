#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<string>
# define inf 0x3f3f3f3f

#include "selfdefine.cpp"

using namespace std;
void gotoxy(int x, int y) {
    COORD pos = {x,y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}
struct opr{
    string oprname;
    int oprpos=-1;
    bool illegal = 0;
}rob[105];
struct worker{
	int curpos;
	int curnum;
};
int record,levelselect,number;//number of the lines of the orders 
string justdoit;
queue <int> input;
stack <int> output;
int space[25] = {0};//record the number in x-th space
int cnt = 0;
int instructionaccess[10][11]={{0,0,0,0,0,0,0,0,0,0,0},{1,1,0,0,0,0,0,0,0,0,0},{1,1,1,1,1,1,1,1,0,0,0},{1,1,1,1,1,1,1,1,0,0,0},{1,1,1,1,1,1,1,1,1,1,0}};
int spaceaccess[10]={0,0,3,3,4};
//inbox0 outbox1 copyfrom2 copyto3 add4 sub5 jump6 jumpifzero7 jumpifnegative8 bump+9 bump-10 


void output_level(int pos, int robcurrent,int codecurrent, queue <int> input, stack <int> output,bool situa){
//pos->current pos of the robot
//robotcurrent -> current number carried by the robot
//codecurrent -> the current line of the orders
//situa -> whether the user starts the game(if situa = zero, the orders won't be shown) 	
	gotoxy(0,0);
	if(levelselect==1){
		printf("Level information:Level 1 --- First Things First\n");
		printf("Output everything in order.\n");
		printf("Available Space:0	Accepted Command:inbox outbox\n");
	}
	else if(levelselect==2){
		printf("Level information:Level 2 --- Do Some Subtractions\n");
		printf("For every two numbers A and B, output A-B and B-A in order.\n");
		printf("Available Space:3	Accepted Command:inbox outbox copoyfrom copyto add sub jump jumpifzero\n");
	}
	else if(levelselect==3){
		printf("Level information:Level 3 --- We Are Homo!\n");
		printf("Get two numbers. If they are the same, output one of them. Otherwise, throw them all.\n");
		printf("Available Space:3	Accepted Command:inbox outbox copoyfrom copyto add sub jump jumpifzero\n");
	}
	else if(levelselect==4){
		printf("Level information:Level 4 --- Let's try division!\n");
		printf("Get two numbers A and B. Output A/B omitting the remainder.\n");
		printf("Available Space:4	Accepted Command:inbox outbox copoyfrom copyto add sub jump jumpifzero jumpifnegative bump+\n");
	}

	//NEW ADD
	else if(levelselect==5)
		selfprintinfo(); 
	//NEW ADD END 

	gotoxy(0,4); printf("IN");
	gotoxy(3,4);
	for(int i=1;i<=6;i++){//inbox strip
		gotoxy(3,3*i+1);	printf("+---+\n");
		gotoxy(3,3*i+2);
		if(input.empty())
			printf("| X |\n");
		else{
			printf("| %d |\n",input.front());
			input.pop();
		}
		gotoxy(3,3*i+3);	printf("+---+\n");
	}
	
	for(int i=1;i<=6;i++){//outboxbox strip
		gotoxy(5*max(4,spaceaccess[levelselect])+20,3*i+1);	printf("+---+\n");
		gotoxy(5*max(4,spaceaccess[levelselect])+20,3*i+2);
		if(output.empty())
			printf("| X |\n");
		else{
			printf("| %d |\n",output.top());
			output.pop();
		}
		gotoxy(5*max(4,spaceaccess[levelselect])+20,3*i+3);	printf("+---+\n");
	}
	gotoxy(5*max(4,spaceaccess[levelselect])+26,4); printf("OUT");
	
	//print the robot  1-14 2-19 3-24 4-29 outbox 35
	gotoxy(5*pos+9,4); printf("+---+\n");
	gotoxy(5*pos+9,5); if(robcurrent==-114514)printf("|   |\n",robcurrent);
					   else					  printf("| %d |\n",robcurrent);
	gotoxy(5*pos+9,6); printf("+---+\n");
	gotoxy(5*pos+9,7); printf("@   @\n");
	gotoxy(5*pos+9,8); printf("-----\n");
	gotoxy(5*pos+9,9); printf("|@ @|\n");
	gotoxy(5*pos+9,10); printf("  +  \n");
	gotoxy(5*pos+9,11); printf("/   \\\n");
	gotoxy(5*pos+9,12); printf(" | | \n");
	
	//print the grass
	for(int i=1;i<=max(4,spaceaccess[levelselect]);i++){
		gotoxy(5*i+9,14);printf("+---+\n");
		gotoxy(5*i+9,15);
			if (space[i] == -inf) printf("| X |\n");
			else printf("| %d |\n", space[i]);
		gotoxy(5*i+9,16);printf("+---+\n");
		gotoxy(5*i+11,17);printf("%d\n",i-1);
	}//14,19,24,29,34,39
	
	//print the column
	for(int i=1 ; i<=18; i++){
		gotoxy(5*max(4,spaceaccess[levelselect])+30,i+3);printf("| ");
		if(i==codecurrent)	printf(">%2d ",i);
		else printf(" %2d ",i);//50,55
	}
	if(situa==1)
		for(int i=1;i<=number;i++){
			gotoxy(5*max(4,spaceaccess[levelselect])+36,i+3);//56 61
			if(rob[i].oprpos==-1)
				printf("%s",rob[i].oprname.c_str());
			else
				printf("%s %d",rob[i].oprname.c_str(),rob[i].oprpos);
		}
//	cout << endl << cnt << endl;
	return;
}

void print_info()//print the information for the game
{
	gotoxy(0,24);printf("The total number of orders executed is %d", cnt);
	return ;
}

//declare the functions
worker inbox(int codenum,worker current);
worker outbox(int codenum,worker current);
worker copyfrom(int codenum, worker current);
worker copyto(int codenum, worker current);
worker add(int codenum, worker current);
worker sub(int codenum, worker current);
worker jump(int codenum, worker current);
worker jumpifzero(int codenum, worker current);
worker jumpifnegative(int codenum, worker current);
worker bump(int codenum, worker current, char whattodo);
bool time_to_break();
bool anscheck();
bool selfanscheck(int total, int* array);
void game();
bool level();
void op_input(int codenum);

worker inbox(int codenum,worker current){
	cnt++;
	while(current.curpos!=0){
		current.curpos-=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	
	current.curnum=input.front();
	input.pop();
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	
	return current;
}

worker outbox(int codenum,worker current){
	if(current.curnum==-114514){
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	} 
	cnt++;
	while(current.curpos!=1+max(4,spaceaccess[levelselect])){
		current.curpos+=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	
	output.push(current.curnum);
	current.curnum=-114514;
	
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	
	return current;
}

worker copyfrom(int codenum, worker current){
	int pos = rob[codenum].oprpos + 1;//the pos of the space
	//since the number of space starts from 0, so +1
	
	if (space[pos] == -inf || pos < 1 || pos > spaceaccess[levelselect]) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	} 
	cnt++;
	while(current.curpos < pos){
		current.curpos+=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	while (current.curpos > pos) {
		current.curpos-=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	if (current.curpos == pos) {
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	
	current.curnum = space[pos];
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	
	return current;
}

worker copyto(int codenum, worker current){
	int pos = rob[codenum].oprpos + 1;//the pos of the space
	//since the number of space starts from 0, so +1
	
	if (current.curnum == -114514 || pos < 1 || pos > spaceaccess[levelselect]) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	} 
	cnt++;
	while(current.curpos < pos){
		current.curpos+=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	while (current.curpos > pos) {
		current.curpos-=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	if (current.curpos == pos) {
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	
	space[pos] = current.curnum;
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	
	return current;
}

worker add(int codenum, worker current){
	int pos = rob[codenum].oprpos + 1;//the pos of the space
	//since the number of space starts from 0, so +1
	
	if (current.curnum == -114514 || pos < 1 || pos > spaceaccess[levelselect] || space[pos] == -inf) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	} 
	cnt++;
	while(current.curpos < pos){
		current.curpos+=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	while (current.curpos > pos) {
		current.curpos-=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	if (current.curpos == pos) {
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	
	current.curnum += space[pos];
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	
	return current;
}

worker sub(int codenum, worker current){
	int pos = rob[codenum].oprpos + 1;//the pos of the space
	//since the number of space starts from 0, so +1
	
	if (current.curnum == -114514 || pos < 1 || pos > spaceaccess[levelselect] || space[pos] == -inf) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	} 
	cnt++;
	while(current.curpos < pos){
		current.curpos+=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	while (current.curpos > pos) {
		current.curpos-=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	if (current.curpos == pos) {
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	}
	
	current.curnum -= space[pos];
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	
	return current;
}

worker jump(int codenum, worker current){
	int jumpto = rob[codenum].oprpos;
	if (jumpto < 1 || jumpto > number) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	}
	cnt++;
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	return current;
}

worker jumpifzero(int codenum, worker current){
	int jumpto = rob[codenum].oprpos;
	if (jumpto < 1 || jumpto > number || current.curnum == -114514) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	}
	cnt++;
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	return current;
}

worker jumpifnegative(int codenum, worker current){
	int jumpto = rob[codenum].oprpos;
	if (jumpto < 1 || jumpto > number || current.curnum == -114514) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	}
	cnt++;
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(200);
	return current;
}

worker bump(int codenum, worker current , char whattodo)
{
	int pos = rob[codenum].oprpos + 1;//the pos of the space
	//since the number of space starts from 0, so +1
	
	if (space[pos] == -inf || pos < 1 || pos > spaceaccess[levelselect]) {
		gotoxy(5*max(4,spaceaccess[levelselect])+50,codenum+3);
		printf("Error on instruction %d", codenum);
		system("pause>nul");
		game();
	} 
	cnt++;
	while(current.curpos < pos){
		current.curpos+=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(250);
	}
	while (current.curpos > pos) {
		current.curpos-=1;
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(250);
	}
	if (current.curpos == pos) {
		system("cls");
		output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(250);
	}

	if(whattodo=='+')space[pos]++;
	else if(whattodo=='-')space[pos]--;
	
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(250);
	
	current.curnum = space[pos];
	system("cls");
	output_level(current.curpos, current.curnum, codenum, input, output, 1);Sleep(250);
	
	return current;
}

bool time_to_break(){
    int cur = output.size();
    if(levelselect==1) return cur == 2;
    if(levelselect==2) return cur == 8;
    if(levelselect==3) return cur == 2;
	if(levelselect==4) return cur == 4;
	if(levelselect==5) return cur == selfoutboxtotal;
	
}

bool selfanscheck(int total, int* array){
	bool flag=1;
	if(total!=selfoutboxtotal)	return 0;
	for(int i=1;i<=total;i++){
		if(array[i]!=selfexamine[selfoutboxtotal-i])
			flag=0;
	}
	return flag;
}

bool anscheck(){
    int cur = 0, t[25] = {0};
    while (!output.empty()) {
        t[++cur] = output.top();
        output.pop();
    }
    int tmp_cur = cur;
    while (tmp_cur) 
        output.push(t[tmp_cur--]);
    if(levelselect==1) return (t[1] == 2 && t[2] == 1);
    if(levelselect==2) return (abs(t[1]) == 18 && t[2] == -t[1] && abs(t[3]) == 0 && t[4] == -t[3] && abs(t[5]) == 4 && t[5] == -t[6] && abs(t[7]) == 6 && t[8] == -t[7]);
    if(levelselect==3) return (t[1] == -3 && t[2] == 7);
	if(levelselect==4) return (cur == 4 && t[1] == 0 && t[2] == 7 && t[3] == 2 && t[4] == 1);
	if(levelselect==5) return selfanscheck(cur, t);
}

void op_input(int codenum, string s)//input the operations and store them in "rob"
{	
    for (int i = 0;i < s.length();i++) {
        if (s[i] == ' ') {
            rob[codenum].oprname = s.substr(0, i);
            if (rob[codenum].oprname == "inbox" || rob[codenum].oprname == "outbox") {
                rob[codenum].illegal = 1;
                return ;
            }
            int op_num = 0;
            for (int j = i + 1;j < s.length();j++) {
                if (s[j] >= '0' && s[j] <= '9') {
                    op_num = op_num * 10 + (s[j] - '0');
                }
                else {
                    rob[codenum].illegal = 1;
                    return ;
                }
            }
            rob[codenum].oprpos = op_num;
            return ;
        }
    }
    if (s == "inbox" || s == "outbox") {
        rob[codenum].oprname = s;
        return ;
    }
    else {
        rob[codenum].illegal = 1;
        return ;
    }
    return ;
}
 
bool level(){
	for (int i = 1;i <= 25;i++)
		space[i] = -inf;
	if(levelselect==4) space[4]=0;
	else if(levelselect==5)
		for(int i=1;i<=selfspaceaccess;i++)
			space[i]=selfspacevalue[i-1];
	
	if(levelselect==1) input.push(1), input.push(2);
	if(levelselect==2) input.push(3), input.push(9), input.push(5), input.push(1), input.push(-2), input.push(-2), input.push(9), input.push(-9);
	if(levelselect==3) input.push(6), input.push(2), input.push(7), input.push(7), input.push(-9), input.push(3), input.push(-3), input.push(-3);
	if(levelselect==4) input.push(7), input.push(4), input.push(7), input.push(3), input.push(15), input.push(2), input.push(0), input.push(9);
	if(levelselect==5) {
		for(int i=0;i<selfinboxtotal;i++)
			input.push(selfoffer[i]);
	}
	cnt = 0;
	system("cls");
	output_level(1,-114514,0,input,output,0);
	gotoxy(5*max(4,spaceaccess[levelselect])+2,3); printf("TOTAL NUMBER OF INSTRUCTIONS?");
	gotoxy(5*max(4,spaceaccess[levelselect])+34 + 2,3); printf("(Press 0 to file input)");
	gotoxy(5*max(4,spaceaccess[levelselect])+34,3); cin >> number;
	
	
	if (number == 0) {
		system("cls");
		printf("Please enter the file address:");
		char t[10086];
		cin >> t;
		ifstream fin;
	    fin.open(t);
	    fin >> number;
	    string s;
	    getline(fin, s);
	    for(int i=1;i<=number;i++){
	    	getline(fin, s);
	        op_input(i, s);
	    }
	    fin.close();
	}
	else {
		string s;  
		getline(cin, s);
	    
	    for(int i=1;i<=number;i++){
	    	gotoxy(5*max(4,spaceaccess[levelselect])+36,i+3);
	    	getline(cin, s);
	        op_input(i, s);
	    }
	}
	
	worker current;
	current.curnum=-114514;
	current.curpos=1;
	
	for(int i=1;i<=number;i++)
	{
		if (rob[i].illegal) {
			gotoxy(5*max(4,spaceaccess[levelselect])+50,i+3);
			printf("Error on instruction %d", i);
			system("pause>nul");
			game();
		}
		if(instructionaccess[levelselect][0] && rob[i].oprname=="inbox"){
			if (input.empty()) break;
			current=inbox(i,current);
		}
		else if(instructionaccess[levelselect][1] && rob[i].oprname=="outbox"){
			current=outbox(i,current);
		}
		else if (instructionaccess[levelselect][2] && rob[i].oprname == "copyfrom"){
			current = copyfrom(i, current);
		}
		else if (instructionaccess[levelselect][3] && rob[i].oprname == "copyto") {
			current = copyto(i, current);
		} 
		else if (instructionaccess[levelselect][4] && rob[i].oprname == "add") {
			current = add(i, current);
		}
		else if (instructionaccess[levelselect][5] && rob[i].oprname == "sub") {
			current = sub(i, current);
		}
		else if (instructionaccess[levelselect][6] && rob[i].oprname == "jump") {
			current = jump(i, current);
			i = rob[i].oprpos - 1;
			if (time_to_break()) break;
		}
		else if (instructionaccess[levelselect][7] && rob[i].oprname == "jumpifzero") {
			current = jumpifzero(i, current);
			if (current.curnum == 0) i = rob[i].oprpos - 1;
			if (time_to_break()) break;
		}
		else if (instructionaccess[levelselect][8] && rob[i].oprname == "jumpifnegative") {
			current = jumpifnegative(i, current);
			if (current.curnum < 0) i = rob[i].oprpos - 1;
			if (time_to_break()) break;
		}
		else if (instructionaccess[levelselect][9] && rob[i].oprname == "bump+") {
			current = bump(i, current,'+');
		}
		else if (instructionaccess[levelselect][10] && rob[i].oprname == "bump-") {
			current = bump(i, current,'-');
		}
		else{
			gotoxy(5*max(4,spaceaccess[levelselect])+50,i+3);
			printf("Error on instruction %d", i);
			system("pause>nul");
			game();
		}
	}
	return input.empty() && anscheck();
}

void game(){
	FILE *file1 = fopen("record.txt","r");
	fscanf(file1, "%d", &record);
	fclose(file1);
	for(int i=0;i<=100;i++){
		rob[i].oprname='\0';
		rob[i].oprpos=-1;
		rob[i].illegal=0; 
	}
	while(!output.empty()) output.pop();
	while(!input.empty()) input.pop();

	system("cls");
	
	gotoxy(0,0);printf("Welcome to Human Resource Machine!");
	gotoxy(0,1);printf("Please Select Level!");
	gotoxy(0,2);printf("Below are unlocked levels:");
	gotoxy(0,3); for(int i=1;i<=min(record+1,4);i++) printf("Level %d   ",i);
		if(record==4) printf("Level Extra");
	gotoxy(0,5);printf("I am going to Level:");
	gotoxy(0,6);printf("//Press Q to quit the game");
		if(record==4) printf(" and press 5 to play Extra Level");
	gotoxy(20,5);cin>>justdoit;	
	
	if(justdoit.length()>1){
		gotoxy(0,7);printf("NO ACCESS!!!");Sleep(250);
		game();
	}
	
	if(justdoit == "Q")
		exit(0);

	levelselect = justdoit[0] - 48;
	
	if(!(record==4 && levelselect==5) && (levelselect<1 || levelselect>4 || levelselect>record+1)){
		gotoxy(0,7);printf("NO ACCESS!!!");Sleep(250);
		game();
	}
	
	if(levelselect == 5){
		for(int i=0;i<11;i++)
			instructionaccess[5][i]=selfinstructionaccess[i];
		spaceaccess[5]=selfspaceaccess;
	}
	if(level()){
		gotoxy(0,23);
		printf("Success");
		print_info();	
		if(record<levelselect) {
			FILE *file1 = fopen("record.txt","w");
			fprintf(file1, "%d", record+1);
			fclose(file1);
		}
		system("pause>nul");
		game();
	}
	else {
		gotoxy(0,23);
		printf("Fail");system("pause>nul");
		game();
	}
	
}
int main(){
	
	game();
	system("pause>nul");
	return 0;
}


