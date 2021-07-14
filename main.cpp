#include <iostream>

using namespace std;

 void linearSearch(int a[], int n)
    {
        int temp = -1;

        for(int i=0; i<8; i++)
        {
            if (a[i]==n)
            {
              cout << "Element found in location: " << i << endl;
              temp = 0;
            }

        }
        if(temp==-1)
            {
                cout<< "No Element found" <<endl;
            }


    }

int main()
{

   int arr[8] = {2,22,3,54,76,87,34,86};

   int num = 5;
   num = arr[num-1];
   linearSearch(arr,num);


    cout<< num <<endl;

    return 0;
}
