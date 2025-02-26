class Base {
public:
    void speak() {
        std::cout << "Base speaks\n";
    }
};

class Derived : public Base {
public:
    void speak() {
        std::cout << "Derived speaks\n";
    }
};

int main() {
    Base* base = new Derived();
    base->speak();  // Calls Base's speak(), not Derived's
}
