//
//  main.cpp
//  home
//
//  Created by Lukas Fridl on 09.03.2021.
//

#include <iostream>
#include <syslog.h>
#include "board_factory.hpp"
#include "board_ex.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    try{
        auto board (BoardFactory::GetBoard(PROLIFIC, "/dev/cu.usbserial-10"));
        auto switches = board->GetSwitches();
        cout << board->GetNumberOfSwitches() << endl;
        for(Switch * relay : switches){
            relay->SetStatus(ON);
        };
    }
    catch (BoardEx ex){
        syslog(LOG_ERR, "%s",ex.what());
    }
    return 0;
}
