#include "string++.h"

typedef unsigned long long ullong;

bool startsWith(const std::string& input, const std::string& phrase) {
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < phrase_size; ++i) {
        if (input[i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool startsWith(const std::string& input, const std::string& phrase, int offset) {
    ullong phrase_size = phrase.size();
    for (ullong  i = 0; i < phrase_size; ++i) {
        if (input[offset + i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool startsWithIgnoreCase(const std::string& input, const std::string& phrase);

bool startsWithIgnoreCase(const std::string& input, const std::string& phrase, int& offset);

bool endsWith(const std::string& input, const std::string& phrase) {
    ullong input_size = input.size();
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < phrase_size; ++i) {
        if (input[input_size - i] != phrase[phrase_size - i]) {
            return false;
        }
    }
    return true;
}

bool endsWith(const std::string& input, const std::string& phrase, int& offset);

bool endsWithIgnoreCase(const std::string& input, const std::string& phrase);

bool endsWithIgnoreCase(const std::string& input, const std::string& phrase, int& offset);

bool equalsIgnoreCase(const std::string& first, const std::string& second);

int firstIndexOf(const std::string& input, const std::string& phrase) {
    bool matches = true;
    ullong index = -1;
    ullong input_size = input.size();
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < input_size; ++i) {
        if (input[i] == phrase[0]) {
            matches = true;
            index = i;
            for (ullong j = 0; j < phrase_size; ++j) {
                if (input[index + j] != phrase[j]) {
                    matches = false;
                    index = -1;
                    break;
                }
            }
            if (matches == true) {
                break;
            }
        }
    }
    return index;
}

int lastIndexOf(const std::string& input, const std::string& phrase) {
    ullong index = -1;
    ullong old_index = -1;
    ullong input_size = input.size();
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < input_size; ++i) {
        if (input[i] == phrase[0]) {
            index = i;
            old_index = index;
            for (ullong j = 0; j < phrase_size; ++j) {
                if (input[index + j] != phrase[j]) {
                    index = old_index;
                    break;
                }
            }
        }
    }
    return index;
}

void replace(std::string& input, const std::string& old, const std::string& replacement) {
    ullong old_start_index;
    ullong old_end_index;
    ullong input_size = input.size();
    ullong old_size = input.size();
    ullong replacement_size = replacement.size();
    for (ullong i = 0; i < input_size; ++i) {
        if (input[i] == old[0]) {
            old_start_index = i;
            for (ullong j = 0; j < old_size; ++j) {
                if 
            }
    }
}

void replaceFirst(std::string& input, const std::string& old, const std::string& replacement);

void replaceLast(std::string& input, const std::string& old, const std::string& replacement);

void toLowerCase(std::string&);

void toUpperCase(std::string&);

// void toCamelCase(std::string, char& delimiter);

// void toInverseCamelCase(std::string, char& delimiter);

void trim(std::string&);