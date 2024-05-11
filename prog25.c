//12.11
#include <stdio.h>
int main()
{
    int pt, st, pv, sv;
    printf ("Enter the primary Voltage:") ;
    scanf ( "%d ", &pv);
    printf ("\nEnter the number of primary turns:") ;
    scanf ("%d ", &pt) ;
    printf ( ")nEnter the number of secondary turns:") :
    scanf ( "%d ", &st) ;
    Sv = (pv * st) / pt;
    printf ( "\nSecondary voltage is %d volts", sv);
    return 0;
}