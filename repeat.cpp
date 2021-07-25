#include<iostream>
#include<time.h>
void repeat(int a[], int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        int check = 0;
        for(int j = i + 1; j <= n-1 ; j++)
        {
            if(a[i] == a[j])
            {
                std::cout<<a[i]<<" ";
                check = 1;
            }
        }
        if(check == 1)
            break;
    }
}

// main function
int main(){
    clock_t start, end;
    start = clock();
    int a[] = {3, 1, 5, 1,5 , 7, 9, 7, 9};
    int n(9);
    repeat(a, n);
    end = clock();
    std::cout<<"\n"<<(double)(end - start) / CLOCKS_PER_SEC;
    return 0;
}