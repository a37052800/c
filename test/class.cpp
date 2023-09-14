#include <iostream>
using namespace std;
class car
{
private:
    int speed = 0;
    void speedlimit()
    {
        if (speed > 60)
        {
            speed = 60;
        }
    }

public:
    car(){};
    ~car()
    {
        cout << "class end\n";
    };
    int getspeed()
    {
        speedlimit();
        return speed;
    }
    void setspeed(int a)
    {
        speed = a;
        speedlimit();
    }
};
int main()
{
    car one;
    cout << one.getspeed() << endl;
    one.setspeed(60);
    cout << one.getspeed() << endl;
    one.setspeed(80);
    cout << one.getspeed() << endl;
}