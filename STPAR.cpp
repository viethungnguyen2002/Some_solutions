/*-we need to know the rule of this problem
if the truck is not in its order, it must be in stack
and stack must be a decreasing monotonic stack
-example:
5
5 1 2 4 3
first we i = 1
array[0] = 5
=> stack <5>
array[1] = 1 = i
i++
array[2] = 2 = i
i++
array[3] = 4
check 4 < 5
=> stack <4,5>
array[4] = 3
i++
check st.top = i = 4
st.pop
=> stack<5>
check st.top = i = 5
st.pop
i == 5 => yes*/

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
