#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure() : sides_count(0), name("Фигура") { }

    int get_sides_count() {
        return sides_count;
    }
    std::string get_name() {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() { sides_count = 3; name = "Треугольник"; }
};

class Quadrangle : public Figure {
public:
    Quadrangle() { sides_count = 4; name = "Четырёхугольник"; }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Количество сторон: " << std::endl;

    Figure f;
    Triangle t;
    Quadrangle q;

    std::cout << f.get_name() << ": " << f.get_sides_count() << std::endl;
    std::cout << t.get_name() << ": " << t.get_sides_count() << std::endl;
    std::cout << q.get_name() << ": " << q.get_sides_count() << std::endl;

    return 0;
}