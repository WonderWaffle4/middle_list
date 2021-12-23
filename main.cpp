#include "middle_list.h"

void printArray(const vector<char> arr){
    for(long long i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}

int main()
{
    vector<char> arr = {'1', '2'};
    string s;
    getline(cin, s);
    cout << itc_rmstrspc(s);
    return 0;
}
