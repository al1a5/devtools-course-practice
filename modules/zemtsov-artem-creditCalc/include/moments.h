#ifndef MODULES_ZEMTSOV_ARTEM_CREDITCALC_INCLUDE_MOMENTS_H_
#define MODULES_ZEMTSOV_ARTEM_CREDITCALC_INCLUDE_MOMENTS_H_
//  moment.hpp
//  firstAttempt
//
//  Created by артем on 21.04.16.
//  Copyright © 2016 артем. All rights reserved.
//
#include <stdio.h>
#include <iostream>

class Moment{
 private:
    int day, month, year;

 public:
    Moment() {
        day = 0;
        month = 0;
        year = 0;
    }
    // get
    int getDay() { return day;}
    int getMonth() { return month; }
    int getYear() { return year; }
    // set
    void setTime(int day, int month, int year);
};
#endif  //  MODULES_ZEMTSOV_ARTEM_CREDITCALC_INCLUDE_MOMENTS_H_
