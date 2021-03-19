//
//  board.h
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#ifndef board_h
#define board_h

#include "switch.hpp"
#include <vector>
#include <string>

using namespace std;

class Board
{
public:
    Board(const int& NumberOfSwitches);
    int GetNumberOfSwitches();
    void SetNumberOfSwitches(const int& NumberOfSwitches);
    vector<Switch*> GetSwitches();
    ~Board();
protected:
    int number_of_switches;
    string bits;
    vector<Switch*> switches;
    virtual void InitSwitches();
};

#endif /* board_h */
