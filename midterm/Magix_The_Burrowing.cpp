#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Card {
    protected:
        int power;
        std::string color, name;
    public:
        Card(std::string color, int power, std::string name) : color(color), power(power), name(name) {}

        bool operator < (const Card & other) const {
            if(color == "G" and other.color == "R") return false;
            else if(color == "R" and other.color == "G") return true;
            else if(color != other.color) return color < other.color;
            else if(power != other.power) return power < other.power;
            return name < other.name;
        }

        std::string getName() {
            return name;
        }
        std::string getColor() {
            return color;
        }
        int getPower() {
            return power;
        }
};

int main() {
    std::vector<Card> v;
    std::map<std::string, int> m;

    int n;
    std::cin >> n;
    for(int i=0;i<n;i++) {
        std::string name, color;
        int power;
        std::cin >> name >> color >> power;
        if(!m.count(name)) v.push_back(Card(color, power, name));
        m[name]++;
    }

    sort(v.begin(), v.end());
    for(auto e:v) std::cout << e.getName() << ' ' << e.getColor() << ' ' << e.getPower() << " = " << m[e.getName()] << std::endl;
}