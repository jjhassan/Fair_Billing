#include "include/BillGenerator.h"
#include <memory>

int main(int argc, const char* argv[])
{
    std::unique_ptr<BillGenerator> billGen(new BillGenerator(argv[1]));

    billGen->PrintBill();

    return 0;
}