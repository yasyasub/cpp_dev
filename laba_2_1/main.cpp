#include <iostream>
#include <stdlib.h>
#include <map>
template <typename TTT>
class TArr {
    int n;
    TTT* mas;
public:
    TArr(int a) :n(a)  {
        if (n > 0) mas = new TTT[n];
        else {
            n = 0; mas = NULL;
        }
    }
    TArr() :n(0), mas(NULL) {}
    virtual ~TArr()  {
        if (mas) delete[] mas;
        n = 0;
    }
    TArr(const TArr&arg2)  {
        if (this == &arg2)
            return;
        //1
        this->n = arg2.n;
        //3
        mas = new int[n];
        //4
        for (int i = 0; i < n; ++i)
            mas[i] = arg2.mas[i];
        //5
        }
        TArr& operator = (const TArr&arg2)  {
        if (this == &arg2) return (*this);
        this->~TArr();
        //2 звильняемо память
        this->n = arg2.n;
        //3
        mas = new TTT[n];
        //4
        for (int i = 0; i < n; ++i)
            mas[i] = arg2.mas[i];
        //5
        return (*this);
    }
};
int main(){
    return 0;
}
