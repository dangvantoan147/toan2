#include <stdio.h>
int main() 
{  
    int choice;
    printf("\t\t\t\tMENU");
    printf("\n===================================");
    printf("\n1. CF");
    printf("\n2. C");
    printf("\n3. HDJ");
    printf("\n4. DreamWeaver");
    printf("\n5. RDBMS");
    printf("\n6. Learn Java By Example");
    printf("\n===================================");
     printf("\nChon: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: 
            printf("\nCF");
            break;
        case 2: 
            printf("\nC");
            break;
        case 3: 
            printf("\nHDJ");
            break;
        case 4: 
            printf("\nDreamWeaver");
            break;
        case 5: 
            printf("\nRDBMS");
            break;
        case 6: 
            printf("\nLearn Java By Example");
            break;
        default:
        	printf("Invalid <-> Choice");
    }
   
    return 0;
}
