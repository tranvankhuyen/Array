#include <iostream>

int max(int a[], int n)
{
    int Max = INT_MIN;
    for(int i = 0; i <= n - 1; i++)
    {
        Max = std::max(Max, a[i]);
    }
    return Max;
}
int sum(int a[], int n)
{
    int s = 0;
    for(int i = 0; i <= n -1; i++)
    {
        if(a[i] != max(a, n))
        {
            s+= a[i];
        }
    }
    return s;
}
void check(int a[], int n)
{
    if(max(a, n)==sum(a, n))
    {
        std::cout<<"True"<<std::endl;
    }
    else
        std::cout<<"False"<<std::endl;
}
int main()
{
    int a[] = {2,5,8,1};
    int size_a = sizeof(a) / sizeof(a[0]);
    check(a, size_a);
    int b[] = {1,2,3,4,5};
    int size_b = sizeof(b) / sizeof(b[0]);
    check(b, size_b);

    return 0;
}