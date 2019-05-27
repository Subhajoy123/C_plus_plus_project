// A TICTACTOE game
#include<iostream>
using namespace std;
void choice() ;  
char g[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}} ;
int b,l=0; 
int r,c ;
char p='X';
char s[25]; 
char m[25];
void display(){
	system("cls") ; 
	cout<< "\n " ; 
	cout<< "\t\t" << "   " << "|" << "   " << "|" << "   " << "\n" ; 
	cout<< "\t\t " << g[0][0] << " | " << g[0][1] << " | " << g[0][2] << "\n" ; 
	cout<< "\t\t" << "   " << "|" << "   " << "|" << "   " << "\n" ; 
	cout<< "\t\t" << "___" << "|" << "___" << "|" << "___" << "\n" ; 
	cout<< "\t\t" << "   " << "|" << "   " << "|" << "   " << "\n" ; 
	cout<< "\t\t " << g[1][0] << " | " << g[1][1] << " | " << g[1][2] << "\n" ; 
	cout<< "\t\t" << "   " << "|" << "   " << "|" << "   " << "\n" ; 
	cout<< "\t\t" << "___" << "|" << "___" << "|" << "___" << "\n" ; 
	cout<< "\t\t" << "   " << "|" << "   " << "|" << "   " << "\n" ; 
	cout<< "\t\t " << g[2][0] << " | " << g[2][1] << " | " << g[2][2] << "\n" ;
	cout<< "\t\t" << "   " << "|" << "   " << "|" << "   " << "\n" ;
}

void choice(){
	if( p=='X')
		cout<< " player 1's turn (X) " ;
	if( p=='O')
		cout<< " player 2's turn (O) " ;
	cin>> b; 
	switch (b){
		case 1: r=0; c=0; break ; 
		case 2: r=0; c=1; break ;
		case 3: r=0; c=2; break ;
		case 4: r=1; c=0; break ;
		case 5: r=1; c=1; break ;
		case 6: r=1; c=2; break ;
		case 7: r=2; c=0; break ;
		case 8: r=2; c=1; break ;
		case 9: r=2; c=2; break ;
		
	} 
	if(p=='X' && g[r][c]!='X' && g[r][c]!='O'){ 
		g[r][c]='X';
		p='O' ; 
	}
	else if(p=='O' && g[r][c]!='X' && g[r][c]!='O'){ 
		g[r][c]='O' ; 
		p='X' ; 
	}
	l++;
			
}
int win(){
	for(int i=0 ; i<3 ; i++){
	
		if( g[i][0]==g[i][1] && g[i][0]==g[i][2])
			return 1 ; 
	}
	for(int j=0 ; j<3 ; j++){
	
		if( g[0][j]==g[1][j] && g[0][j]==g[2][j])
			return 1 ; 	
	}
	

	int x,y ; 
	x=g[0][0];
	if(g[0][0]==g[1][1] && x==g[2][2])
		return 1 ; 
	
	y=g[0][2] ; 
	if(g[0][2]==g[1][1] && y==g[2][0])
		return 1 ; 			
				
	
}
int main() {
	int o=1 ; 
	cout<< " the tic tac toe game \n\n" ;  
	cout << " \t enter the name of player 1 (X) " ; 
	gets(s) ; 
	cout << " \t enter the name of player 2 (0) " ; 
	gets(m) ;
	display() ;
	do{
		choice() ; 
		display() ;
		win() ; 
	}while(o!=win() && l!=9) ; 
	
	if(p=='O' && l!=9 ){
		cout<< "CONGRATULATIONS!! " ; 
		puts(s) ;
		cout<< "you won the game " ;
	}
	else if(l==9)
		cout<< " draw match \n " ; 
	else{
		cout<< "CONGRATULATIONS!! " ; 
		puts(m) ;
		cout<< "wins the game " ;
	}
return 0 ; 
}

