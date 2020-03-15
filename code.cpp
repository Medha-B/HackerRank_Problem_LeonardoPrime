#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the primeCount function below.
 */
int primeCount(long n) 
{
    int count = 0;
    if(n<=1)
    {
        count=0;
    }
    else if(n>1 && n<6)
    {
        count=1;
    }
    else if(n>=6 && n<30)
    {
        count=2;
    }else if(n>=30 && n<210)
    {
        count=3;
    }else if(n>=210 && n<2310)
    {
        count=4;
    }else if(n>=2310 && n<30030)
    {
        count=5;
    }else if(n>=30030 && n<510510)
    {
        count=6;
    }else if(n>=510510 && n<9699690)
    {
        count=7;
    }else if(n>=9699690 && n<223092870)
    {
        count=8;
    }else if(n>=223092870 && n<6469693230)
    {
        count=9;
    }else if(n>=6469693230 && n<200560490130)
    {
        count=10;
    }else if(n>=200560490130 && n<7.4207381e+12)
    {
        count=11;
    }else if(n>=7.4207381e+12 && n<993403866425170)
    {
        count=12;
    }
    else if(n>=993403866425170 && n<13082761331670030)
    {
        count=13;
    }else if(n>=13082761331670030 && n<614889782588491410)
    {
        count=14;
    }else if(n>=614889782588491410 && n<1.0e+19)
    {
        count=15;
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = primeCount(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
