#ifndef TSTRING_H
#define TSTRING_H

namespace tiny {
    class StringList;

    class String {
    public:
        String(char ch);
        String(const char *str);
        String(const String& str);
    private:
    private:
        size_t _M_len;
        char *_M_data;
    public:
        String operator=(const String& str);
        friend String operator+(const String& str0, const String& str1);
    public:
        StringList split(const String& pattern);
    };
}

#endif