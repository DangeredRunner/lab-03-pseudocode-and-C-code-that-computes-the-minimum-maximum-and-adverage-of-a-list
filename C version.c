
#include <stdio.h>

int main()
{
    int n,min,max,avg;
    printf ("How many elements does the list have?\n");
    scanf ("%d",&n);
    if (n!=0) {
    int v[n];
    printf ("The elements in the list are:");
    for (int i=0;i<n;i++) {
        scanf ("%d",&v[i]);
    }
    min=v[0];
    max=v[0];
    avg=v[0];
    for (int i=1;i<n;i++) {
        avg+=v[i];
        if (v[i]>max) max=v[i];
        if (v[i]<min) min=v[i];
    }
    printf ("The minimum is %d\nThe maximum is %d\nThe average is %d",max,min,avg/n);
    } else printf ("The list is empty -_-");
}