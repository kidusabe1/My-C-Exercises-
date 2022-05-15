#include "library.h"
int power(int input, int exponent)
{
    int i,x=1;
    for(i=0;i<exponent;i++)
    {
        x=x*input;
    }
    return x;
}
float reciprocal(float input)
{
    float output=0.0f;
    output=(1/input);
    return output;
}
int oldest(int arr[],int size)
{
    int i,largest;
    largest = arr[0];
    for(i-0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;

}