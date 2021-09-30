//the idea of this problem is so simple
//the number of B is equal to the sum of A and C
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int countAC = 0, countB = 0;
        string str;
        cin >> str;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'A' || str[i] == 'C')
                countAC++;
            else
                countB++;
        }
        if(countAC == countB)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}