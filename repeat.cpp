#include<iostream>
#include<time.h>
#include <limits.h>
void Out_Array(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        std::cout<<a[i]<<" ";
    }
}
int Min(int a[], int n)
{
    int Min1;
    Min1 = INT_MAX;
    for(int i = 0; i<= n; i++)
    {
        Min1 = std::min(Min1, a[i]);
    }
    return Min1;
}
void repeat(int a[], int n)
{
    int b[20];
    for (int i = 0 ; i <= n; i++)
    {
        b[i] = INT_MAX;
    }
    for(int i = 0; i <= n-1; i++)
    {
        for(int j = i + 1; j <= n-1 ; j++)
        {
            if(a[i] == a[j])
            {
                b[i] = j - i;
            }
        }
    }
    int check = Min(b, n);
    for(int i = 0; i<= n; i++)
    {
        if (b[i] == check)
        {
            std::cout<<a[i];
            break;
        }
    }
}

// main function
int main(){
    clock_t start, end;
    start = clock();
    int a[] = {1,2,3,4,2,1,3,4,5};
    int n(9);
    repeat(a, n);
    end = clock();
    std::cout<<"\n"<<(double)(end - start) / CLOCKS_PER_SEC;
    return 0;
}