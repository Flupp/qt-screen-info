#include <QApplication>
#include <QScreen>

int main(int argc, char **argv)
{
    // A QApplication instance is needed otherwise screens() is empty.
    QApplication application(argc, argv);

    auto out = QTextStream(stdout);
    for (auto s : QGuiApplication::screens()) {
        out << "               name: " << s->name() << Qt::endl
            << "              model: " << s->model() << Qt::endl
            << "       manufacturer: " << s->manufacturer() << Qt::endl
            << "   devicePixelRatio: " << s->devicePixelRatio() << Qt::endl
            << "    virtualGeometry: " << s->virtualGeometry().x()
                                << " " << s->virtualGeometry().y()
                                << " " << s->virtualGeometry().width()
                                << "x" << s->virtualGeometry().height() << Qt::endl
            << "           geometry: " << s->geometry().x()
                                << " " << s->geometry().y()
                                << " " << s->geometry().width()
                                << "x" << s->geometry().height() << Qt::endl
            << "       physicalSize: " << s->physicalSize().width()
                                << "x" << s->physicalSize().height() << Qt::endl
            << "  nativeOrientation: " << s->nativeOrientation() << Qt::endl
            << "        orientation: " << s->orientation() << Qt::endl
            << " logicalDotsPerInch: " << s->logicalDotsPerInch()
                                << " " << s->logicalDotsPerInchX()
                                << "x" << s->logicalDotsPerInchY() << Qt::endl
            << "physicalDotsPerInch: " << s->physicalDotsPerInch()
                                << " " << s->physicalDotsPerInchX()
                                << "x" << s->physicalDotsPerInchY() << Qt::endl
            << "     DPI calculated: " << 25.4 * s->size().width()  / s->physicalSize().width()
                                << "x" << 25.4 * s->size().height() / s->physicalSize().height() << Qt::endl
            << "DPI calculated -5mm: " << 25.4 * s->size().width()  / (s->physicalSize().width()  - 5.0)
                                << "x" << 25.4 * s->size().height() / (s->physicalSize().height() - 5.0)<< Qt::endl
            << "DPI calculated +5mm: " << 25.4 * s->size().width()  / (s->physicalSize().width()  + 5.0)
                                << "x" << 25.4 * s->size().height() / (s->physicalSize().height() + 5.0)<< Qt::endl
            << Qt::endl;
    }
    return 0;
    // return application.exec();
}
