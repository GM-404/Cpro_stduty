#ifndef LOG_HH
#define LOG_HH

#include <iostream>

#define LOG(x) std::cout << x << std::endl; // LOG
class LOG
{
public:
    enum level
    {
        LOG_LEVEL_Error = 1,
        LOG_LEVEL_Warning = 2,
        LOG_LEVEL_Info = 3
    };

private:
    level m_level = LOG_LEVEL_Info; // 默认等级，全部打印出来

public:
    void SetLevel(level level) // 设置日志等级
    {
        m_level = level;
    }
    void Warn(const char *message) // 警告
    {
        LOG("This is WARNING: " << message);
    }
    void Error(const char *message) // 错误
    {
        if (m_level >= LOG_LEVEL_Error)
            LOG("This is Error: " << message);
    }
    void Info(const char *message) // 信息
    {
        if (m_level >= LOG_LEVEL_Info)
            LOG("This is Info: " << message);
    }
};
#endif