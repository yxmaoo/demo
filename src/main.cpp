#include <iostream>
#include <fstream>
#include <string>
#include "yaml-cpp/yaml.h"

int main() {
    try {
        // 从文件读取YAML内容
        std::ifstream fin("../config/config.yaml");
        if (!fin.is_open()) {
            std::cerr << "无法打开文件 data.yaml" << std::endl;
            return 1;
        }

        // 解析YAML
        YAML::Node config = YAML::Load(fin);
        
        // 读取数据
        std::string name = config["name"].as<std::string>();
        int age = config["age"].as<int>();
        
        // 输出结果
        std::cout << "读取的YAML数据：" << std::endl;
        std::cout << "姓名: " << name << std::endl;
        std::cout << "年龄: " << age << std::endl;
        
        fin.close();
        return 0;
    } catch (const YAML::Exception& e) {
        std::cerr << "YAML解析错误: " << e.what() << std::endl;
        return 1;
    } catch (const std::exception& e) {
        std::cerr << "错误: " << e.what() << std::endl;
        return 1;
    }
}