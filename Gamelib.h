#ifndef GAMELIB_H
#define GAMELIB_H

namespace GameSpace{
    enum EXIT_STATUS{
        SUCCESS,
        CONV_ERROR,
        RANGE_ERROR
    };

    enum GAME_STATUS{
        ONGOING,
        LOSE,
        WIN
    };

    struct Game
    {
        /* data */
        int numCols;
    };

}

#endif