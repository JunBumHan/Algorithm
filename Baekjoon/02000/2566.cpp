#include <iostream>

using namespace std;

int arr[9][9], temp[4] = {0, };

int main()
{

    for(int i = 0; i < 9; ++i) {
        for(int j = 0; j < 9; ++j) {
            cin >> arr[i][j];
            if(temp[1] < arr[i][j]) {
                temp[1] = arr[i][j];
                temp[2] = i;
                temp[3] = j;
            }
        }
    }

    cout << temp[1] << "\n" << temp[2] + 1 << " " << temp[3] + 1 ;
    return 0;
}
