#include <iostream>
using namespace std;
void TOH(int n,char T1,char T2,char T3)
{
  if(n==0)
  {
    return NULL;
  } 
  TOH(n-1,T1,T3,T2);
  cout<<"    Move disk"<<" "<<n<<" tower "<<T1<<" to "<< T2 <<endl;
  TOH(n-1,T3,T2,T1);
}

int main() 
{
  cout<<"----------------------Tower Of Hanoi---------------"<<endl;
  int n;
  cout<<"    Number  of disk:"<<" ";
  cin>>n;
 TOH(n,'A','B','C');
}
