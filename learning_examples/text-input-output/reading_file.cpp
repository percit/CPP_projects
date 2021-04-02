#include <iostream>
#include <functional>
#include <string>
#include <optional>
#include <fstream>
std::optional<std::string> ReadFileAsString(const std::string& filepath){
    std::ifstream stream(filepath);//ifstream is for read only
    if(stream){
        std::string result;
        //read file
        stream.close();
        return result;
    }
    return {};//this is just error if sth goes south
}
int main(){
    std::optional<std::string> data = ReadFileAsString("data.txt");
    if(data){
        std::cout << "file read successfully";
    }
    else{
        std::string& string = *data;
        std::cout << "file could not be opened";
    }
    std::string value = data.value_or("not_present");
    return 0;
}
