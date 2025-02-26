//
// Created by 15167 on 2025/2/11.
//
#include <iostream>
using namespace std;
void Hanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("%c--%c\n",A,B);
        return ;
    }
    Hanoi(n-1,A,C,B);

    printf("%c--%c\n",A,B);

    Hanoi(n-1,C,B,A);

}
int main(int argc, char *argv[])
{
    int n;
    cin>>n;
    Hanoi(n,'A','C','B');
    return 0;
}