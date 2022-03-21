/*
 * @file personal_info.h
 * @Viktoriya Petrova @vpetrova971
 * @brief
 * @version 0.1
 * @date 2022-03-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "personal_info.h"
int main(){
    personal_info person;

    person.read_personal_info();
    person.display_personal_info();

    return 0;
}