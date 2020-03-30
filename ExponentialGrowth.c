#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main()
{
  int i, j;
  float b[8];
  b[0] = 1.4;
  b[1] = 2.4;
  b[2] = 3;
  b[3] = 4;
  b[4] = 5;
  b[5] = 6;
  b[6] = 7;
  char a[15] = "Seasonal flu", c[12] = "SARS-Cov-2";


  for( i=0; i<1; i++ )
  {
        float totala = 1;
        float totalb = totala*b[0];
        printf("For 5 rounds of infection with an R0 of %.0f\n", b[0]);
        printf("NOTE R0 is pronounced 'Our Knot'");
        printf("Our Knot is the rate of spread of an infection");
        printf("for %s these are the progress of the epidemic or pandemic\n", a);
        printf("Round %d has %.0f cases.\n", i, totala);
        fflush(stdout);
        for(i=1;i<6;i++)
        {
           totala += totalb;
           printf("Round %d has %.1f new cases and total of %.1f cases.\n", i, totalb, totala);
           totalb = totalb*b[0];
        }
  printf("\n\n");
  for( j=1; j<7; j++ )
  {
        i = 0;
        float totala = 1;
        float totalb = totala*b[j];
        printf("For 5 rounds of infection with an R0 of %.0f\n", b[j]);
        printf("for %s these are the progress of the epidemic or pandemic\n", c);
        printf("Round %d has %.0f cases.\n", i, totala);
        fflush(stdout);
        for(i=1;i<6;i++)
        {
           totala += totalb;
           printf("Round %d has %.1f new cases and total of %.1f cases.\n", i, totalb, totala);
           totalb = totalb*b[j];
        }
        printf("\n\n");
  }

  }

  return 0;
}
