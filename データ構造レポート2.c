#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXPAT 20   /* Maximum length of pattern */
#define MAXTXT 100  /* Maximum length of text */

/* Definition of macro */
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

/* Calculation of d[c] */
void compd(char p[], int d[], int m)
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        d[i] = m;
    }
    
    for (i = 1; i < m; i++)
    {
        d[p[i]] = m - i;
    }

    printf("d[i] \n");
    for (i = 0; i <= 255; i++)
    {
        if (d[i] != m)
        {
            printf("%c, %d\n", i, d[i]);
        }
    }
}


/* Calculation of dd[i] */
void compdd(char p[], int dd[], int m)
{
    int f[MAXPAT];
    int i, j, k;

    /* Initialize dd[i] */
    for(i = 1; i <= m; i++)
    {
        dd[i] = 2*m - i;
    }
    
    j = m;
    i = m + 1; 
    f[m] = m + 1;

    while (j > 0)
    {
        if (i == m+1 || p[i] == p[j])
        {
            f[--j] = --i;
        }
        else
        { 
            dd[i] = min(dd[i], m-j);
            i = f[i];
        }
    }

    printf("f[i] \n");
    for (j = 1; j <= m; j++)
    {
        printf(" %d", f[j]);
    }
    printf("\n");

    /* Case I */
    printf("Case I\n");
    for (j = 1; j <= m; j++)
    {
        printf(" %d", dd[j]);
    }
    printf("\n");

    /* Case II (i=f[0]) */
    for (k = 1; k <= m; k++)
    {
        if (k > i)
        { 
            i = f[i];
        }
        dd[k] = min(dd[k], m+i-k);
    }

    printf("Case II \n");
    for (i = 1; i <= m; i++)
    {
        printf(" %d", dd[i]);
    }
    printf("\n");
}


/* BM algorithm */
void bm(char p[], char t[], int m , int n)
{
    int i, j, d[256], dd[MAXPAT];

    i = j = m;
    compd(p, d, m);
    compdd(p, dd, m);

    while (i >= 1 && j <= n)
    {
        if (p[i] == t[j])
        {
            i--; 
            j--;
        }
        else
        {
            j = j + max(d[t[j]], dd[i]);
            i = m;
        }
    }

    if (i == 0) 
    {
        printf("Found at %d\n", j+1);
    }
    else 
    {
        printf("Not found\n");
    }
}

 
int main(int argc, char **argv)
{
    int m, n;
    char p[MAXPAT], t[MAXTXT];

    strcpy(p, "testtest");
    strcat(p, argv[1]);
    m = strlen(p) -1;
    printf("pattern\n");
    printf("%s (length %d)\n", p, m);

    strcpy(t, "sdjfkhsjdklfhjksksjadhf");
    strcat(t, argv[2]);
    n = strlen(t) -1;
    printf("text\n");
    printf("%s (length %d)\n", t, n);

    bm(p, t, m, n);

    return 0;
}