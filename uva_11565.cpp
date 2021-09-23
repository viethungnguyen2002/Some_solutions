#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //input
        int a,b,c;
        int count = 0;
        //check if has solution
        bool has_answer = false;
        cin >> a >> b >> c;
        //because c <= 10000 
        //so value of a,b,c is in range of -sqrt(100000) and sqrt(10000)
        for(int i=-100 ; i <= 100 ; i++)
        {
            //we will take the min value of i
            for(int j =-100 ; j <= 100 ; j++)
            {
                for(int k =-100 ; k <= 100 && !has_answer ; k++)
                {
                    // i, j, k must be unique
                    if(i != j && i != k && k!= j)
                    {
                        //brute force to find the answer
                        if((i + j + k) == a && (i * j * k) == b && (i*i + j*j + k*k) == c)
                        {
                            //output the answer
                            printf("%d %d %d\n", i, j, k);
                            has_answer = true;
                        }
                    }
                }
            }
        }
        if(has_answer ==  false)
        {
            printf("No solution.\n");
        }
    }
}