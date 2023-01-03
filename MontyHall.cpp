/*
Monty Hall was a game show host years ago. The contestant would have 3 doors to
choose from. One door had $$ and 2 had goats. The contestant would choose a
door. Monty Hall would then show a door following these rules: Not a door the
contestant chose, and not the winning door. Monty ALWAYS showed a goat. He'd
then ask the contestant if he/she wanted to change doors. After the contestant
made his/her final choice, Monty Hall would open the chosen door.

Your job here is to simulate this. Make it automatic. Randomly choose the
winning door. Then randomly choose one of the 3 doors as the contestant choice.
Run this at least 100,000 times to calculate an accurate probability. You will
be looking for the odds of winning if the contestant switches doors when given
the opportunity. Also compute the probability of winning if he/she doesn't
switch. 

In class, we will discuss the probability of each occurring and why. In
your program, I'd like you to put in the comment section at the top your guesses 
as to the probability of winning if the contestant switches doors or not. Your
grade will not depend on this number at all, so please be honest and type in
your guess BEFORE running the program.

Guess: Odds of switching are probably higher than 50%, making it the smarter choice.
*/

#include <iostream>
using namespace std;

int main(){
    int iterations = 0, swap = 0, stay = 0;
    int doorPicked, doorLeft, doorOpened, doorPrize;
    srand(time(NULL));

    while (iterations < 100000) {
        doorPicked = rand() % 3 + 1; doorOpened = rand() % 3 + 1; doorPrize = rand() % 3 + 1;

        while (doorOpened == doorPicked || doorOpened == doorPrize) {
            doorOpened = rand() % 3 + 1;
        }

        doorLeft = rand() % 3 + 1;

        while (doorLeft == doorPicked || doorLeft == doorOpened) {
            doorLeft = rand() % 3 + 1;
        }

        doorPicked = doorLeft;

        if (doorPicked == doorPrize) {
            swap++;
        }
        else {
            stay++;
        }

        iterations++;
    }

    float swappingOdds = (swap / (float)iterations) * 100;
    float stayingOdds  = (stay / (float)iterations) * 100;
    
    cout << "Chance of success from swapping: " << swappingOdds << '%' << endl;
    cout << "Chance of success from staying: " << stayingOdds << '%' << endl;

    return 0;
}
