#include <iostream>
using namespace std;
int power(int num, int powe)
{
    int result=1;
    for(int i=0;i<powe;i++)
    {
        result= result *num; 
    }
    return result;
}

int main()
{
    cout<< power(100,3);
    return 0;
}