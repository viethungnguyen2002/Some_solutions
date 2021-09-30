#include <iostream>
#include <stack>
using namespace std;
int main()
{
    while(true)
    {
        int n,array[10000];
        bool has_answer = true;
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n;i++)   cin >> array[i];
        stack <int> st;
        int need = 1;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && st.top() == need)
            {
                need++;
                st.pop();
            }
            if(array[i] == need)
            {
                need++;
            } 
            else if(!st.empty() && st.top() < array[i])
            {
            
                has_answer = false;
                break;
            }
            else
            {
                st.push(array[i]);
            } 
        }
        if(has_answer)
            cout << "yes" << endl;
        else
            cout << "no" << endl;       
    }
}