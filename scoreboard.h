//
//  scoreboard.h
//  groupProject(final)
//
//  Created by Caleb Beckering on 12/5/22.
//

#ifndef scoreboard_h
#define scoreboard_h
#include "font.h"


class Scoreboard{
private:
    int highScore;
    font ffont;
public:
    void saveToFile(fstream&);
    void initialize(ifstream&);
    int getHighScore();
    void setHighScore(int);
    void printHighScore(SDL_Plotter&);
};

#endif /* scoreboard_h */
