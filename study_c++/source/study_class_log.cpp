#include <iostream>
#include "log.hh"

int main()
{
    LOG log;
    log.SetLevel(log.LOG_LEVEL_Warning); // 设置日志等级,不设置默认全部打印出来
    log.Info("info message");
    log.Error("error message");
    log.Warn("warn message");
}
