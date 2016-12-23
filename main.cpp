#include "addressbookcontroller.h"
#include "sqlitedatasource.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SQLiteDataSource dSrc("contactss.db", true);
    AddressBookController myBook(dSrc);
    myBook.start();
    return app.exec();
}

