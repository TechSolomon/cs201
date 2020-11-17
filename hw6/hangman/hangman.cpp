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

void hangmanASCIIart() {
    std::cout << " _________     " << std::endl;
    std::cout << "|         |    " << std::endl;
    std::cout << "|         0    " << std::endl;
    std::cout << "|        /|\\  " << std::endl;
    std::cout << "|        / \\  " << std::endl;
    std::cout << "|              " << std::endl;
    std::cout << "|              " << std::endl;
}

int main() {
    // todo: add user input here.
    std::cout << "" << endl;
    std::cout << "Starting hangman game... [complete]" << endl;
    std::cout << "Generating secret word... [complete]" << endl;
    std::cout << "" << endl;
    std::cout << "Guess a letter!" << endl;
    std::cout << "" << endl;
    std::cout << "Remaining: a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z" << endl;
    std::cout << "" << endl;
    hangmanASCIIart();
    std::cout << "" << endl;
    std::cout << "" << endl;
    std::cout << "Game over!" << endl;

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
		"design", "highlights", "found", "useful", "other", "contexts",
		"strengths", "being", "software", "infrastructure", "resource", "constrained", 
		"applications", "including", "desktop", "applications", "servers", "commerce", 
		"search", "servers", "performance", "critical", "applications", "telephone", 
		"switches", "space", "probes", "standardized", "international", "organization", 
		"standardization", "latest", "standard", "version", "ratified", "published",
		"informally", "known", "programming", "language", "initially", "standardized", 
		"which", "then", "amended", "standards", "current",  "standard", "supersedes", 
		"these", "new", "features", "and", "enlarged", "standard", "library", "before", 
		"initial", "standardization", "developed", "Danish", "computer", "scientist", 
		"bell", "labs", "since", "extension", "language;", "wanted", "efficient", 
		"flexible", "language", "similar", "provided", "high", "level", "features", 
		"program", "organization", "next", "planned", "standard", "keeping", "with", 
		"current", "trend", "new", "version", "every", "three", "years" };

        // todo: add map + lambda function input here.
}
