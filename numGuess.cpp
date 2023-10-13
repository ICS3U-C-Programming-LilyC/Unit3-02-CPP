// Copyright (c) 2021 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/13/2023
// This program asks the user for a number
// guess. It will then
// tell them if they guessed
// correctly or incorrectly.
# include <iostream>

int main() {
    // Declaring constant for the correct guess.
    const int CORRECT_GUESS = 7;

    // Declaring variable for the user's guess.
    int userGuess;

    // Getting the user's number guess.
    std::cout<< "Enter a number between 0-9 for your guess: ";
    std::cin >> userGuess;

    // Using If Then statement statement
    // to tell the user if they guessed correctly.
    if (userGuess == CORRECT_GUESS) {
        std::cout << "You guessed correctly! The number is 7.";
    }

    // Using If Then statement to tell the user if they guessed incorrectly.
    if (userGuess != CORRECT_GUESS) {
        std::cout << "You guessed incorrectly. Please try again!";
    }
}
