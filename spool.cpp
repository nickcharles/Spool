#include "spool.h"

bool sp_contains(const std::string& input, const std::string& phrase) {
    if (input.find(phrase) == std::string::npos) {
        return false;
    }
    return true;
}

bool sp_containsAfter(const std::string& input, const std::string& phrase, const std::size_t offset) {
    if (input.find(phrase, offset) == std::string::npos) {
        return false;
    }
    return true;
}

bool sp_containsBefore(const std::string& input, const std::string& phrase, const std::size_t offset) {
    if (input.rfind(phrase, offset) == std::string::npos) {
        return false;
    }
    return true;
}

bool sp_startsWith(const std::string& input, const std::string& phrase) {
    std::size_t phrase_size = phrase.size();
    for (std::size_t i = 0; i < phrase_size; ++i) {
        if (input[i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool sp_startsWith(const std::string& input, const std::string& phrase, const std::size_t offset) {
    std::size_t phrase_size = phrase.size();
    for (std::size_t  i = 0; i < phrase_size; ++i) {
        if (input[offset + i] != phrase[i]) {
            return false;
        }
    }
    return true;
}

bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase) {
    std::size_t phrase_size = phrase.size();
    for (std::size_t i = 0; i < phrase_size; ++i) {
        if (std::tolower(input[i]) != std::tolower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase, const std::size_t offset) {
    std::size_t phrase_size = phrase.size();
    for (std::size_t  i = 0; i < phrase_size; ++i) {
        if (std::tolower(input[offset + i]) != std::tolower(phrase[i])) {
            return false;
        }
    }
    return true;
}

bool sp_endsWith(const std::string& input, const std::string& phrase) {
    std::size_t input_size = input.size();
    std::size_t phrase_size = phrase.size();
    for (std::size_t i = 0; i < phrase_size; ++i) {
        if (input[input_size - i] != phrase[phrase_size - i]) {
            return false;
        }
    }
    return true;
}

bool sp_endsWith(const std::string& input, const std::string& phrase, const std::size_t offset) {
    std::size_t input_size = input.size();
    std::size_t phrase_size = phrase.size();
    for (std::size_t i = 0; i < phrase_size; ++i) {
        if (input[input_size - offset - i] != phrase[phrase_size - i]) {
            return false;
        }
    }
    return true;
}

bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase) {
    std::size_t input_size = input.size();
    std::size_t phrase_size = phrase.size();
    for (std::size_t i = 0; i < phrase_size; ++i) {
        if (std::tolower(input[input_size - i]) != std::tolower(phrase[phrase_size - i])) {
            return false;
        }
    }
    return true;
}

bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase, const std::size_t offset) {
    std::size_t input_size = input.size();
    std::size_t phrase_size = phrase.size();
    for (std::size_t i = 0; i < phrase_size; ++i) {
        if (std::tolower(input[input_size - offset - i]) != std::tolower(phrase[phrase_size - i])) {
            return false;
        }
    }
    return true;
}


bool sp_equalsIgnoreCase(const std::string& first, const std::string& second) {
    std::size_t first_size = first.size();
    for (std::size_t i = 0; i < first_size; ++i) {
        if (std::tolower(first[i]) != std::tolower(second[i])) {
            return false;
        }
    }
    return true;
}

void sp_replace(std::string& input, const std::string& old, const std::string& replacement) {
    std::size_t old_start_index;
    std::size_t old_end_index;
    std::size_t input_size = input.size();
    std::size_t old_size = input.size();
    std::size_t replacement_size = replacement.size();
    for (std::size_t i = 0; i < input_size; ++i) {
        if (input[i] == old[0]) {
            old_start_index = i;
            for (std::size_t j = 0; j < old_size; ++j) {
            }
        }
    }
    return;
}

void sp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement) {
    return;
}

void sp_replaceLast(std::string& input, const std::string& old, const std::string& replacement) {
    return;
}

void sp_substringBeforeChar(std:string& input, const std::string& character) {
    return
}

void sp_substringAfterChar(std:string& input, const std::string& character) {
    return;
}

void sp_toLowerCase(std::string& input) {
    std::size_t input_size = input.size();
    for (std::size_t i = 0; i < input_size; ++i) {
        input[i] = std::tolower(input[i]);
    }
    return;
}

void sp_toUpperCase(std::string& input) {
    std::size_t input_size = input.size();
    for (std::size_t i = 0; i < input_size; ++i) {
        input[i] = std::toupper(input[i]);
    }
    return;
}

void sp_trimWhitespace(std::string& input) {
    std::size_t input_size = input.size();
    for (std::size_t i = 0; i < input_size; ++i) {
        input[i] = std::toupper(input[i]);
    }
    for (std::size_t i = 0; i < input_size; ++i) {
        input[i] = std::toupper(input[i]);
    }
    return;
}