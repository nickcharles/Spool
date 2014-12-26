#include "string++.h"

// FUNCTIONALITY ONLY, NOT YET FINISHED
// THIS ALL NEEDS TO BE UPDATED TO USE ITERATORS AND STRING MEMBER VALUES

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

bool startsWithIgnoreCase(const std::string& input, const std::string& phrase) {
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < phrase_size; ++i) {
        if (std::toLower(input[i]) != std::toLower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool startsWithIgnoreCase(const std::string& input, const std::string& phrase, int offset) {
    ullong phrase_size = phrase.size();
    for (ullong  i = 0; i < phrase_size; ++i) {
        if (std::toLower(input[offset + i]) != std::toLower(phrase[i])) {
            return false;
        }
    }
    return true;
}

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

bool endsWith(const std::string& input, const std::string& phrase, int offset) {
    ullong input_size = input.size();
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < phrase_size; ++i) {
        if (input[input_size - offset - i] != phrase[phrase_size - i]) {
            return false;
        }
    }
    return true;
}

bool endsWithIgnoreCase(const std::string& input, const std::string& phrase) {
    ullong input_size = input.size();
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < phrase_size; ++i) {
        if (std::toLower(input[input_size - i]) != std::toLower(phrase[phrase_size - i])) {
            return false;
        }
    }
    return true;
}

bool endsWithIgnoreCase(const std::string& input, const std::string& phrase, int offset) {
    ullong input_size = input.size();
    ullong phrase_size = phrase.size();
    for (ullong i = 0; i < phrase_size; ++i) {
        if (std::toLower(input[input_size - offset - i]) != std::toLower(phrase[phrase_size - i])) {
            return false;
        }
    }
    return true;
}


bool equalsIgnoreCase(const std::string& first, const std::string& second) {
    ullong first_size = first.size();
    ullong second_size = second.size();
    for (ullong i = 0; i < first_size; ++i) {
        if (std::toLower(first[i]) != std::toLower(second[i])) {
            return false;
        }
    }
    return true;
}

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
            }
        }
    }
    return;
}

void replaceFirst(std::string& input, const std::string& old, const std::string& replacement) {
    return;
}

void replaceLast(std::string& input, const std::string& old, const std::string& replacement) {
    return;
}

void toLowerCase(std::string& input) {
    ullong input_size = input.size();
    for (ullong i = 0; i < input_size; ++i) {
        input[i] = std::toLower(input[i]);
    }
    return;
}

void toUpperCase(std::string& input) {
    ullong input_size = input.size();
    for (ullong i = 0; i < input_size; ++i) {
        input[i] = std::toUpper(input[i]);
    }
    return;
}

// void toCamelCase(std::string, char& delimiter);

// void toInverseCamelCase(std::string, char& delimiter);

void trimWhitespace(std::string& input) {
    ullong input_size = input.size();
    for (ullong i = 0; i < input_size; ++i) {
        input[i] = std::toUpper(input[i]);
    }
    for (ullong i = 0; i < input_size; ++i) {
        input[i] = std::toUpper(input[i]);
    }
    return;
}