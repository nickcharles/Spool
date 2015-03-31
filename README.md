### StringPP

StringPP is a lightweight and modular string manipulation library for C++. It seeks to replicate the greater string functionality provided by languages such as Java and Python. Stop wasting time rewriting the same old string functions for every new project.

#### Lightweight

- With the full String++ library weighing in at just over 300 lines, you get exactly what you need, and that's it.

#### Modular

- Only need one or two functions? Take them. StringPP was built with this in mind, so every function is written entirely independent from the rest of the library.

#### Documentation

```C++
bool spp_contains(const std::string& input, const std::string& phrase)
```
Returns true if the input string contains phrase


```C++
bool spp_startsWith(const std::string& input, const std::string& phrase)
```
Returns true if the input string starts with phrase


```C++
bool spp_startsWith(const std::string& input, const std::string& phrase, int offset)
```
Returns true if the input string starts with phrase at offset


```C++
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase)
```
Returns true if the input string starts with phrase, ignores case

```C++
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase, int offset)
```
Returns true if the input string starts with phrase at offset, ignores case

```C++
bool spp_endsWith(const std::string& input, const std::string& phrase)
```
Returns true if the input string ends with phrase

```C++
bool spp_endsWith(const std::string& input, const std::string& phrase, int offset)
```
Returns true if the input string ends with phrase at offset from back

```C++
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase)
```
Returns true if the input string ends with phrase, ignores case

```C++
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase, int offset)
```
Returns true if the input string ends with phrase at offset from back

```C++
bool spp_equalsIgnoreCase(const std::string& first, const std::string& second)
```
Returns true if the strings first and second are the same, ignoring case

```C++
void spp_replace(std::string& input, const std::string& old, const std::string& replacement)
```
Returns a copy of the input string with every instance of old replaced with replacement

```C++
void spp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement)
```
Returns a copy of the input string with the first instance of old replaced with replacement

```C++
void spp_replaceLast(std::string& input, const std::string& old, const std::string& replacement)
```
Returns a copy of the input string with the last instance of old replaced with replacement

```C++
void spp_toLowerCase(std::string& input)
```
Returns a copy of the input string in lower case

```C++
void spp_toUpperCase(std::string& input)
```
Returns a copy of the input string in upper case

```C++
void spp_trimWhitespace(std::string& input)
```
Returns a copy of the input string with leading and trailing whitespace trimmed