#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int sum(int arr[], int s, int n){
    int rs = 0, ls = 0;

    int min = INT_MAX;



   for(int i=2;i<n;i++){
        rs += arr[i];

    }


    int j=0;

int k = 0;

//    ls += arr[i+0];
    //ls += arr[i+1];
   // rs -= arr[0];
   // rs -= arr[1];

ls += arr[0];
for(int i=1;i<n;i++){
 printf("%d %d %d\n", abs(rs - ls), rs , ls);
 if(abs(rs - ls) < min ){
        min = abs(rs - ls);
         k  = i;
    }
    ls += arr[i];
    rs -= arr[i+1];
    }

printf("\n\n\n\npartition at = %d with minimum difference of = %d\n\n\n\n", k , min);
}


int main(int argc, char *argv[]){

int n = atoi(argv[1]) ;

int arr[n];

for(int i=0;i<n;i++){
    arr[i] = 2 * i +4;
}

for(int i=0;i<n;i++){
printf("%d ", arr[i]);
}
printf("\n\n ");


sum(arr, 0, n);

return 0;
}

/*
Balance partitioning of an array

Consider a sequence of N integers where the Kth value is defined as (2K + 4)
Sample values [4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 ...]

Input N as the length of this sequence, return the index I such that sum of all values to left of I is as close as possible to sum of the values to the right.

Sample ./a.out 10     Output: 7

Explanation
Sequence: N = 10
[4, 6, 8, 10, 12, 14, 16, 18, 20, 22]

Partitioning at I = 6
Partitions [4, 6, 8, 10, 12, 14] and [18, 20, 22]
Left sum 54
Right sum 60

Calculate the balance partition for N as 50, 1000, 10000, 100000
*/
