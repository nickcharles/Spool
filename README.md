## Spool

Spool is a lightweight and modular string manipulation library for C++. It seeks to replicate the greater string functionality provided by languages such as Java and Python. Stop wasting time rewriting the same old string functions for every new project.

### Documentation

#### sp_contains()
```C++
bool sp_contains(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string contains *phrase*

```C++
bool sp_contains(const std::string& input, const std::string& phrase, std::size_t offset)
```
> Returns true if the *input* string contains *phrase* beyond *offset*

#### sp_startsWith()
```C++
bool sp_startsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*

```C++
bool sp_startsWith(const std::string& input, const std::string& phrase, size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*

#### sp_startsWithIgnoreCase()
```C++
bool sp_startsWithIgnoreCase(std::string& input, std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*, ignores case

```C++
bool sp_startsWithIgnoreCase(std::string& input, std::string& phrase, size_t offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*, ignores case

#### sp_endsWith()
```C++
bool sp_endsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*

```C++
bool sp_endsWith(const std::string& input, const std::string& phrase, size_t offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back

#### sp_endsWithIgnoreCase()
```C++
bool sp_endsWithIgnoreCase(std::string& input, std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*, ignores case

```C++
bool sp_endsWithIgnoreCase(std::string& input, std::string& phrase, size_t offset)
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