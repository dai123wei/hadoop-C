#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
    string key, num;
    map<string, int> count; 
    map<string, int>::iterator it;
    while(cin >> key >> num)
    {
        it = count.find(key);
        if(it != count.end())
        {
            it->second++;
        }
        else
        {
            count.insert(make_pair(key, 1));
        }
    }

    for(it = count.begin(); it != count.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    return 0;
}
