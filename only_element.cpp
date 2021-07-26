#include <iostream>

void Delete(int a[], int n, int j)
{
    for(int i = j; i <= n - 1; i++)
    {
        a[i] = a[i+1];
        n--;
    }
}

void Print(int a[], int n)
{
    for(int i = 0; i <= n - 1; i++)
    {
        std::cout<<a[i]<<" ";
    }
}
//main function
int main(){
    int a[] = {1,1,2,3,4,4,5,5,5,0};
    int size_a = sizeof(a) / sizeof(a[0]);
    int count[20];
    for(int i = 0; i <= 19; i++)
    {
        count[i] = 0;
    }
    // Array element counter -----------
    for(int i = 0; i <= size_a - 1; i++)
    {
        for(int j = 0; j <= size_a - 1; j++)
        {
            if(a[i] == a[j])
            {
                count[i]++;
            }
        }
    }
    
    for(int i = 0; i <= size_a; i++)
    {
        if(count[i] == 1)
        {
            std::cout<<a[i]<<" ";
        }
    }
    return 0;
}