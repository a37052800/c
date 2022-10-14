#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    //初始化一個空vector容量
    vector<char> value;
    //向value容器中的尾部依次添加 S、T、L 字符
    value.push_back('S');
    value.push_back('T');
    value.push_back('L');
    //調用 size() 成員函數容器中的元素個數
    cout << "元素個數為：" << value.size();
    //使用迭代器遍歷容器
    for (auto i = value.begin(); i < value.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    //向容器開頭插入字符
    value.insert(value.begin(), 'C');
    cout << "首個元素為：" << value.at(0) << endl;

    //創建空 map 容器，默認根據個鍵值對中鍵的值，對鍵值對做降序排序
    std::map<std::string, std::string, std::greater<std::string>> myMap;
    //調用 emplace() 方法，直接向 myMap 容器中指定位置構造新鍵值對
    myMap.emplace("a", "1");
    myMap.emplace("b", "2");
    myMap.emplace("c", "3");
    //輸出當前 myMap 容器存儲鍵值對的個數
    cout << "myMap size==" << myMap.size() << endl;
    //判斷當前 myMap 容器是否為空
    if (!myMap.empty())
    {
        //借助 myMap 容器迭代器，將該容器的鍵值對逐個輸出
        for (auto i = myMap.begin(); i != myMap.end(); ++i)
        {
            cout << i->first << " " << i->second << endl;
        }
    }
    /*
    c.capacity(); //返回vector能夠容納的元素個數。
    cc.size();    //返回vector內現有元素的個數。
    //賦值操作
    c1 = c2;            //把c2的全部元素指派給c1
    c.assign(n, elem);  //複製n個elem，指派給c
    c.assign(beg, end); //將區間beg，end內的元素指派給c
    c1.swap(c2);        //將c1,c2元素互換
    swap(c1, c2);       //同上
    //元素存取
    c.at(index);
    c[index];
    c.front(); //返回第一個元素
    c.back();
    //插入和刪除：
    c.insert(pos.elem);
    c.insert(pos, n.elem);   //插入n個elem
    c.insert(pos, beg, end); //在pos出插入beg，end區間內的所有元素。
    c.push_back(elem);
    c.pop_back();
    c.erase(pos); //刪除pos上的元素，返回下一個元素
    c.erase(beg, end);
    c.resize(num);       //將元素數量改為num，如果size變大了，多出來的新元素都要一default方式構建。
    c.resize(num, elem); //將元素數量改為num，如果size變大了，多出來的新元素是elem的副本。
    c.clear();           //刪除所有。
    */

    //創建空set容器
    std::set<std::string> myset;
    //空set容器不存儲任何元素
    cout << "1、myset size = " << myset.size() << endl;
    //向myset容器中插入新元素
    myset.insert("1");
    myset.insert("2");
    myset.insert("3");
    cout << "2、myset size = " << myset.size() << endl;
    //利用雙向迭代器，遍歷myset
    for (auto iter = myset.begin(); iter != myset.end(); ++iter)
    {
        cout << *iter << endl;
    }

    int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};

    // size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    // sort the array
    sort(a, a + asize);
    return 0;
}