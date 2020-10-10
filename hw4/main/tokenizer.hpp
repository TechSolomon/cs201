// tokenizer.hpp
// Solomon Himelbloom
// 7 October 2020
// Tokenizer [header file] example for CS 201.

#ifndef TOKENIZER_HPP_
#define TOKENIZER_HPP_

#include <string>

bool ReadLine(std::string& str);

unsigned StringToTokenWS(const std::string &input, std::vector<std::string> &tokens);

void AnalyzeTokens(const std::vector<std::string> &tokens);

#endif /* TOKENIZER_HPP_ */