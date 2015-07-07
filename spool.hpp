// Implementation of some commonly used string functions not available in standard C++.
// Nick Morgan
// November 20, 2014

#include <string>
#include <cctype>

bool sp_contains(const std::string& input, const std::string& phrase);

bool sp_containsAfter(const std::string& input, const std::string& phrase, std::size_t offset);

bool sp_containsBefore(const std::string& input, const std::string& phrase, std::size_t offset);

bool sp_startsWith(const std::string& input, const std::string& phrase);

bool sp_startsWith(const std::string& input, const std::string& phrase, std::size_t offset);

bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase);

bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase, std::size_t offset);

bool sp_endsWith(const std::string& input, const std::string& phrase);

bool sp_endsWith(const std::string& input, const std::string& phrase, std::size_t offset);

bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase);

bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase, std::size_t offset);

bool sp_equalsIgnoreCase(const std::string& first, const std::string& second);

bool sp_isAlnum(const std::string& input);

bool sp_isAlpha(const std::string& input);

bool sp_isDigit(const std::string& input);

bool sp_isLower(const std::string& input);

bool sp_isUpper(const std::string& input);

// std::string sp_replaceHelper(std::string input, const std::string& replacement, std::size_t start, std::size_t end);

// std::string sp_replace(const std::string& input, const std::string& old, const std::string& replacement);

// std::string sp_replaceFirst(const std::string& input, const std::string& old, const std::string& replacement);

// std::string sp_replaceLast(const std::string& input, const std::string& old, const std::string& replacement);

// std::string sp_substringBeforeIndex();

// std::string sp_substringAfterIndex();

// std::string sp_substringBeforeChar(const std:string& input, const std::string& character);

// std::string sp_substringAfterChar(const std:string& input, const std::string& character);

std::string sp_toLowerCase(std::string input);

std::string sp_toUpperCase(std::string input);

std::string sp_capitalize(std::string input);

std::string sp_swapCase(std::string input);

std::string sp_trimWhitespace(const std::string& input);

std::string sp_trimWhitespaceLeft(const std::string& input);

std::string sp_trimWhitespaceRight(const std::string& input);

std::string sp_quote(std::string input);

std::string sp_repeat(std::string input, unsigned int count);