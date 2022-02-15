#include <iostream>
#include <cpr/cpr.h>

int main() {
    while (true){
        std::string cmd;
        std::cin >> cmd;
        if (cmd == "ext") {
            return 0;
        }
        cpr::Response r;
        if (cmd == "get") {
            r = cpr::Get(cpr::Url("http://httpbin.org/get"));
        }else if (cmd == "post") {
            r = cpr::Post(cpr::Url("http://httpbin.org/post"));
        }else if (cmd == "put") {
            r = cpr::Put(cpr::Url("http://httpbin.org/put"));
        }else if (cmd == "delete") {
            r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
        }else if (cmd == "patch") {
            r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
        }
        std::cout << r.text;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
