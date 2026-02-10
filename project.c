#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    

    // Intialise the random number generator
    srand(time(0));
    int random_number = rand() % 100 + 1;  // Random number between 1 and 100

    // printf(" Random number is %d\n ", random_number);
    
    int guessed_number;
    int attempts = 0 ;
    
    printf("Guessed Number\n");
    do
    {
        
        scanf("%d",&guessed_number);

        if (guessed_number>random_number)
        {
            printf("Please Guessed lower Number\n");
        }
        else if (guessed_number<random_number)
        {
           printf("Please Guessed Highest Number\n");
        }
        else{
            printf("CONGRATSS !!\n");
        }
        attempts++;
        
        
    } while ( guessed_number != random_number);
    printf("You Guessed the number in %d attempts", attempts);
    

    
    return 0;
}

