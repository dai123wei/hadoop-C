#include <iostream>
#include <string.h>
#include<stdlib.h> 
#include <limits.h>
using namespace std;

int main(int argc, char** argv){
	string key, value;
	string last_key;
	int max_val = INT_MIN;
	while(cin >> key >> value){
		if(last_key.empty() && strcmp(last_key.c_str(),key.c_str()) != 0){
			cout << key << "\t" << atoi(value.c_str()) << endl;
			last_key = key;
			max_val = atoi(value.c_str());	
		}else{
			last_key = key;
			max_val = max(max_val, atoi(value.c_str()));		
		}
	}
	cout << key << "\t" << max_val << endl;
}
