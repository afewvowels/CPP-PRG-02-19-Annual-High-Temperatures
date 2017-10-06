//
//  main.cpp
//  PRG-2-19-Annual-High-Temperatures
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The average July high temperature is 85 degrees Fahrenheit in New York City, 88 degrees
//  Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix. Write a program that
//  calculates and reports what the new average July high temperature would be for each of
//  these cities if temperatures rise by 2 percent.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constants
    const float FLT_TEMP_NYC = 85.0f;
    const float FLT_TEMP_DENVER = 88.0f;
    const float FLT_TEMP_PHOENIX = 106.0f;
    const float FLT_TEMP_INCREASE = 0.02f;
    
    // Declare variables
    float fltTempNewNYC;
    float fltTempNewDenver;
    float fltTempNewPhoenix;
    
    // Calculate new temperature values
    fltTempNewNYC = FLT_TEMP_NYC * FLT_TEMP_INCREASE + FLT_TEMP_NYC;
    fltTempNewDenver = FLT_TEMP_DENVER * FLT_TEMP_INCREASE + FLT_TEMP_DENVER;
    fltTempNewPhoenix = FLT_TEMP_PHOENIX * FLT_TEMP_INCREASE + FLT_TEMP_PHOENIX;
    
    // Configure decimal to 2 percent
    cout << setprecision(2) << fixed << showpoint;
    
    // Output values to console
    cout << "New York City: " << fltTempNewNYC << " Fahrenheit\n";
    cout << "Denver: " << fltTempNewDenver << " Fahrenheit\n";
    cout << "Phoenix: " << fltTempNewPhoenix << " Fahrenheit\n";
    
    return 0;
}
