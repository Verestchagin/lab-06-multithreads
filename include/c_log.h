#pragma once

#include <cstdio>
#include <string>

class c_log
{
public:
    enum logger_level
    {
        lvl_trace,
        lvl_debug,
        lvl_info,
        lvl_warning,
        lvl_error,
        lvl_fatal
    };
    c_log();
    void print_info(logger_level level, const char *format, ...);
private:
    void output(logger_level level, std::string str);
};

c_log& log();

#define log_info(fmt, ...)                      log().print_info(c_log::lvl_info, fmt, __VA_ARGS__)
#define log_trace(fmt, ...)                     log().print_info(c_log::lvl_trace, fmt, __VA_ARGS__)
#define log_msg_lvl(lvl, fmt, ...)              log().print_info(lvl, fmt, __VA_ARGS__)
