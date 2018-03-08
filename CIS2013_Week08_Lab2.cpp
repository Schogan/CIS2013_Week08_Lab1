#include <iostream>
#include <fstream>
using namespace std;

int main (){
	
	int number;
	char cont = 'y';
	ifstream in_a;
	
	in_a.open("numbers.dat");
	if(in_a.fail()){
		cout << "Something really aweful happened here with numbers.dat";
		exit(1);
	}
	
	int one, two, three, four, five;
	
	in_a >> one >> two >> three >> four >> five;
	
	cout << "Our previous numbers are " << one << " ";
	cout << two << " " << three << " " << four << " and " << five << endl;
	
	cout << "They total: " << one + two + three + four + five;
	
	in_a.close();
	
	return 0;
}