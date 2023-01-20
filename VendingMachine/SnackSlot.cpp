#include "SnackSlot.h"
#include "Snack.h"

SnackSlot::SnackSlot(short countOfOneSlot)
{

   this->countInOneSlot = countOfOneSlot;

}
void SnackSlot::addSnack(Snack* snack)
{
    if (countsl < countInOneSlot)
    {
        countsl++;

        string a = snack->GetName();
        snacklist += a;
    }
}
string SnackSlot::GetSnackList()
{
    return snacklist;
}
