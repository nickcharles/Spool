### String++

String++ is a lightweight and modular string manipulation library for C++. It seeks to replicate the greater string functionality provided by languages such as Java and Python. Stop wasting time rewriting the same old string functions for every new project.

Lightweight

- With the full String++ library weighing in at just over 300 lines, you get exactly what you need, and that's it.

Modular

- Only need one or two functions? Take them. String++ was built with this in mind, so every function is written entirely independent from the rest of the library.

Documentation

```C++
bool spp_contains(const std::string& input, const std::string& phrase)
```

```C++
bool spp_startsWith(const std::string& input, const std::string& phrase)
```

```C++
bool spp_startsWith(const std::string& input, const std::string& phrase, int offset)
```

```C++
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase)
```

```C++
bool spp_startsWithIgnoreCase(std::string& input, std::string& phrase, int offset)
```

```C++
bool spp_endsWith(const std::string& input, const std::string& phrase)
```

```C++
bool spp_endsWith(const std::string& input, const std::string& phrase, int offset)
```

```C++
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase)
```

```C++
bool spp_endsWithIgnoreCase(std::string& input, std::string& phrase, int offset)
```

```C++
bool spp_equalsIgnoreCase(const std::string& first, const std::string& second)
```

```C++
void spp_replace(std::string& input, const std::string& old, const std::string& replacement)
```

```C++
void spp_replaceFirst(std::string& input, const std::string& old, const std::string& replacement)
```

```C++
void spp_replaceLast(std::string& input, const std::string& old, const std::string& replacement)
```

```C++
void spp_toLowerCase(std::string& input)
```

```C++
void spp_toUpperCase(std::string& input)
```

```C++
void spp_trimWhitespace(std::string& input)
```