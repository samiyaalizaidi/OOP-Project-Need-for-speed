#include <SDL.h>
//#include  "unit.hpp"
#include "drawing.hpp"
#include<vector>
#include<list>

class clouds {
    //friend class RunningMan;
    SDL_Rect srcRect, moverRect;
    public:
    int count = 0 ;
    int frame = 0 ;
    void draw();
    void move();
    clouds();
    clouds(int, int);
}; 