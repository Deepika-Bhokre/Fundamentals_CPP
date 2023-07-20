#include <iostream>
using namespace std;
void towerofHonai(int n , char src , char dest , char helper)
{
    if(n==0)
    {
        return;
    }
    towerofHonai(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" To "<<dest<<endl;
    towerofHonai(n-1,helper,dest,src);

}
int main()
{
   towerofHonai(2,'A','C','B');
}