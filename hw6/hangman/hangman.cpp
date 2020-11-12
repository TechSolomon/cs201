// hangman.cpp
// Solomon Himelbloom
// 11 November 2020
// hangman example for CS 201.

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

void hangmanASCIIart(){
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
    std::vector<std::string> HANGMAN_WIKIPEDIA_CPP = { "C++", "is", "a",
		"general-purpose", "programming", "language", "that", "was",
		"developed", "by", "Bjarne", "Stroustrup", "as", "an", "extension",
		"of", "the", "C", "language,", "or", "\"C", "with", "Classes\".", "It",
		"has", "imperative,", "object-oriented", "and", "generic",
		"programming", "features,", "while", "also", "providing", "facilities",
		"for", "low-level", "memory", "manipulation.", "It", "is", "almost",
		"always", "implemented", "as", "a", "compiled", "language,", "and",
		"many", "vendors", "provide", "C++", "compilers,", "including", "the",
		"Free", "Software", "Foundation,", "Microsoft,", "Intel,", "and",
		"IBM,", "so", "it", "is", "available", "on", "many", "platforms.",
		"C++", "was", "designed", "with", "a", "bias", "toward", "system",
		"programming", "and", "embedded,", "resource-constrained", "software",
		"and", "large", "systems,", "with", "performance,", "efficiency", "and",
		"flexibility", "of", "use", "as", "its", "design", "highlights.", "C++",
		"has", "also", "been", "found", "useful", "in", "many", "other",
		"contexts,", "with", "key", "strengths", "being", "software",
		"infrastructure", "and", "resource-constrained", "applications,",
		"including", "desktop", "applications,", "servers", "(e.g.",
		"e-commerce,", "Web", "search", "or", "SQL", "servers),", "and",
		"performance-critical", "applications", "(e.g.", "telephone",
		"switches", "or", "space", "probes).", "C++", "is", "standardized",
		"by", "the", "International", "Organization", "for", "Standardization",
		"(ISO),", "with", "the", "latest", "standard", "version", "ratified",
		"and", "published", "by", "ISO", "in", "December", "2017", "as",
		"ISO/IEC", "14882:2017", "(informally", "known", "as", "C++17).", "The",
		"C++", "programming", "language", "was", "initially", "standardized",
		"in", "1998", "as", "ISO/IEC", "14882:1998,", "which", "was", "then",
		"amended", "by", "the", "C++03,", "C++11", "and", "C++14", "standards.",
		"The", "current", "C++17", "standard", "supersedes", "these", "with",
		"new", "features", "and", "an", "enlarged", "standard", "library.",
		"Before", "the", "initial", "standardization", "in", "1998,", "C++",
		"was", "developed", "by", "Danish", "computer", "scientist", "Bjarne",
		"Stroustrup", "at", "Bell", "Labs", "since", "1979", "as", "an",
		"extension", "of", "the", "C", "language;", "he", "wanted", "an",
		"efficient", "and", "flexible", "language", "similar", "to", "C",
		"that", "also", "provided", "high-level", "features", "for", "program",
		"organization.", "C++20", "is", "the", "next", "planned", "standard,",
		"keeping", "with", "the", "current", "trend", "of", "a", "new",
		"version", "every", "three", "years." };

        // todo: add map + lambda function input here.
}
