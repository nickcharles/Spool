// Implementation of some commonly used string functions not available in standard C++.
// Nick Morgan
// November 20, 2014

#include <string>

// Returns true if input contains phrase
bool spp_contains(const std::string& input, const std::string& phrase);

// Returns true if input starts with phrase
bool spp_startsWith(const std::string& input, const std::string& phrase);

// Returns true if input starts with phrase at offset
bool spp_startsWith(const std::string& input, const std::string& phrase, int offset);

// Returns true if input starts with phrase, ignores case
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase);

// Returns true if input starts with phrase at offset, ignores case
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase, int offset);

// Returns true if input ends with phrase
bool spp_endsWith(const std::string& input, const std::string& phrase);

// Returns true if input ends with phrase at offset from back
bool spp_endsWith(const std::string& input, const std::string& phrase, int offset);

// Returns true if input ends with phrase, ignores case
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase);

// Returns true if input ends with phrase at offset from back
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase, int offset);

// Returns true if first and second are the same, ignoring case
bool spp_equalsIgnoreCase(const std::string& first, const std::string& second);

// Returns a copy of input with every instance of old replaced with replacement
void spp_replace(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of input with first instance of old replaced with replacement
void spp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of input with last instance of old replaced with replacement
void spp_replaceLast(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of the string in lower case
void spp_toLowerCase(std::string& input);

// Returns a copy of the string in upper case
void spp_toUpperCase(std::string& input);

// Returns a copy of the string with leading and trailing whitespace trimmed
void spp_trimWhitespace(std::string& input);