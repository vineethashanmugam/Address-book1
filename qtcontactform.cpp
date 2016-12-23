#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        pincodeField(new QLineEdit())

{
    addRow("<font color = 'pink'> First Name </font><font color = 'green'>*</font>",firstNameField);
    addRow("<font color = 'pink'> last Name </font><font color = 'green'>*</font>",lastNameField);
    addRow("<font color = 'pink'> Address </font><font color = 'green'>*</font>",addressField);
    addRow("<font color = 'pink'> Phone Number </font><font color = 'green'>*</font>",phoneNumberField);
    addRow("<font color = 'pink'> Email </font><font color = 'green'>*</font>",emailField);
    addRow("<font color = 'pink'> pincode </font><font color = 'green'>*</font>",pincodeField);



}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");

}
