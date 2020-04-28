#include "antraste_vector.h"
#include "antraste_list.h"
#include "antraste_deque.h"
#include "antraste.h"
#include "Timer.h"

int main ()
{
    char konteineris1; std::cout <<std::endl;
    Studentas1 lol; 
    Timer t;
    std::cout << "vector (v) / list (l) / deque (d)? --> "; std::cin >> konteineris1;
    konteineris (konteineris1, 'v', 'l', 'd');
    if (konteineris1=='v')
    {
        vektorius();
        std::cout << t.elapsed() <<std::endl;
    }
     
     else if (konteineris1=='l')
     {
         listas();
     }
          
          else if (konteineris1=='d')
          {
               kazkas_is_d_raides();
          }
            
    return 0;
}
