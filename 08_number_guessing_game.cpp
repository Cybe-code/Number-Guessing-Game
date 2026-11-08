#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    int guess, attempts= 0;
    srand((unsigned) time(NULL));
    int secret= rand()% 100+ 1;
    cout<< "enter number between 1-100: \n";

    while(1) 
    {
        cin>> guess;
        attempts++;
        
        if(guess< secret)
            cout<< "enter large number!!\n";
        else if(guess> secret)
            cout<< "enter smaller number!!\n";
        else 
        {
            cout<< "correct number."<< " you gusse in "<< attempts<< " time";
            break;
        }
        if((guess> 100)||(guess< 0))
        {
            cout<< "you enter incorrect number!!\n";
            break;
        }
    }
    
    return 0;
}
