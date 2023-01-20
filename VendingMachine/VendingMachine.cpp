#include "VendingMachine.h"
#include "SnackSlot.h"

VendingMachine::VendingMachine(short slotCount)
{
    this->countOfTheSlots = slotCount;
}
void VendingMachine::loadTheSlot(SnackSlot slot)
{
    if (count <= countOfTheSlots) 
    {
        count++;
        arrayForSlots[count-1] = slot.GetSnackList();

    }
    SetcountOfSlots(count);

}
int VendingMachine::GetcountOfSlots()
{
    return count;
}
void VendingMachine::SetcountOfSlots(short num)
{
    count = num;
}
int VendingMachine::getEmptySlotsCount()
{
    //cout << GetcountOfSlots() << endl;
    int fulled=0;

    for (int i = 0; i <= GetcountOfSlots(); ++i)
    {
        if ((arrayForSlots[i] != "1") && (arrayForSlots[i] != ""))
        {
            ++fulled;
        }

        
    }
    //cout << GetcountOfSlots() << endl;
     return GetcountOfSlots()-fulled;
}

/*std::ostream& operator<< (std::ostream& out, VendingMachine& point)
{
    return out;
}
*/
