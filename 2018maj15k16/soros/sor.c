#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int n = atoi(argv[1]);// megkapom, hogy mennyi karaktert kell tartalmaznia egy sornak
    char c;// ebbe kérem be
    int i = 0;// hossz számláló
    FILE * fp = fopen(argv[2],"r");// file megnyitása
    while((c = fgetc(fp))!=EOF){// egy karaktert olvas be
        // ha \n jön akkor kiírja simán és a sor hosszát 0 ra állítja, ha nem akkor figyeli, hogy meddig mehet,
        // kiírja a betűket, ha azt tapasztalja, hogy i az a megengedett maximális hossza eggyezik meg, akkor sort tör
        if(c!='\n'){
            if(i==n)
            {
                i=0;
                putchar('\n');
            
            }
            putchar(c);
            i++;
        }else{
            putchar('\n');
            i=0;
        }
    }
    
    fclose(fp);// file bezárása
    return 0;
}
