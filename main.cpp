#include <QQmlComponent>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlEngine engine;
    QQmlComponent component(&engine, "Main.qml");
    // для правильної роботи вищевказаний файл має бути а теці build-project20properties-Desktop_Qt_6_5_0_MinGW_64_bit-Debug
    QObject *object = component.create();

    QString returnedValue;
    QString msg = "Привіт від C++";
    QMetaObject::invokeMethod(object, "myQmlFunction",
                              Q_RETURN_ARG(QString, returnedValue),
                              Q_ARG(QString, msg));

    qDebug() << "Повернене значення функції:" << returnedValue;
    delete object;
    return app.exec();
}
