// main.cpp
// Solomon Himelbloom
// 7 November 2020 (Final Project)
// Word count and text readability for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

void key_value_pairs() {
    map<string, int> m;
    m["Kodiak"] = 99615;
    m["Fairbanks"] = 99775;
    m["UAF"] = 10011;
    m["Alaska"] = 907;
    m["United States"] = 50;
    m.erase("UAF");

    for (const auto & p : m) {
        auto k = p.first; // Key
        auto v = p.second; // Associated Value
        cout << "Key: " << k << " | Value: " << v;
        cout << endl;
    }
}

void text_format() {
    int placeholder = 999;
    const string spacer = " ..... ";
    cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
}

void count_statistics() {
    int words = 107;
    int characters = 818;
    int paragraphs = 1;
    int sentences = 4;

    cout << "\nCOUNTS" << endl;
    cout << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << characters << endl;
    cout << "Paragraphs: " << paragraphs << endl;
    cout << "Sentences: " << sentences << endl;
}

void average_statistics() {
    int sentences_per_paragraph = 4;
    float words_per_sentence = 26.7;
    double characters_per_word = 6.7;

    cout << "\nAVERAGES" << endl;
    cout << endl;
    cout << "Sentences per Paragraph: " << sentences_per_paragraph << endl;
    cout << "Words per Sentence: " << words_per_sentence << endl;
    cout << "Characters per Word: " << characters_per_word << endl;
}

void readability_statistics() {
    int reading_ease = 0;
    float grade_level = 24.2;
    double passive_sentences = 25;

    cout << "\nREADABILITY" << endl;
    cout << endl;
    cout << "Flesh Reading Ease: " << reading_ease << endl;
    cout << "Flesh-Kincaid Grade Level: " << grade_level << endl;
    cout << "Passive Sentences: " << passive_sentences << "%" << endl;
}

int main() {
    count_statistics();
    text_format();
    average_statistics();
    text_format();
    readability_statistics();
}
