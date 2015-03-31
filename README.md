## StringPP

StringPP is a lightweight and modular string manipulation library for C++. It seeks to replicate the greater string functionality provided by languages such as Java and Python. Stop wasting time rewriting the same old string functions for every new project.

### Lightweight

With the full StringPP library weighing in at just over 300 lines, you get exactly what you need, and that's it.

### Modular

Only need one or two functions? Take them. StringPP was built with this in mind, so every function is written entirely independent from the rest of the library.

### Documentation

#### spp_contains()
```C++
bool spp_contains(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string contains *phrase*

#### spp_startsWith()
```C++
bool spp_startsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*

```C++
bool spp_startsWith(const std::string& input, const std::string& phrase, int offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*

#### spp_startsWithIgnoreCase()
```C++
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase)
```
> Returns true if the *input* string starts with *phrase*, ignores case

```C++
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase, int offset)
```
> Returns true if the *input* string starts with *phrase* at *offset*, ignores case

#### spp_endsWith()
```C++
bool spp_endsWith(const std::string& input, const std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*

```C++
bool spp_endsWith(const std::string& input, const std::string& phrase, int offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back

#### spp_endsWithIgnoreCase()
```C++
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase)
```
> Returns true if the *input* string ends with *phrase*, ignores case

```C++
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase, int offset)
```
> Returns true if the *input* string ends with *phrase* at *offset* from back, ignores case

#### spp_equalsIgnoreCase()
```C++
bool spp_equalsIgnoreCase(const std::string& first, const std::string& second)
```
> Returns true if the strings *first* and *second* are the same, ignores case

#### spp_replace()
```C++
void spp_replace(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with every instance of *old* replaced with *replacement*

#### spp_replaceFirst()
```C++
void spp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with the first instance of *old* replaced with *replacement*

#### spp_replaceLast()
```C++
void spp_replaceLast(std::string& input, const std::string& old, const std::string& replacement)
```
> Returns a copy of the *input* string with the last instance of *old* replaced with *replacement*

#### spp_toLowerCase()
```C++
void spp_toLowerCase(std::string& input)
```
> Returns a copy of the *input* string in lower case

#### spp_toUpperCase()
```C++
void spp_toUpperCase(std::string& input)
```
> Returns a copy of the *input* string in upper case

#### spp_trimWhitespace()
```C++
void spp_trimWhitespace(std::string& input)
```
> Returns a copy of the *input* string with leading and trailing whitespace trimmed