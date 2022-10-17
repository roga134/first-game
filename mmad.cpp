#include <iostream>
using namespace std;
void asly(int x , int y)
{
    string main_star = "* " , last_star = "*" , empty_star = "  ";
    for (int i = 0 ; i < x ; i++ )
    {
        for (int j = 0 ; j , j < x ; j ++)
        {
            if (i == 0 or i == x - 1)
            {
                cout << main_star ;
            }

            else if (i == (x - y) )
            {
                if (j >=  (x- y) - 1)
                    cout << main_star ;

                else
                    cout << empty_star ;
            }
            else if (j == x - 1)
                cout << endl ;
        }
    }
}
int main()
{
    int a , b ;
    cin >> a ;
    cin >> b ;
    if (b >= a)
        cout << "Wrong order!" ;
    else if ((b - a) % 2 != 0)
        cout << "Wrong difference!" ;
    else
        asly(a , b);
    return 0 ;
}
