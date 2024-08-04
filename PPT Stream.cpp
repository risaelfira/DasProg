#include <fstream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main( int argc, char *argv[ ] ){	
	const int MAX_CHAR = 80;
	char string[MAX_CHAR + 1];
	
if (argc != 2 ){
	printf ( "Usage: %s filename.txt\n", argv[0]);
	return -1;
}  
	
ifstream Input_File ( argv[1] );	int i = 0;
while ( Input_File ){	
	Input_File.getline ( string, MAX_CHAR ); cout << string << “\n”;
	if ( i++ == 20 ){	
	cout << “ \nPress any key to continue…”;	getch();	i = 0;
	}
} return 0;
}
