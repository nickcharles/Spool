#include "spool.h"

using std::size_t;
using std::string;

bool sp_contains(const string& input, const string& phrase) {
    if (input.find(phrase) == string::npos) {
        return false;
    }
    return true;
}

bool sp_containsAfter(const string& input, const string& phrase, size_t offset) {
    if (input.find(phrase, offset) == string::npos) {
        return false;
    }
    return true;
}

bool sp_containsBefore(const string& input, const string& phrase, size_t offset) {
    if (input.rfind(phrase, offset) == string::npos) {
        return false;
    }
    return true;
}

bool sp_startsWith(const string& input, const string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (input[i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool sp_startsWith(const string& input, const string& phrase, size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (size_t  i = 0; i < phrase.size(); ++i) {
        if (input[offset + i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool sp_startsWithIgnoreCase(const string& input, const string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (tolower(input[i]) != tolower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool sp_startsWithIgnoreCase(const string& input, const string& phrase, size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (size_t  i = 0; i < phrase.size(); ++i) {
        if (tolower(input[offset + i]) != tolower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool sp_endsWith(const string& input, const string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (input[input.size() - i] != phrase[phrase.size() - i]) {
            return false;
        }
    }
    return true;
}

bool sp_endsWith(const string& input, const string& phrase, size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (input[input.size() - offset - i] != phrase[phrase.size() - i]) {
            return false;
        }
    }
    return true;
}

bool sp_endsWithIgnoreCase(const string& input, const string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (tolower(input[input.size() - i]) != tolower(phrase[phrase.size() - i])) {
            return false;
        }
    }
    return true;
}

bool sp_endsWithIgnoreCase(const string& input, const string& phrase, size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (tolower(input[input.size() - offset - i]) != tolower(phrase[phrase.size() - i])) {
            return false;
        }
    }
    return true;
}


bool sp_equalsIgnoreCase(const string& first, const string& second) {
    if (first.size() != second.size()) {
        return false;
    }
    for (size_t i = 0; i < first.size(); ++i) {
        if (tolower(first[i]) != tolower(second[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isAlnum(const string& input) {
    if (input.empty()) {
        return false;
    }
    for (size_t i = 0; i < input.size(); ++i) {
        if (!isalnum(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isAlpha(const string& input) {
    if (input.empty()) {
        return false;
    }
    for (size_t i = 0; i < input.size(); ++i) {
        if (!isalpha(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isDigit(const string& input) {
    if (input.empty()) {
        return false;
    }
    for (size_t i = 0; i < input.size(); ++i) {
        if (!isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isLower(const string& input) {
    if (input.empty()) {
        return false;
    }
    for (size_t i = 0; i < input.size(); ++i) {
        if (!islower(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isUpper(const string& input) {
    if (input.empty()) {
        return false;
    }
    for (size_t i = 0; i < input.size(); ++i) {
        if (!isupper(input[i])) {
            return false;
        }
    }
    return true;
}

string sp_replace(string input, const string& target, const string& replacement) {
    if (target.size() > input.size()) {
        return input;
    }
    size_t pos = input.find(target);
    while (pos != string::npos) {
        input = input.replace(pos, target.size(), replacement);
        pos = input.find(target);
    }
    return input;
}

string sp_replaceFirst(string input, const string& target, const string& replacement) {
    if (target.size() > input.size()) {
        return input;
    }
    return input.replace(input.find(target), target.size(), replacement);
}

string sp_replaceLast(string input, const string& target, const string& replacement) {
    if (target.size() > input.size()) {
        return input;
    }
    return input.replace(input.rfind(target), target.size(), replacement);
}

string sp_substringBeforeChar(const string& input, const string& character) {
    size_t pos = input.find(character);
    if (pos == string::npos) {
        return input;
    }
    return input.substr(0, pos + 1);
}

string sp_substringAfterChar(const string& input, const string& character) {
    size_t pos = input.rfind(character);
    if (pos == string::npos) {
        return input;
    }
    return input.substr(pos, string::npos);
}

string sp_toLowerCase(string input) {
    for (size_t i = 0; i < input.size(); ++i) {
        input[i] = tolower(input[i]);
    }
    return input;
}

string sp_toUpperCase(string input) {
    for (size_t i = 0; i < input.size(); ++i) {
        input[i] = toupper(input[i]);
    }
    return input;
}

string sp_capitalize(string input) {
    input[0] = toupper(input[0]);
    return input;
}

string sp_swapCase(string input) {
    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] == tolower(input[i])) {
            input[i] = toupper(input[i]);
        }
        else if (input[i] == toupper(input[i])) {
            input[i] = tolower(input[i]);
        }
    }
    return input;
}

string sp_trimWhitespace(const string& input) {
    size_t i = 0;
    size_t j = input.size() - 1;
    while (isspace(input[i])) ++i;
    if (i == input.size()) {
        return "";
    }
    while (isspace(input[j])) --j;
    return input.substr(i, j-i);
}

string sp_trimWhitespaceLeft(const string& input) {
    size_t i = 0;
    while (isspace(input[i])) ++i;
    if (i == input.size()) {
        return "";
    }
    return input.substr(i, string::npos);
}

string sp_trimWhitespaceRight(const string& input) {
    size_t i = input.size() - 1;
    while (isspace(input[i])) {
        if (i == 0) {
            return "";
        }
        --i;
    }
    return input.substr(0, i);
}

string sp_singleQuote(string input) {
    input.insert(0, "\'");
    input.append("\'");
    return input;
}

string sp_doubleQuote(string input) {
    input.insert(0, "\"");
    input.append("\"");
    return input;
}

string sp_repeat(string input, unsigned int count) {
    for (unsigned int i; i < count; ++i) {
        input.append(input);
    }
    return input;
}
