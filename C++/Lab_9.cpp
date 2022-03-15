#include <iostream>

class point {
public:
    int x;
    int y;

    point() {
        x = 0;
        y = 0;
    }
    point(int a) {
        x = a;
        y = 0;
    }
    point(int a, int b)
    {
        x = a;
        y = b;
    }

};

class massive{
public:
    int* data;
    int Size;

    massive(int size) {
        this->data = new int[size];
        this->Size = size;
        for (int i = 0; i < size; i++)
        {
            data[i] = i + 1;
        }
    }

    ~massive() {
        delete[] data;
    }

    massive(const massive & other) {
        this->Size = other.Size;
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
    }

    massive & operator =(const massive& other) {
        delete[] this->data;
        this->Size = other.Size;

        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
        return *this;
    }
    
};

int main()
{
    point a;
    point b(1);
    point c(2, 3);
    std::cout << "Staticheskie:\n" << a.x << "\t" << a.y << "\n" << b.x << "\t" << b.y << "\n" << c.x << "\t" << c.y << "\n";
    point *d = new point();
    point *e = new point(4);
    point *f = new point(5, 6);

    std::cout << "Dinamicheskie:\n" << d->x << "\t" << d->y << "\n" << e->x << "\t" << e->y << "\n" << f->x << "\t" << f->y;

    delete d;
    delete e;
    delete f;

    massive numbers(5);
    std::cout << "\n\nDinamitchesky massive:\n";
    for (int i = 0; i < numbers.Size; i++) {
        std::cout << numbers.data[i] << " ";
    }
}