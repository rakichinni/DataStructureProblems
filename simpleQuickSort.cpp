#include <iostream>

using namespace std;

int d[] = {10, 20, 30, 40, 50, 70, 90};
int ele = 45;

int quick_search(int start, int end)
{
    cout << "start: " << start << ", end: " << end << endl;

    int mid = (end - start)/2;

    if (start == end || mid == 0)
    {
        return -1;
    }
    if ( d[start] > ele)
    {
        return -1;
    }
    if ( d[end] < ele)
    {
        return -1;
    }

    if (d[mid] == ele)
    {
        return mid;
    }
    else if (d[start] == ele)
    {
        return start;
    }
    else if (d[end] == ele)
    {
        return end;
    }
    else if (d[mid] > ele)
    {
        return quick_search(mid+1, end);
    }
    else if (d[mid] < ele)
    {
        return quick_search(start,mid-1);
    }
}

int main()
{
    cout << quick_search(0,6) << endl;
}
