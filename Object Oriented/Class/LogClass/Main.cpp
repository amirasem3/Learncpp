#include<iostream>

class Log {
//public variable of class
public :
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
//private variable of class
private:
    int m_LogLevel = LogLevelInfo;
//public function of class
public :
    void Warn(const char* message){
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]:" << message << std::endl;
    }
    void Error(const char* message){
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]:" << message << std::endl;
    }
    void Info(const char* message){
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]:" << message << std::endl;
    }
    void SetLevel(int level){
        m_LogLevel = level;
    }

};

int main(){
    Log log;
    //LogLevelWarning -> warning and Error printed
    log.SetLevel(log.LogLevelWarning);
    // log.Error("Hello!");
    // log.Warn("Hello!");
    // log.Info("Hello!");
    //LogLevelError -> Just Error printed
    log.SetLevel(log.LogLevelError);
    log.Error("Hello!");
    log.Warn("Hello!");
    log.Info("Hello!");
}