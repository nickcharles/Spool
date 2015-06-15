#include "spool.h"

bool sp_contains(const std::string& input, const std::string& phrase) {
    if (input.find(phrase) == std::string::npos) {
        return false;
    }
    return true;
}

bool sp_containsAfter(const std::string& input, const std::string& phrase, std::size_t offset) {
    if (input.find(phrase, offset) == std::string::npos) {
        return false;
    }
    return true;
}

bool sp_containsBefore(const std::string& input, const std::string& phrase, std::size_t offset) {
    if (input.rfind(phrase, offset) == std::string::npos) {
        return false;
    }
    return true;
}

bool sp_startsWith(const std::string& input, const std::string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (std::size_t i = 0; i < phrase.size(); ++i) {
        if (input[i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool sp_startsWith(const std::string& input, const std::string& phrase, std::size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (std::size_t  i = 0; i < phrase.size(); ++i) {
        if (input[offset + i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (std::size_t i = 0; i < phrase.size(); ++i) {
        if (tolower(input[i]) != tolower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase, std::size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (std::size_t  i = 0; i < phrase.size(); ++i) {
        if (tolower(input[offset + i]) != tolower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool sp_endsWith(const std::string& input, const std::string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (std::size_t i = 0; i < phrase.size(); ++i) {
        if (input[input.size() - i] != phrase[phrase.size() - i]) {
            return false;
        }
    }
    return true;
}

bool sp_endsWith(const std::string& input, const std::string& phrase, std::size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (std::size_t i = 0; i < phrase.size(); ++i) {
        if (input[input.size() - offset - i] != phrase[phrase.size() - i]) {
            return false;
        }
    }
    return true;
}

bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase) {
    if (phrase.size() > input.size()) {
        return false;
    }
    for (std::size_t i = 0; i < phrase.size(); ++i) {
        if (tolower(input[input.size() - i]) != tolower(phrase[phrase.size() - i])) {
            return false;
        }
    }
    return true;
}

bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase, std::size_t offset) {
    if (phrase.size() > input.size() - offset) {
        return false;
    }
    for (std::size_t i = 0; i < phrase.size(); ++i) {
        if (tolower(input[input.size() - offset - i]) != tolower(phrase[phrase.size() - i])) {
            return false;
        }
    }
    return true;
}


bool sp_equalsIgnoreCase(const std::string& first, const std::string& second) {
    if (first.size() != second.size()) {
        return false;
    }
    for (std::size_t i = 0; i < first.size(); ++i) {
        if (tolower(first[i]) != tolower(second[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isAlnum(const std::string& input) {
    if (input.empty()) {
        return false;
    }
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (!isalnum(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isAlpha(const std::string& input) {
    if (input.empty()) {
        return false;
    }
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (!isalpha(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isDigit(const std::string& input) {
    if (input.empty()) {
        return false;
    }
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (!isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isLower(const std::string& input) {
    if (input.empty()) {
        return false;
    }
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (!islower(input[i])) {
            return false;
        }
    }
    return true;
}

bool sp_isUpper(const std::string& input) {
    if (input.empty()) {
        return false;
    }
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (!isupper(input[i])) {
            return false;
        }
    }
    return true;
}

// std::string sp_replaceHelper(std::string input, const std::string& replacement, std::size_t start, std::size_t end) {
//     for (std::size_t i = 0; i < replacement.size(); ++i) {
//         input[start + i]
//     }
//     return input;
// }

// std::string sp_replace(std::string input, const std::string& to_replace, const std::string& replacement) {
//     std::size_t to_replace_start_index;
//     std::size_t to_replace_end_index;
//     for (std::size_t i = 0; i < input.size(); ++i) {
//         if (input[i] == to_replace[0]) {
//             to_replace_start_index = i;
//             for (std::size_t j = 0; j < to_replace.size(); ++j) {
//                 if (input[i + j] != to_replace[j]) {
//                     break;
//                 }
//             }
//             if (j != to_replace.size()) {
//                 continue;
//             }
//             else {
//                 input = sp_replaceHelper(input, replacement, to_replace_start_index, to_replace.size() - 1)
//             }
//         }
//     }
//     return input;
// }

// std::string sp_replaceFirst(std::string input, const std::string& to_replace, const std::string& replacement) {
//     return input;
// }

// std::string sp_replaceLast(std::string input, const std::string& to_replace, const std::string& replacement) {
//     return input;
// }

// std::string sp_substringBeforeIndex(std:string input, const std::string& character) {
//     return input;
// }

// std::string sp_substringAfterIndex(std:string input, const std::string& character) {
//     return input;
// }

std::string sp_toLowerCase(std::string input) {
    for (std::size_t i = 0; i < input.size(); ++i) {
        input[i] = tolower(input[i]);
    }
    return input;
}

std::string sp_toUpperCase(std::string input) {
    for (std::size_t i = 0; i < input.size(); ++i) {
        input[i] = toupper(input[i]);
    }
    return input;
}

std::string sp_capitalize(std::string input) {
    input[0] = toupper(input[0]);
    return input;
}

std::string sp_swapCase(std::string input) {
    for (std::size_t i = 0; i < input.size(); ++i) {
        if (input[i] == tolower(input[i])) {
            input[i] = toupper(input[i]);
        }
        else if (input[i] == toupper(input[i])) {
            input[i] = tolower(input[i]);
        }
    }
    return input;
}

std::string sp_trimWhitespace(const std::string& input) {
    std::size_t i = 0;
    std::size_t j = input.size() - 1;
    while (isspace(input[i])) ++i;
    if (i == input.size()) {
        return "";
    }
    while (isspace(input[j])) --j;
    return input.substr(i, j-i);
}

std::string sp_trimWhitespaceLeft(const std::string& input) {
    std::size_t i = 0;
    while (isspace(input[i])) ++i;
    if (i == input.size()) {
        return "";
    }
    return input.substr(i, std::string::npos);
}

std::string sp_trimWhitespaceRight(const std::string& input) {
    std::size_t i = input.size() - 1;
    while (isspace(input[i])) {
        if (i == 0) {
            return "";
        }
        --i;
    }
    return input.substr(0, i);
}

std::string sp_quote(std::string input) {
    input.insert(0, "\"");
    input.append("\"");
    return input;
}

std::string sp_repeat(std::string input, unsigned int count) {
    for (unsigned int i; i < count; ++i) {
        input.append(input);
    }
    return input;
}