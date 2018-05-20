#include <iostream>
using namespace std;

class JacksClass{
    public:
    void fibNum(int num)
    {
        int x = 0;
        int y = 1;
        int y_old;
        while (y < num) {
            cout << y << endl;
            y_old = y;
            y = x + y;
            x = y_old;
        }
    }
};


int main()
{
    JacksClass obj;
    obj.fibNum(1000);
    return 0;
}
