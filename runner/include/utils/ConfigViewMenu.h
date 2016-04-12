//
// Created by Guillaume on 03/04/2016.
//

#ifndef RUNNER_CONFIGVIEWMENU_H
#define RUNNER_CONFIGVIEWMENU_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ConfigViewMenu{
public:
    static string pointeur(){
        return "->";
    }

    static vector<string> options(){
        vector<string> options;
        options.push_back("Play");
        options.push_back("Help");
        options.push_back("About");
        return options;
    }
};

#endif //RUNNER_CONFIGVIEWMENU_H
