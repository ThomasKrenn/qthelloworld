
#include <QtCore/QObject>

class Task : public QObject
{
    Q_OBJECT
public:
    Task(QObject *parent = 0) : QObject(parent) {}

    public slots :
        void run()
    {
        // Do processing here

        emit finished();
    }

signals:
    void finished();
};
