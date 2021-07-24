#include <iostream>
#include<time.h>
#include <iomanip>
void appear(int a[], int n)
{
    int b[20];
    for(int i = 0; i <=n ;i++)
    {
        b[i] = 0;
    }
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(a[i] == a[j])
                b[i]++;    
        }
    }
    for(int i = 0; i <= n- 1; i++)
    {
        if(b[i] == 1)
        {
            std::cout<<a[i]<<" ";
        }
    }
}
//main function
int main(){
    int a[10] = {1,2,3,4,2,3,4,5,6,6};
    int n(10);
    double time_use ;
    clock_t start, end;
    start = clock();
    appear(a, n);
    end = clock();
    time_use = (double)(end-start) / CLOCKS_PER_SEC;
    std::cout<<std::fixed<<std::setprecision(20)<<std::endl<<time_use<<std::endl;
    return 0;
}