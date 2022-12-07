
//
//  gameObject.cpp
//  SDL Practice
//
//  Created by Caleb Beckering on 11/16/22.
//

#include <stdio.h>
#include "gameObject.h"

Game::Game(){
    currState = START;
}

GameState Game::checkState(){
    return currState;
}

void Game::changeState(GameState n){
    currState = n;
}

void Game::addPoint(){
    score++;
}
int Game::getScore(){
    return score;
}

void Game::displayYourScore(SDL_Plotter& g){
    //ffont.printFontLetter("Y.txt", 100, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("O.txt", 200, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("U.txt", 300, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("R.txt", 400, 600, g, 3, 0, 0, 0);
    
    ffont.printFontLetter("S.txt", 500, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("C.txt", 600, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("O.txt", 700, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("R.txt", 800, 600, g, 3, 0, 0, 0);
    ffont.printFontLetter("E.txt", 900, 600, g, 3, 0, 0, 0);
    
    if(score < 10){
        stringstream ss;
        int num = score;
        ss << num;
        string name = ss.str();
        ffont.printFont(name + ".txt", 520, 702, g, 3, 0, 0, 0);
        ss.flush();
        
    }
    else if(score >= 10 && (score < 100)){
        stringstream ss;
        int num = score;
        ss << num;
        string number = ss.str();
        char first = number.at(0);
        char second = number.at(1);
        string fname = "";
        string fname1 = "";
        fname = fname + first;
        fname.append(".txt");
        fname1 = fname1 + second;
        fname1.append(".txt");
        ffont.printFont(fname, 490, 702, g, 3, 0, 0, 0);
        ffont.printFont(fname1, 535, 702, g, 3, 0, 0, 0);
        ss.flush();
    }
    else{
        stringstream ss;
        int num = score;
        ss << num;
        string number = ss.str();
        char first = number.at(0);
        char second = number.at(1);
        char third = number.at(3);
        string fname = "";
        string fname1 = "";
        string fname2 = "";
        fname = fname + first;
        fname.append(".txt");
        fname1 = fname1 + second;
        fname1.append(".txt");
        fname2 = fname2 + third;
        fname2.append(".txt");
        ffont.printFont(fname, 490, 702, g, 3, 0, 0, 0);
        ffont.printFont(fname1, 535, 702, g, 3, 0, 0, 0);
        ffont.printFont(fname2, 535, 702, g, 3, 0, 0, 0);
        ss.flush();
    }
}
