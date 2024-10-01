#include <iostream>
#include <thread>
using namespace std;

void firstPart() {
    for (int i = 0; i < 5; i++) {
        cout << "Thread 1: " << i << endl;
    }
}

void secondPart() {
    for (int i = 5; i < 10; i++) {
        cout << "Thread 2: " << i << endl;
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
