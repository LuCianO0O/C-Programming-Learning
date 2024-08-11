#include <stdio.h>
int main(void)
{
    int length,width,height,V,weight;
    length= 12;
    width = 10;
    height = 8;
    V = length * width * height;
    weight = (V + 165) / 166 ;
    printf("weight : %d\n",weight);
    return 0;  
}