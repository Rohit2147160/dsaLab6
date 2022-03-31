//Rohit Priyadarshi
//2147160
//3MCA A

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int x[100], y[100];
    int i, j, result = 0;
    int totalSearch, foundElement;
    float avg = 0.0;
    printf("\n Generating Array Elements\n");
    for (i = 0; i < 100; i++)
    {
        x[i] = (rand() % 200 + 1);
        printf("%d\t", x[i]);
    }
    for (i = 0; i < 100; i++)
    {
        totalSearch++;
        y[i] = 0;
        int val = (rand() % 200 + 1);
        printf("\n%d Searching Elements: %d", i, val);
        for (j = 0; j < 100; j++)
        {
            y[i]++;
            if (val == y[i])
            {
                foundElement++;
//                printf(" Found after %d\t", y[j]);
                break;
            }
        }
    }
    avg = ((totalSearch / foundElement) * 100);
    //	printf("%d\n",totalSearch);
    printf("\n %d %d %f ", totalSearch, foundElement, avg);
}
