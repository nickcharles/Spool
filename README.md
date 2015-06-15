<p align="center">
    <img height="200" width="200" src="https://github.com/nickcharles/Spool/blob/master/spool.png">
</p>

## Spool

Spool is a lightweight and modular string manipulation library for C++. It seeks to replicate the greater string functionality provided by languages such as Java and Python. Stop wasting time rewriting the same old string functions for every new project.

### Documentation

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
- [sp_toLowerCase](https://github.com/nickcharles/Spool#sp_tolowercase)
- [sp_toUpperCase](https://github.com/nickcharles/Spool#sp_touppercase)
- [sp_trimWhitespace](https://github.com/nickcharles/Spool#sp_trimwhitespace)
- [sp_trimWhitespaceLeft](https://github.com/nickcharles/Spool#sp_trimwhitespaceleft)
- [sp_trimWhitespaceRight](https://github.com/nickcharles/Spool#sp_trimwhitespaceright)
- [sp_quote](https://github.com/nickcharles/Spool#sp_quote)
- [sp_repeat](https://github.com/nickcharles/Spool#sp_repeat)


#### sp_contains()
```C++
bool sp_contains(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string contains *phrase*


#### sp_containsAfter()
```C++
bool sp_containsAfter(const std::string& input, const std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string contains *phrase* at any point beyond *offset*


#### sp_containsBefore()
```C++
bool sp_containsBefore(const std::string& input, const std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string contains *phrase* at any point up until *offset*


#### sp_startsWith()
```C++
bool sp_startsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*

```C++
bool sp_startsWith(const std::string& input, const std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*


#### sp_startsWithIgnoreCase()
```C++
bool sp_startsWithIgnoreCase(std::string& input, std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*, ignores case

```C++
bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*, ignores case


#### sp_endsWith()
```C++
bool sp_endsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*

```C++
bool sp_endsWith(const std::string& input, const std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back


#### sp_endsWithIgnoreCase()
```C++
bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*, ignores case

```C++
bool sp_endsWithIgnoreCase(std::string& input, std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back, ignores case


#### sp_equalsIgnoreCase()
```C++
bool sp_equalsIgnoreCase(const std::string& first, const std::string& second)
```
> Returns true if the strings *first* and *second* are the same, ignores case


#### sp_isAlnum()
```C++
bool sp_isAlnum(const std::string& input)
```
> Returns true if all characters in the string are alphanumeric and there is at least one character


#### sp_isAlpha()
```C++
bool sp_isAlpha(const std::string& input)
```
> Returns true if all characters in the string are alphabetic and there is at least one character


#### sp_isDigit()
```C++
bool sp_isDigit(const std::string& input)
```
> Returns true if all characters in the string are digits and there is at least one character

#### sp_isLower()
```C++
bool sp_isLower(const std::string& input)
```
> Returns true if all characters in the string are lowercase and there is at least one character


#### sp_isUpper()
```C++
bool sp_isUpper(const std::string& input)
```
> Returns true if all characters in the string are uppercase and there is at least one character


#### sp_isSpace()
```C++
bool sp_isLower(const std::string& input)
```
> Returns true if all characters in the string are whitespaces and there is at least one character


<!-- #### sp_replace()
##### Not yet implemented
```C++
std::string sp_replace(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with every instance of *old* replaced with *replacement*


#### sp_replaceFirst()
##### Not yet implemented
```C++
std::string sp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with the first instance of *old* replaced with *replacement*


#### sp_replaceLast()
##### Not yet implemented
```C++
std::string sp_replaceLast(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with the last instance of *old* replaced with *replacement*


#### sp_substringBeforeChar()
##### Not yet implemented
```C++
std::string sp_substringBeforeChar(std:string& input, const std::string& character);
```
> Returns a substring of the *input* string, starting at the beginning of *input* and going up until the first instance of *character*


#### sp_substringAfterChar()
##### Not yet implemented
```C++
std::string sp_substringAfterChar(std:string& input, const std::string& character);
```
> Returns a substring of the *input* string, starting just after the last instance of *character* and going until the end of *input* -->


#### sp_toLowerCase()
```C++
std::string sp_toLowerCase(std::string input)
```
> Returns a copy of the *input* string in lowercase


#### sp_toUpperCase()
```C++
std::string sp_toUpperCase(std::string input)
```
> Returns a copy of the *input* string in uppercase


#### sp_capitalize()
```C++
std::string sp_capitalize(std::string input)
```
> Returns a copy of the *input* string with the first character capitalized and the rest lowercased


#### sp_swapCase()
```C++
std::string sp_swapCase(std::string input)
```
> Returns a copy of the *input* string with uppercase characters converted to lowercase and vice versa


#### sp_trimWhitespace()
```C++
std::string sp_trimWhitespace(const std::string& input)
```
> Returns a copy of the *input* string with leading and trailing whitespace trimmed


#### sp_trimWhitespaceLeft()
```C++
std::string sp_trimWhitespaceLeft(const std::string& input)
```
> Returns a copy of the *input* string with leading whitespace trimmed


#### sp_trimWhitespaceRight()
```C++
std::string sp_trimWhitespaceRight(const std::string& input)
```
> Returns a copy of the *input* string with trailing whitespace trimmed


#### sp_quote()
```C++
std::string sp_quote(std::string input)
```
> Returns a copy of the *input* string surrounded by double quotes


#### sp_repeat()
```C++
std::string sp_repeat(std::string input, unsigned int count)
```
> Returns a string consisting of the *input* string repeated *count* times