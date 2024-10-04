#include <iostream>
#include <thread>
using namespace std;

void firstPart() {
    for (int i = 10; i < 20; i++) {
        cout << "Thread 10: " << i << endl;
    }
}

void secondPart() {
    for (int i = 20; i < 30; i++) {
        cout << "Thread 20: " << i << endl;
    }
}

int main()
{
    thread thread1(firstPart);
    thread thread2(secondPart);
    thread1.join();
    thread2.join();

    return 0;
}
