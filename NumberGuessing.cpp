#include<iostream>
#include<ctime>

int main()
{
    srand(time(NULL));

    int num = rand() % 100 +1;

    int guess;
    int tries =0;

    std::cout << "*************  NUMBER GUESSING GAME  *****************\n\n";

    do{
        std::cout << "Guess a random Number between 1-100 : ";
        std::cin >> guess;
        tries++;

        if(guess > num)
        {
            std::cout << "Number is Lower\n";
        }

        else if(guess < num)
        {
            std::cout << "Number is Higher\n";
        }

        else
        {
            std::cout << "##### You guessed Correct #####" << "  You tried for  "<< tries << " Times \n";
        }

    }while(guess != num);


    std::cout << "\n\n********************************************************\n";
}