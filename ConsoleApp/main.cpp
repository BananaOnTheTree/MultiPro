#include <QGuiApplication>
#include <QObject>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaMethod>
#include <QDebug>

class MyClass : public QGuiApplication
{
    Q_OBJECT
    Q_PROPERTY(QString propA READ propA WRITE setPropA)
    Q_PROPERTY(int propB READ propB WRITE setPropB)

public:
    MyClass(int &argc, char **argv) : QGuiApplication(argc, argv), m_propA("DefaultA"), m_propB(0) {}

    QString propA() const { return m_propA; }
    void setPropA(const QString &propA) { m_propA = propA; }

    int propB() const { return m_propB; }
    void setPropB(int propB) { m_propB = propB; }

    Q_INVOKABLE void pubMed() { qDebug() << "Public Method Called"; }

protected:
    void protectMed() { qDebug() << "Protected Method Called"; }

private:
    void priMed() { qDebug() << "Private Method Called"; }

    QString m_propA;
    int m_propB;
};

int main(int argc, char *argv[])
{
    MyClass app(argc, argv);
    const QMetaObject *metaObject = app.metaObject();

    // Show properties
    qDebug() << "Properties of MyClass:";
    for (int i = metaObject->propertyOffset(); i < metaObject->propertyCount(); ++i) {
        QMetaProperty property = metaObject->property(i);
        qDebug() << property.name();
    }

    // Show methods
    qDebug() << "Public Methods of MyClass:";
    for (int i = metaObject->methodOffset(); i < metaObject->methodCount(); ++i) {
        QMetaMethod method = metaObject->method(i);
        if (method.access() == QMetaMethod::Public) {
            qDebug() << method.methodSignature().constData();
        }
    }

    qDebug() << "Protected Methods of MyClass:";
    for (int i = metaObject->methodOffset(); i < metaObject->methodCount(); ++i) {
        QMetaMethod method = metaObject->method(i);
        if (method.access() == QMetaMethod::Protected) {
            qDebug() << method.methodSignature().constData();
        }
    }

    qDebug() << "Private Methods of MyClass:";
    for (int i = metaObject->methodOffset(); i < metaObject->methodCount(); ++i) {
        QMetaMethod method = metaObject->method(i);
        if (method.access() == QMetaMethod::Private) {
            qDebug() << method.methodSignature().constData();
        }
    }

    return app.exec();
}

#include "main.moc"
