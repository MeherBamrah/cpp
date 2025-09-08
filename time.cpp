//Create a class called “TIME” that has three integer data members for hours, minutes and seconds. The class should have a constructor to initialize the object to zero and a constructor to initialize the object to some constant value. The class should have member function to add two TIME objects and member function to display time in HH:MM:SS format. Write a main function to create two TIME objects, add them and display the result in HH:MM:SS format.  
class TIME {
    int h, m, s;
public:
    TIME() : h(0), m(0), s(0) {}
    TIME(int hr, int min, int sec) : h(hr), m(min), s(sec) {}
    TIME add(TIME t) {
        TIME temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s/60;
        temp.s = temp.s % 60;
        temp.h = h + t.h + temp.m/60;
        temp.m = temp.m % 60;
        return temp;
    }
    void display() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    TIME t1(1,45,50), t2(2,20,30);
    TIME sum = t1.add(t2);
    sum.display(); // Output: 4:6:20
}
