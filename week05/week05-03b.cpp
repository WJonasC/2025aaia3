/// week05-03b.cpp Part 1�Ginput, part 2 : output
/// Part 3 stringstream Part 4 �Greverse �ϹL��
/// CPE �� 2 �D UVA 483 �˹L��

#include <iostream>
#include <sstream> /// Part3: stringstream ���ɮ׬O sstream
#include <algorithm> /// Part 4: reverse ���t��k
using namespace std;
int main()
{
    string line; /// Part 1 :�@��r���r��
    while (getline (cin, line)) /// Ū�i��
    {
        stringstream ss(line); ///Part 3: ��stringstream �_�r
        string word; ///�r��o��
        while (ss >> word) ///Part 3: �� ss �_�r
        {
            reverse (word.begin(), word.end()); ///Part 4
            cout << "Ū��F" << word << endl; /// Part 3
        }
        cout << line << endl; /// Part2:Output
    }
}
