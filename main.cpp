#include <iostream>
#include <string>

enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> class Traits;

template <>
class Traits <Color> {
public:
    static std::string name(int i) {
        if (i == static_cast<int>(Color::red)) {
            std::string r = "red";
            return r;
        } else if (i == static_cast<int>(Color::green)) {
            std::string g = "green";
            return g;
        } else if (i == static_cast<int>(Color::orange)) {
            std::string o = "orange";
            return o;
        } else {
            std::string u = "unknown";
            return u;
        }
    }
};

template <>
class Traits <Fruit> {
public:
    static std::string name(int i) {
        if (i == static_cast<int>(Fruit::apple)) {
            std::string a = "apple";
            return a;
        } else if (i == static_cast<int>(Fruit::orange)) {
            std::string o = "orange";
            return o;
        } else if (i == static_cast<int>(Fruit::pear)) {
            std::string p = "pear";
            return p;
        } else {
            std::string u = "unknown";
            return u;
        }
    }
};

int main() {
    int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1;
        std::cin >> index1;
        int index2;
        std::cin >> index2;
        std::cout << Traits<Color>::name(index1) << " ";
        std::cout << Traits<Fruit>::name(index2) << "\n";
    }
}
