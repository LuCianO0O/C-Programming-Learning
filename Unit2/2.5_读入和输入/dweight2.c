#include <stdio.h>
int main(void)
{
    int height,length,width,volume,weight;
    printf("Enter height: ");
    scanf("%d",&height);
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter width: ");
    scanf("%d",&width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume : %d\n",volume);
    printf("weight:%d\n",weight);

    return 0;
}