<p align="center">
    <img height="200" width="200" src="https://raw.githubusercontent.com/nickcharles/spool/master/spool.png">
</p>

## Spool

Spool is a lightweight and modular string manipulation library for C++. It seeks to replicate the greater string functionality provided by languages such as Java and Python. Stop wasting time rewriting the same old string functions for every new project.

### Table of Contents

- [sp_contains](https://github.com/nickcharles/Spool#sp_contains)
- [sp_containsAfter](https://github.com/nickcharles/Spool#sp_containsafter)
- [sp_containsBefore](https://github.com/nickcharles/Spool#sp_containsbefore)
- [sp_startsWith](https://github.com/nickcharles/Spool#sp_startswith)
- [sp_startsWithIgnoreCase](https://github.com/nickcharles/Spool#sp_startswithignorecase)
- [sp_endsWith](https://github.com/nickcharles/Spool#sp_endswith)
- [sp_endsWithIgnoreCase](https://github.com/nickcharles/Spool#sp_endswithignorecase)
- [sp_equalsIgnoreCase](https://github.com/nickcharles/Spool#sp_equalsignorecase)
- [sp_isAlnum](https://github.com/nickcharles/Spool#sp_isalnum)
- [sp_isAlpha](https://github.com/nickcharles/Spool#sp_isalpha)
- [sp_isDigit](https://github.com/nickcharles/Spool#sp_isdigit)
- [sp_isLower](https://github.com/nickcharles/Spool#sp_islower)
- [sp_isUpper](https://github.com/nickcharles/Spool#sp_isupper)
- [sp_isSpace](https://github.com/nickcharles/Spool#sp_isspace)
- [sp_replace](https://github.com/nickcharles/Spool#sp_replace)
- [sp_replaceFirst](https://github.com/nickcharles/Spool#sp_replacefirst)
- [sp_replaceLast](https://github.com/nickcharles/Spool#sp_replacelast)
- [sp_substringBeforeChar](https://github.com/nickcharles/Spool#sp_subtringbeforechar)
- [sp_substringAFterChar](https://github.com/nickcharles/Spool#sp_substringafterchar)
- [sp_toLowerCase](https://github.com/nickcharles/Spool#sp_tolowercase)
- [sp_toUpperCase](https://github.com/nickcharles/Spool#sp_touppercase)
- [sp_capitalize](https://github.com/nickcharles/Spool#sp_capitalize)
- [sp_swapCase](https://github.com/nickcharles/Spool#sp_swapcase)
- [sp_trimWhitespace](https://github.com/nickcharles/Spool#sp_trimwhitespace)
- [sp_trimWhitespaceLeft](https://github.com/nickcharles/Spool#sp_trimwhitespaceleft)
- [sp_trimWhitespaceRight](https://github.com/nickcharles/Spool#sp_trimwhitespaceright)
- [sp_singleQuote](https://github.com/nickcharles/Spool#sp_singleQuote)
- [sp_doubleQuote](https://github.com/nickcharles/Spool#sp_doubleQuote)
- [sp_repeat](https://github.com/nickcharles/Spool#sp_repeat)

### Documentation

#### sp_contains()
```C++
bool sp_contains(const string& input, const string& phrase)
```
> Returns true if the *input* string contains *phrase*


#### sp_containsAfter()
```C++
bool sp_containsAfter(const string& input, const string& phrase, size_t offset)
```
> Returns true if the *input* string contains *phrase* at any point beyond *offset*


#### sp_containsBefore()
```C++
bool sp_containsBefore(const string& input, const string& phrase, size_t offset)
```
> Returns true if the *input* string contains *phrase* at any point up until *offset*


#### sp_startsWith()
```C++
bool sp_startsWith(const string& input, const string& phrase)
```
> Returns true if the *input* string starts with *phrase*

```C++
bool sp_startsWith(const string& input, const string& phrase, size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*


#### sp_startsWithIgnoreCase()
```C++
bool sp_startsWithIgnoreCase(string& input, string& phrase)
```
> Returns true if the *input* string starts with *phrase*, ignores case

```C++
bool sp_startsWithIgnoreCase(const string& input, const string& phrase, size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*, ignores case


#### sp_endsWith()
```C++
bool sp_endsWith(const string& input, const string& phrase)
```
> Returns true if the *input* string ends with *phrase*

```C++
bool sp_endsWith(const string& input, const string& phrase, size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back


#### sp_endsWithIgnoreCase()
```C++
bool sp_endsWithIgnoreCase(const string& input, const string& phrase)
```
> Returns true if the *input* string ends with *phrase*, ignores case

```C++
bool sp_endsWithIgnoreCase(string& input, string& phrase, size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back, ignores case


#### sp_equalsIgnoreCase()
```C++
bool sp_equalsIgnoreCase(const string& first, const string& second)
```
> Returns true if the strings *first* and *second* are the same, ignores case


#### sp_isAlnum()
```C++
bool sp_isAlnum(const string& input)
```
> Returns true if all characters in the string are alphanumeric and there is at least one character


#### sp_isAlpha()
```C++
bool sp_isAlpha(const string& input)
```
> Returns true if all characters in the string are alphabetic and there is at least one character


#### sp_isDigit()
```C++
bool sp_isDigit(const string& input)
```
> Returns true if all characters in the string are digits and there is at least one character

#### sp_isLower()
```C++
bool sp_isLower(const string& input)
```
> Returns true if all characters in the string are lowercase and there is at least one character


#### sp_isUpper()
```C++
bool sp_isUpper(const string& input)
```
> Returns true if all characters in the string are uppercase and there is at least one character


#### sp_isSpace()
```C++
bool sp_isLower(const string& input)
```
> Returns true if all characters in the string are whitespaces and there is at least one character


#### sp_replace()
```C++
string sp_replace(string input, const string& target, const string& replacement)
```
> Returns a copy of the *input* string with every instance of *target* replaced with *replacement*


#### sp_replaceFirst()
```C++
string sp_replaceFirst(string input, const string& target, const string& replacement)
```
> Returns a copy of the *input* string with the first instance of *target* replaced with *replacement*


#### sp_replaceLast()
```C++
string sp_replaceLast(string input, const string& target, const string& replacement)
```
> Returns a copy of the *input* string with the last instance of *target* replaced with *replacement*


#### sp_substringBeforeChar()
```C++
string sp_substringBeforeChar(std:string& input, const string& character);
```
> Returns a substring of the *input* string starting at the beginning of *input* and going until the first instance of *character*


#### sp_substringAfterChar()
```C++
string sp_substringAfterChar(std:string& input, const string& character);
```
> Returns a substring of the *input* string starting after the last instance of *character* and going until the end of *input*


#### sp_toLowerCase()
```C++
string sp_toLowerCase(string input)
```
> Returns a copy of the *input* string in lowercase


#### sp_toUpperCase()
```C++
string sp_toUpperCase(string input)
```
> Returns a copy of the *input* string in uppercase


#### sp_capitalize()
```C++
string sp_capitalize(string input)
```
> Returns a copy of the *input* string with the first character capitalized and the rest lowercased


#### sp_swapCase()
```C++
string sp_swapCase(string input)
```
> Returns a copy of the *input* string with uppercase characters converted to lowercase and vice versa


#### sp_trimWhitespace()
```C++
string sp_trimWhitespace(const string& input)
```
> Returns a copy of the *input* string with leading and trailing whitespace trimmed


#### sp_trimWhitespaceLeft()
```C++
string sp_trimWhitespaceLeft(const string& input)
```
> Returns a copy of the *input* string with leading whitespace trimmed


#### sp_trimWhitespaceRight()
```C++
string sp_trimWhitespaceRight(const string& input)
```
> Returns a copy of the *input* string with trailing whitespace trimmed


#### sp_singleQuote()
```C++
string sp_singleQuote(string input)
```
> Returns a copy of the *input* string surrounded by single quotes


#### sp_doubleQuote()
```C++
string sp_doubleQuote(string input)
```
> Returns a copy of the *input* string surrounded by double quotes


#### sp_repeat()
```C++
string sp_repeat(string input, unsigned int count)
```
> Returns a string consisting of the *input* string repeated *count* times