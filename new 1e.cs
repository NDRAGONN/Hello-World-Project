#include <stdio.h>
// #include <stdlib.h>

void youngest () {
    printf (" Emmanouil Katramados, Stefanos David Georgiou, Nouf Alrumaih \n");
}
void middle() {
    printf("Stefanos David Georgiou, Emmanouil Katramados, Nouf Alrumaih ");
}
void oldest (){
    printf("Nouf Alrumaih, Stefanos David Georgiou, Emmanouil Katramados");
}

int main() {
    
    int Nouf = 23; int Mano = 21; int Stefanos = 22;

    printf (" Emmanouil Katramados, Stefanos David Georgiou, Nouf Alrumaih \n");

    if (Mano < Stefanos && Mano < Nouf){
        youngest();
        
    }

    else if (Stefanos > Mano && Stefanos < Nouf){
        middle();
        
        }
    else {
        oldest();
        
    }



    return 0;
}
