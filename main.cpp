#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "itemgenerator.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    //QGuiApplication::screens()[0]->size().width() / 1334)
    engine.rootContext()->setContextProperty("scale2", 1.3433);

    ItemGenerator ig;
    auto item = ig.generate(0);
    engine.rootContext()->setContextProperty("axe", item);
    engine.load(url);

    return app.exec();
}
