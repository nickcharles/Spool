// Implementation of some commonly used string functions not available in standard C++.
// Nick Morgan
// November 20, 2014

#include <string>

// Returns true if input starts with phrase
bool startsWith(const std::string& input, const std::string& phrase);

// Returns true if input starts with phrase at offset
bool startsWith(const std::string& input, const std::string& phrase, int offset);

// Returns true if input starts with phrase, ignores case
bool startsWithIgnoreCase(std::string& input, std::string& phrase);

// Returns true if input starts with phrase at offset, ignores case
bool startsWithIgnoreCase(std::string& input, std::string& phrase, int offset);

// Returns true if input ends with phrase
bool endsWith(const std::string& input, const std::string& phrase);

// Returns true if input ends with phrase at offset from back
bool endsWith(const std::string& input, const std::string& phrase, int offset);

// Returns true if input ends with phrase, ignores case
bool endsWithIgnoreCase(std::string& input, std::string& phrase);

// Returns true if input ends with phrase at offset from back
bool endsWithIgnoreCase(std::string& input, std::string& phrase, int offset);

// Returns true if first and second are the same, ignoring case
bool equalsIgnoreCase(const std::string& first, const std::string& second);

// Returns the start index of the first instance of phrase in input, -1 if not found
// NEED TO DEAL WITH UNSIGNED LONG LONG RETURN VALUE VS -1 FOR FAILURE
int firstIndexOf(const std::string&, const std::string& phrase);

// Returns the start index of the last instance of phrase in input, -1 if not found
// NEED TO DEAL WITH UNSIGNED LONG LONG RETURN VALUE VS -1 FOR FAILURE
int lastIndexOf(const std::string& input, const std::string& phrase);

// Returns a copy of input with every instance of old replaced with replacement
void replace(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of input with first instance of old replaced with replacement
void replaceFirst(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of input with last instance of old replaced with replacement
void replaceLast(std::string& input, const std::string& old, const std::string& replacement);

// Returns a copy of the string in lower case
void toLowerCase(std::string& input);

// Returns a copy of the string in upper case
void toUpperCase(std::string& input);

// Returns a copy of the string in camel case format, signified by delimiter
// std::string toCamelCase(std::string, char& delimiter);

// Returns a copy of string in inverse camel case format, signified by delimiter
// std::string toInverseCamelCase(std::string, char& delimiter);

// Returns a copy of the string with leading and trailing whitespace trimmed
void trimWhitespace(std::string& input);