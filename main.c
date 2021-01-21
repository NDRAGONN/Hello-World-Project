#include <stdio.h>
void callingNames(double a, double b, double c, double max);
int main() {
    double a=23;
    double b=21.6;
    double c=21.75;
    double max=0;
    if (a>max)
        max=a;
    if (b>max)
        max=b;
    if (c>max)
        max=c;
    callingNames(a,b,c,max);
}
void callingNames(double a,double b, double c, double max){
    if ((max=a) && (b>c)) {
        printf("Nouf Alrumaih, Emmanouil Katramados, Stefanos David Georgiou");
    }
    else if((max= a) && (c>b)) {
        printf("Nouf Alrumaih, Stefanos David Georgiou, Emmanouil Katramados,");
    }
    else if ((max= b) && (a>c)) {
        printf("Emmanouil Katramados, Nouf Alrumaih, Stefanos David Georgiou");
    }
    else if ((max=b) && (c>a)) {
        printf("Emmanouil Katramados, Stefanos David Georgiou, Nouf Alrumaih,");
    }
    else if ((max=c) && (b>a)) {
        printf("Stefanos David Georgiou, Emmanouil Katramados, Nouf Alrumaih");
    }
    else if ((max=c) && (a>b)) {
        printf("Stefanos David Georgiou, Nouf Alrumaih, Emmanouil Katramados");
    }
}