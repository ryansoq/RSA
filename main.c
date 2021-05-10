#include <stdio.h>
#include <math.h>

#define P 61
#define Q 53

#define N (P*Q)
#define Z ((P - 1) * (Q - 1)) // φ(N)

#define E 17
#define D 413

int POW(int m, int ed, int n)
{
    int value = 1;

    for (int i = 0; i < ed; i++)
    {
        value = (value * m) % n;
    }

    return value;
}

int main(void)
{
   int Message = 65;
   //int Encode = (int)pow((double)Message, E) % N;
   //int Decode = (int)pow((double)Encode, D) % N;
   int Encode = POW(Message, E, N);
   int Decode = POW(Encode, D, N);
   printf("Message : %d \n", Message);
   printf("Encode : %d \n", Encode);
   printf("Decode : %d \n", Decode);
   return 0;
}
