// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 1, 2022
// This program asks the user for the subtotal
// then, calculates and displays the total cost
// including tax.


#include <iostream>
#include <cmath>
#include <iomanip>


// declare constants

const float HST_BC = 12;

// variable for tax and total

float tax;
float total;


int main() {
// ask for subtotal 
  std::cout << "Enter the subtotal $";
  float subtotal;
  std::cin >> subtotal;

// doing calculation

  tax =  subtotal *  HST_BC / 100;
  total = subtotal + tax;
  std::cout<<" "<<std::endl;
// display the total cost
  std::cout << std::fixed << std::setprecision(2) << "Your subtotal was $" 
  <<subtotal << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "The HST is $"<< tax <<
  " and the total price is $" << total
  << std::endl;
}
