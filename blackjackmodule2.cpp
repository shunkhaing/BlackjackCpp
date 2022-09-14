//Shun Lae Thawtar Khaing
//console blackjack game(beginner)
//CS110B Module 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //generate random for first 2 cards
    srand(time(NULL));
    int random1 = rand() % 10 + 1,
    random2 = rand() % 10 + 1;

    int firstCard = random1,
    secondCard = random2,
    sum = 0, 
    newCard;
    char tryAnotherCard = 'y', 
    playAgain = 'y';


    while(playAgain == 'y')
    {
        cout << "Cards: " << firstCard << ", " << secondCard << endl;

        sum = firstCard + secondCard;

        cout << "Total- " << sum << endl;

        //try another card (not in loop)
        cout << "Try another card? (y/n) ";
        cin >> tryAnotherCard;
        cout << endl;

        //try another card (loop)
        while(tryAnotherCard != 'n' && sum < 22)
        {
            //generate random for new card
            newCard = rand() % 10 + 1;

            cout << "Another card: " << newCard << endl;

            sum += newCard; 

            cout << "Total- " << sum << endl;
            cout << endl;

            //Blackjack or Bust
            if(sum == 21)
            {
                cout << "Blackjack!" << endl;
            }
            else if(sum > 21)
            {
                cout << "Bust!" << endl;
            }

            //loop condition
            if(sum < 21)
            {
            
            cout << "Try another card? (y/n) ";
            cin >> tryAnotherCard;
            cout << endl;
            }

        }

        //Another round?
        cout << "Play Again?(y/n)" ;
        cin >> playAgain;
        cout << endl;

    }

    return 0;
}



/* SAMPLE OUTPUT
Cards: 3, 5
Total- 8
Try another card? (y/n) y

Another card: 2
Total- 10

Try another card? (y/n) y

Another card: 3
Total- 13

Try another card? (y/n) y

Another card: 9
Total- 22

Bust!
Play Again?(y/n)y

Cards: 3, 5
Total- 8
Try another card? (y/n) y

Another card: 2
Total- 10

Try another card? (y/n) y

Another card: 9
Total- 19

Try another card? (y/n) y

Another card: 4
Total- 23

Bust!
Play Again?(y/n)n
*/










