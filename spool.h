// Implementation of some commonly used string functions not available in standard C++.
// Nick Morgan
// November 20, 2014

#include <string>

// Returns true if input contains phrase
bool sp_contains(const std::string& input, const std::string& phrase);

// Returns true if input contains phrase beyond offset
bool sp_contains(const std::string& input, const std::string& phrase, const std::size_t offset);

// Returns true if input starts with phrase
bool sp_startsWith(const std::string& input, const std::string& phrase);

// Returns true if input starts with phrase at offset
bool sp_startsWith(const std::string& input, const std::string& phrase, const std::size_t offset);

// Returns true if input starts with phrase, ignores case
bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase);

// Returns true if input starts with phrase at offset, ignores case
bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase, const std::size_t offset);

// Returns true if input ends with phrase
bool sp_endsWith(const std::string& input, const std::string& phrase);

// Returns true if input ends with phrase at offset from back
bool sp_endsWith(const std::string& input, const std::string& phrase, const std::size_t offset);

// Returns true if input ends with phrase, ignores case
bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase);

// Returns true if input ends with phrase at offset from back
bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase, const std::size_t offset);

// Returns true if first and second are the same, ignoring case
bool sp_equalsIgnoreCase(const std::string& first, const std::string& second);

// Returns a copy of input with every instance of old replaced with replacement
void sp_replace(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of input with first instance of old replaced with replacement
void sp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of input with last instance of old replaced with replacement
void sp_replaceLast(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of the string in lower case
void sp_toLowerCase(std::string& input);

// Returns a copy of the string in upper case
void sp_toUpperCase(std::string& input);

// Returns a copy of the string with leading and trailing whitespace trimmed
void sp_trimWhitespace(std::string& input);