#include <iostream>
#include <ctime>
#include <cstdlib>
int answer;
class rock
{
	public:

    void print()
    {
        std::cout << "choose rock paper or scissors (1,2 or 3)" << std::endl;
    }

    void accept()
    {
        std::cin >> answer;
    }
};


int main()
{
    rock r;
    int cpu;
    char again;
    bool draw;
    bool quit = 1;
    bool lost = 0; 

    while (quit && !lost)
    {
       
    
    srand(time(0));
    cpu = rand() %3 + 1;
    r.print();
    r.accept();
    
    if (answer == cpu)
    {   draw = 1;
        std::cout << "draw" <<std::endl;
        std::cout << "do you want to play again (y/n)" <<std::endl;
        std::cin >> again;

        if(again == 'y')
          quit = 1;
        if(again == 'n')
          quit = 0;

    }
    
    if (answer == 1 && cpu == 2)
    {
        std::cout << "you lose" <<std::endl;
        lost = 1; 
    }
    

    if (answer == 1 && cpu == 3)
    {
        std::cout << "you win" <<std::endl;
        exit(0);
    }

    if (answer == 3 && cpu == 1)
    {
        std::cout << "you lose" <<std::endl;
        lost = 1; 
    }

    if (answer == 2 && cpu == 3)
    {
        std::cout << "you lose" <<std::endl;
        lost = 1; 
    }

    if (answer == 2 && cpu == 1)
    {
        std::cout << "you win" <<std::endl;
        exit(0);

    }

    if (answer == 3 && cpu == 2)
    {
        std::cout << "you win" <<std::endl;
        exit(0);

    }
}

    return 0;
}