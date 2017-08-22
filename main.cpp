#include <iostream>

using namespace std;

int main()
{
    int *p;
    int x[5]={3};
    p = x;
    int **z  = new int*[5];
    for(int i = 0; i < 5; i++)
    {
        z[i] = new int[4];
    }
      for(int i = 0; i < 5; i++)
    {

        for(int j = 0; j < 4; j++)
        {
            //cout<<"enter value of z ";
            z[i][j] = 0;

        }
    }
    for(int i = 0; i < 5; i++)
    {

        for(int j = 0; j < 4; j++)
        {
            cout<<"this is the value of z "<<z[i][j]<<endl;

        }
    }

    for(int i = 0; i < 5; i++)
    cout<<x[i]<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
