#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        bool flag1 = false,flag2 = false,flag3= false;
        bool has_answer = false;
        for(int i = -100; i <=100 ;i++) 
        {
            for(int j = -100; j <= 100;j++) 
            {
                for(int k = 100; k <= 100;k++)
                {
                    if(i!=j && k!=j && k!=i)
                    {
                        if(i+j+k == a)
                        {
                            flag1 = true;
                        }
                        if(i*j*k == b)
                        {
                            flag2 = true;
                        }
                        if(i*i + j*j + k*k == c)
                        {
                            flag3 = true;
                        }
                        if(flag1 && flag2 && flag3)
                        {
                            cout << i << " " << j << " " << k << endl;
                            break;
                            has_answer = true;
                        }
                    } 
                }
            }    
        }
        if(!has_answer)
        {
            cout << "No solution" << endl;
        }
    }
}