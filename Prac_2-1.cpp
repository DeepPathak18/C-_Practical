#include <iostream>
using namespace std;
class plot
{
    int l, w, a, p;

public:
    void add_plot_data()
    {
        cout << "Enter length of plot :";
        cin >> l;
        cout << "Enter width of plot :";
        cin >> w;
        a = l * w;
        p = 2 * (l + w);
    }
    void upd_plot_data()
    {
        cout << "Enter length of plot :";
        cin >> l;
        cout << "Enter width of plot :";
        cin >> w;
        a = l * w;
        p = 2 * (l + w);
    }
    void dis_plot_data()
    {
        cout<<"--------------------------------------------"<<endl;
        cout << "length of your plot is:" << l << endl
             << "width of your plot is:" << w << endl
             << "area of your plot is:" << a << endl
             << "perimeter of your plot is:" << p << endl;
    }
};
int main()
{
    plot p[25];
    int ch, hpn, n, pn;
again:
    cout << "--------------------------------" << endl
         << "Enter 1 for add data" << endl
         << "Enter 2 for update data" << endl
         << "Enter 3 for display data" << endl;
    cout << "Enter Your Choice:";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Enter n which how many plot data do you add:";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            p[i].add_plot_data();
        }
        break;
    case 2:
        cout << "Enter number which  plot data do you update:";
        cin >> hpn;
        for (int i = 0; i < hpn; i++)
        {
            cout << "Enter plot number which data do you update:";
            cin >> pn;
            p[pn - 1].upd_plot_data();
        }
        break;
    case 3:
        for (int i = 0; i < n; i++)
        {
            p[i].dis_plot_data();
        }
        break;
    default:
        return 0;
    }
    goto again;
}
