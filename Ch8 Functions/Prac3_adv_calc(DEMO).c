#include <stdio.h>
int menu (void)
{
    int n;
    printf ("1. Factorial \n");
    printf ("2. sign \n");
    printf ("3. log (base 10) \n");
    printf ("4. Square root \n");
    printf ("5. Permutauion (nPr)\n");
    printf ("6. Combination (nCr)\n");
    printf ("7. END \n"); 
    printf (" Please Select : ");
    scanf ("%d", &n);
    return n;
}
void factorial() {return;}
void logBase10() {return;}
void sine() {return;}

int main (void)
{
        while (1){
            switch (menu()){
                case 1 : factorial(); break;
                case 2 : sine(); break;
                case 3 : logBase10(); break;
                case 7 : printf(" Quitting .\n"); return 0;
                default : printf (" Bad Choice .\n"); break ;
            }
        }
}
