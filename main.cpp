#include <QCoreApplication>
#include <iostream>
#include "getrequest.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    OkdeskRequest okdeskRequest;
    okdeskRequest.requestCompaniesList();
    return a.exec();
}
