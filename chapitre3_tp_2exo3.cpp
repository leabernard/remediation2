


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void conversion(char *line, char *resultat);

int main(void)
{
    char line[255];
    char resultat[255];

    printf("Entrez votre: ") ;
    scanf("%s", line ) ;

    conversion(line, resultat);
    printf("%s", resultat) ;

    return (0);
}

void conversion(char *line, char *resultat)
{
    int maj = 0;
    int i ;
    for(i = 0; i < strlen(line); i++)
    {

        resultat[i] = line[i];
        if (resultat[i] >= 'A' && resultat[i] <= 'Z')
        {
            resultat[i] += 32;
            maj ++;
        }
    }
    resultat[i] = 0;   
    printf("le texte apres la conversion de %d lettres majuscules en minuscules :",maj);

}
