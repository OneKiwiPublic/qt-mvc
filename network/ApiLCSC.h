#ifndef APILCSC_H
#define APILCSC_H

#include <QObject>

class ApiLCSC : public QObject
{
    Q_OBJECT

public:
    ApiLCSC();
    ~ApiLCSC();

    void fetchCategory();
};

#endif // APILCSC_H
