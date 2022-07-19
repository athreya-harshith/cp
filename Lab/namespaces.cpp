#include<iostream>
namespace ns1
{
  int i;
}
namespace ns2
{
  int i;
}
int main()
{
  ns1::i=10;
  ns2::i=100;
  //cout<<i;
  std::cout<<ns1::i<<std::endl;
  std::cout<<ns2::i<<std::endl;
}
