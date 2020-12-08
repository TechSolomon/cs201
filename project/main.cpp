// main.cpp
// Solomon Himelbloom
// 7 November 2020 (Final Project)
// Word count and text readability for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <random>
#include <fstream>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

#include "statistics.hpp"

/**
 * Read a file and print it to the console.
 * @param filename name of the file
 * @return True if the file can be read, otherwise false.
 */
bool readFile(const string & filename) {

	ifstream file(filename);

    // Read the requested file.
	while(true) {
		string new_line;
		getline(file, new_line);

		if (!file) {
			if (file.eof()) {
				std::cout << "Finished reading file." << std::endl;
				return true;
			}

			else {
				std::cout << "Error during transit." << std::endl;
				return false;
			}

			break; // Break or return as required.
		}

		// Process text in each line as required.
		std::cout << new_line << std::endl;
	}

	if (!file) {
		std::cout << "Cannot open file." << std::endl;
		return false;
	}

	cout << filename;
	return true;
}

// TODO: Strip special characters and symbols from writing sample.
const std::string stripSymbols = ".,:;+-*/=()[]{}<>!?@#$%^&*()";

// Count the total amount of words in a given text file.
void countWords(const string & filename) {
    ifstream file(filename);
    if (!file) {
        if (file.eof()) {
            std::cout << "Finished reading file." << std::endl;
        }
        else {
            std::cout << "Error during transit." << std::endl;
            exit(1);
        }
    }

    map<string, int> total;
    string word;

    while (file >> word) {
        if (total.find(word) != total.end()) {
            total[word]++;
        }

        else {
            total[word] = 1;
        }
    }
    
    map<string, int>::iterator i;
    for (i = total.begin(); i != total.end(); i++) {
        cout << i -> second << "            " 
             << i -> first << "\n";
    }
}

// Initial word count values.
void countStatistics() {
    int words = 0;
    int lines = 0;
    int characters = 0;
    int paragraphs = 0;
    int sentences = 0;

    cout << "\nCOUNTS" << endl;
    cout << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << characters << endl;
    cout << "Paragraphs: " << paragraphs << endl;
    cout << "Sentences: " << sentences << endl;
}

// Detailed calculations from countStatistics().
void averageStatistics() {
    int sentences_per_paragraph = 0;
    float words_per_sentence = 00.0;
    double characters_per_word = 0.0;

    cout << "\nAVERAGES" << endl;
    cout << endl;
    cout << "Sentences per Paragraph: " << sentences_per_paragraph << endl;
    cout << "Words per Sentence: " << words_per_sentence << endl;
    cout << "Characters per Word: " << characters_per_word << endl;
}

// Final readability scores from the number of syllables in each word.
void readabilityStatistics() {
    int reading_ease = 0;
    float grade_level = 00.0;
    double passive_sentences = 0;

    cout << "\nREADABILITY" << endl;
    cout << endl;
    cout << "Flesh Reading Ease: " << reading_ease << endl;
    cout << "Flesh-Kincaid Grade Level: " << grade_level << endl;
    cout << "Passive Sentences: " << passive_sentences << "%" << endl;
}

// Improve the overall readability of the printed values.
void textFormat() {
    int placeholder = 999;
    const string spacer = " ..... ";
    cout << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    cout << endl;
}

int main() {
    // File to read and write.
    const string fname = "writing-samples/university-of-alaska.txt";

    cout << "Reading the requested file & printing contents below:" << endl;
	cout << endl;
	bool readsuccess = readFile(fname);

    textFormat();
    tableFormat();
    countWords(fname);
    textFormat();

    // Wait for user input.
    cout << "PRESS ENTER ";
    while (cin.get() != '\n');

    return 0;
}
