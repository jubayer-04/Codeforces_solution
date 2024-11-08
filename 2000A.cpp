#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t != 0) {
        std::string s;
        std::cin >> s;

        std::string s1 = s.substr(2);
        int x = std::stoi(s1);

        if (s[0] == '1' && s[1] == '0' && x > 2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }

        t--;
    }

    return 0;
}
