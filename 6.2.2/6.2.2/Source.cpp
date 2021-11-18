#include <iostream> 

#include <iomanip> 

#include <time.h> 



using namespace std;



void creat(int* r, const int n, int l, int h, int i);

void change(int* a, int n, int i);

void print(int* a, const int n, int i);



int main() {

    srand((unsigned)time(NULL));



    const int n = 10;

    const int low = -10;

    const int hight = 10;



    int a[2 * n];

    creat(a, n, low, hight, 0);

    print(a, n, 0);

    cout << endl;



    change(a, 2 * n, 1);

    print(a, n, 0);
}



void creat(int* a, const int n, const int l, const int h, int i)

{

    a[i] = l + rand() % (h - l + 1);

    if (i < n - 1)

        creat(a, n, l, h, i + 1);

}



void print(int* a, const int n, int i)

{

    cout << " " << setw(2) << a[i];

    if (i < n - 1)

        print(a, n, i + 1);

}



void change(int* a, int n, int i) {



    int tmp;

    tmp = a[i - 1];

    a[i - 1] = a[i];

    a[i] = tmp;



    if (i < n - 1) {

        change(a, n, i + 2);

    }

}