#include<iostream>

class Log {
//we can use Enum in this class
public:
    enum Level{
        LevelError , LevelWarning , LevelInfo
    };
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
    //after using enum
    void NewSetLevel(Level level){
        m_LogLevel = level;
    }
    void NewWarn(const char* message){
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]:" << message << std::endl;
    }
    void NewError(const char* message){
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR]:" << message << std::endl;
    }
    void NewInfo(const char* message){
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]:" << message << std::endl;
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
    log.NewError("Hello!");
    log.NewWarn("Hello!");
    log.NewInfo("Hello!");
}