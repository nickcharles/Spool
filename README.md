## Spool ![Spool](https://github.com/nickcharles/Spool/blob/master/Spool.png)

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
- [sp_replace](https://github.com/nickcharles/Spool#sp_replace)
- [sp_replaceFirst](https://github.com/nickcharles/Spool#sp_replacefirst)
- [sp_replaceLast](https://github.com/nickcharles/Spool#sp_replacelast)
- [sp_toLowerCase](https://github.com/nickcharles/Spool#sp_tolowercase)
- [sp_toUpperCase](https://github.com/nickcharles/Spool#sp_touppercase)
- [sp_trimWhitespace](https://github.com/nickcharles/Spool#sp_trimwhitespace)


#### sp_contains()
```C++
bool sp_contains(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string contains *phrase*


#### sp_containsAfter()
```C++
bool sp_containsAfter(const std::string& input, const std::string& phrase, const std::size_t offset)
```
> Returns true if the *input* string contains *phrase* at any point beyond *offset*


#### sp_containsBefore()
```C++
bool sp_containsBefore(const std::string& input, const std::string& phrase, const std::size_t offset)
```
> Returns true if the *input* string contains *phrase* at any point up until *offset*

#### sp_startsWith()
```C++
bool sp_startsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*

```C++
bool sp_startsWith(const std::string& input, const std::string& phrase, const std::size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*


#### sp_startsWithIgnoreCase()
```C++
bool sp_startsWithIgnoreCase(std::string& input, std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*, ignores case

```C++
bool sp_startsWithIgnoreCase(const std::string& input, const std::string& phrase, const std::size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*, ignores case


#### sp_endsWith()
```C++
bool sp_endsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*

```C++
bool sp_endsWith(const std::string& input, const std::string& phrase, const std::size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back


#### sp_endsWithIgnoreCase()
```C++
bool sp_endsWithIgnoreCase(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*, ignores case

```C++
bool sp_endsWithIgnoreCase(std::string& input, std::string& phrase, const std::size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back, ignores case


#### sp_equalsIgnoreCase()
```C++
bool sp_equalsIgnoreCase(const std::string& first, const std::string& second)
```
> Returns true if the strings *first* and *second* are the same, ignores case


#### sp_replace()
```C++
void sp_replace(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with every instance of *old* replaced with *replacement*


#### sp_replaceFirst()
```C++
void sp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with the first instance of *old* replaced with *replacement*


#### sp_replaceLast()
```C++
void sp_replaceLast(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with the last instance of *old* replaced with *replacement*


#### sp_toLowerCase()
```C++
void sp_toLowerCase(std::string& input)
```
> Returns a copy of the *input* string in lower case


#### sp_toUpperCase()
```C++
void sp_toUpperCase(std::string& input)
```
> Returns a copy of the *input* string in upper case


#### sp_trimWhitespace()
```C++
void sp_trimWhitespace(std::string& input)
```
> Returns a copy of the *input* string with leading and trailing whitespace trimmed