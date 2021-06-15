//
// Created by Roland Rządkowski on 6/8/21.
//
#pragma once

#include <string>


namespace MHRBP {

     struct Armour {
        int id;
        std::string name;
        std::string slot;
        int slot1;
        int slot2;
        int slot3;
        int defence;
        int fire_res;
        int water_res;
        int ice_res;
        int lightning_res;
        int dragon_res;
        std::string skill1;
        int skill1_l;
        std::string skill2;
        int skill1_2;
        std::string skill3;
        int skill1_3;
        std::string skill4;
        int skill1_4;
    };

     struct Decoration {
         int id;
         std::string skill;
         int skill_l;
     };


std::string helloWorld();

}
