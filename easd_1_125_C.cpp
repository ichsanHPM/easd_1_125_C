//1. Suatu algoritma dibutuhkan untuk menyelesaikan masalah karena  membuat urutan program(solusi) dari 
//2.statik dan dinamis
//3.faktor yang mempengaruhi suatu algoritma adalah efisiensi dan penyimpanan
//4.intension short lebih efisien saat data sudah banyak yang urut,buble short lebih efisien saat data masih acak
//5.
//6.

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
    while (true)
    {
        cout << "Masukan panjang element array";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20"
            << endl;
    }
    cout << "n-------------" << endl;
    cout << "nEnter Array Element";
    cout << "\n------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high)
{
    int pivot, i, IH;
    if (low > high)

        return;

    pivot = arr[IH];
    i = low + 1;
    IH = high;

    while (i <= IH)
    {
        while ((arr[i] <= pivot) && (IH <= high))
        {
            i++;
            cmp_count++;
        }
        cmp_count++;

        while ((arr[IH] > pivot) && (low))
        {
            IH--;
            cmp_count++;
        }
        cmp_count++;

        if (i < IH)
        {
            swap(i, IH);
            mov_count++;
        }

    }
    if (low < IH)
    {
        swap(low, IH);
        mov_count++;
    }
    q_short(low, IH);
    q_short(IH + 1, high);

}
void display()
{
    cout << "/n---------------" << endl;
    cout << "sorted array" << endl;
    cout << "-----------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "n\Number of comparasion: " << cmp_count << endl;
    cout << "n\Number of data movements" << mov_count << endl;

        

}

int main()
{
    input();
    q_short(0, n - 1);
    display();
    system("pause");

    return 0;
}
    








int main()
{
    std::cout << "Hello World!\n";
}

