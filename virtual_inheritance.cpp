class A {
public:
    int value;
};

class B : virtual public A { };

class C : virtual public A { };

class D : public B, public C {
public:
    void show() {
        std::cout << value;  // No ambiguity: 'value' is shared
    }
};
