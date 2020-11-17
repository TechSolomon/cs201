// hangman.cpp
// Solomon Himelbloom
// 11 November 2020
// Hangman example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

void startHangmanGame() {
    std::cout << "\nStarting hangman game... " << endl;
}

void generateSecretWord() {
    std::cout << "Generating secret word... " << endl;

	/**
     * First two paragraphs of C++ on Wikipedia.org
     * (https://en.wikipedia.org/wiki/C%2B%2B)
     */
    std::vector<std::string> HANGMAN_WIKIPEDIA_CPP = { 
		"programming", "language", "that", "developed", "extension", "language", 
		"classes", "imperative", "object", "oriented", "generic", "programming", 
		"features", "while", "also", "providing", "facilities", "level", "memory", 
		"manipulation", "almost", "always", "implemented", "compiled", "language", 
		"many", "vendors", "provide",  "compilers", "including", "free", "software", 
		"foundation", "microsoft", "intel", "available", "platforms", "designed", "bias", 
		"toward", "system", "programming", "embedded", "resource", "constrained", 
		"software", "large", "systems", "performance", "efficiency", "flexibility", 
		"design", "highlights", "found", "useful", "other", "contexts", "strengths", 
		"being", "software", "infrastructure", "resource", "constrained", "applications", 
		"including", "desktop", "applications", "servers", "commerce", "search", "servers", 
		"performance", "critical", "applications", "telephone", "switches", "space", 
		"probes", "standardized", "international", "organization",  "standardization", 
		"latest", "standard", "version", "ratified", "published", "informally", "known", 
		"programming", "language", "initially", "standardized", "which", "then", "amended", 
		"standards", "current",  "standard", "supersedes", "these", "new", "features", 
		"enlarged", "standard", "library", "before", "initial", "standardization", 
		"developed", "computer", "scientist", "bell", "labs", "since", "extension", 
		"language", "wanted", "efficient", "flexible", "language", "similar", "provided", 
		"high", "level", "features", "program", "organization", "next", "planned", 
		"standard", "keeping", "current", "trend", "version", "every", "three", "years" };

		string sample_random_word = "computer";
		// cout << sample_word << endl;
}

void hangmanUserInput() {
	string guess = "";
	string letters = "abcdefghijklmnopqrstuvwxyz";
    std::cout << "\nGuess a letter: ";
	cin >> guess;
	// letters.erase(remove(letters.begin(), letters.end(), guess), letters.end());
    std::cout << "\nRemaining: " << letters << endl;
}

void hangmanASCIIart() {
	int totalGuessCount = 0;
	
    std::cout << " _________     " << std::endl;
    std::cout << "|         |    " << std::endl;
    std::cout << "|         0    " << std::endl;
    std::cout << "|        /|\\  " << std::endl;
    std::cout << "|        / \\  " << std::endl;
    std::cout << "|              " << std::endl;
    std::cout << "|              " << std::endl;
	std::cout << "\n" << endl;
    std::cout << "Game over – thanks for playing!" << endl;
}

int main() {
	startHangmanGame();
	generateSecretWord();
	hangmanUserInput();
	hangmanASCIIart();
}
