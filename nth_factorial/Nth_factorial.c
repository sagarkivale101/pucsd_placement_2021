#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>


int main(int argc , char *argv[]){

unsigned long long int n = atoi(argv[1]);
int k = n;

n = n*3+1;


unsigned long long int arr[n];

for(int i=0;i<n;i++)
    arr[i] = 0;

arr[0] = 0;
arr[1] = 1;

for(int i=2;i<n;i++)
    arr[i] = arr[i-1] + arr[i-2];

    for(int i=0;i<n;i++)
        printf("%llu ", arr[i]);


     printf("\n\n%dth term = %llu ",k, arr[k]);

    printf("\n\n%dth even term =%llu ",k, arr[3*k]);

return 0;
}
