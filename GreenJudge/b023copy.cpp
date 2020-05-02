#include <iostream>
using namespace std;

void HanoiTower(int no, char src, char des, char tmp)
{
        if(no!=0){
                HanoiTower(no-1, src, tmp, des);
                cout << "move no." << no << " plate from " << src << " to " << des << endl;
                HanoiTower(no-1, tmp, des, src);
        }
}
int main()
{
        // 4 ½L¬°¨Ò, ±q A ·h¨ì C
        HanoiTower(4, 'A', 'C', 'B');
        return 0;
}
