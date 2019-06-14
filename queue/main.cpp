#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int > q;
    int a;
    q.push(1);
    q.push(2);
    while(!q.empty())
    {
        a=q.back();
        cout<<a<<endl;
        q.pop();
    }
}