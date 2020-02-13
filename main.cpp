#include <iostream>
#include "python_list.h"
#include<vector>

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    //vector<int> a {1,2,3,4,5,6};
    int a[7] = {1,2,3,4,5,6,7};
    python_list data(a);
    int lem = data.len_pre();
    cout <<"len: "<< lem<<endl;

  //  python_list list2(a);
 //   list2.Slic(2,5);
    //int *p = &list2;
//    for(int i = 0;0 != 2;i++)
//{

  //  printf(": %d \n",list2);
//    &list2++;

//}
	printf("done");
    return 0;
}

/*

 vector<int> A ({4,5,8});
    python_list b(A);
    b.append(b);

*/
