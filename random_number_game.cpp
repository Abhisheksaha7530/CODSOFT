#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
 
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;

        attempts++;

        if(guess == secretNumber){
            cout<<"congo.you guessed the correct number in"<<attempts<<endl;
          }  else if(guess<secretNumber){
            cout<<"toolow try again"<<endl;
          }
          else{
            cout<<"too high try again"<<endl;

          }
          }
          while(guess !=secretNumber);
          return 0;
        }