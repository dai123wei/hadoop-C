#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
	string context;
	while(cin >> context){
		string year = context.substr(15, 4);		
		string airT = context.substr(45, 5);
		string q = context.substr(50, 1);
		if(airT != "+9999" && (q == "0" || q == "1" || q == "4" || q == "5" || q == "9")){
			cout << year << "\t" << airT << endl;
		}
	}
}
