#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int angle(int h , int m){
if (h == 12){
    h = 0;
    m += 1;
    }else if(h>12){
        h = h%12;
    }

int hr = (h *360) /12 +(m *360) /(12*60);

int mn = (m *360)/60;

int angle = abs(hr - mn);

if(angle > 180){
    angle = 360-angle;
}
return angle;
}

int main(int argc, char *argv[]){
int h = 0;
int m = 0;
int s = 0;


if(argc == 3){
h = atoi(argv[1]);
m = atoi(argv[2]);
printf("%d ", angle(h, m)  );

}else if(argc == 4){
h = atoi(argv[1]);
m = atoi(argv[2]);
s = atoi(argv[3]);

s = s/5;

if(s > 12)
{
    s = s%12;
}
printf("%d ", angle(s, m) );

}

return 0;
}
