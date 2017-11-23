// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SHIABIT_QT_SHIABITADDRESSVALIDATOR_H
#define SHIABIT_QT_SHIABITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ShiabitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ShiabitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Shiabit address widget validator, checks for a valid shiabit address.
 */
class ShiabitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ShiabitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SHIABIT_QT_SHIABITADDRESSVALIDATOR_H
