/**
 * @file main.cpp
 * @brief QGIS C++ Plugin Example
 * @author [Your Name]
 * @date 2026
 * 
 * @license CC BY-NC-SA 4.0
 */

#include <QAction>
#include <QMessageBox>
#include <qgis/qgisplugin.h>
#include <qgis/qgisinterface.h>
#include <qgis/qgscoordinatetransform.h>
#include <qgis/qgspointxy.h>

class MyPlugin : public QObject, public QgisPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qgis.plugins.MyPlugin")
    Q_INTERFACES(QgisPlugin)

public:
    explicit MyPlugin(QgisInterface* iface) 
        : m_iface(iface), m_action(nullptr) {}

    ~MyPlugin() override = default;

    void initGui() override
    {
        m_action = new QAction(QIcon(":/icons/icon.png"), 
                              "地理测试", this);
        connect(m_action, &QAction::triggered, this, 
                &MyPlugin::run);
        
        m_iface->addToolBarIcon(m_action);
        m_iface->addPluginToMenu("&地理插件", m_action);
    }

    void unload() override
    {
        m_iface->removePluginMenu("&地理插件", m_action);
        m_iface->removeToolBarIcon(m_action);
        delete m_action;
    }

private slots:
    void run()
    {
        // 获取地理画布
        QgsMapCanvas* geoCanvas = m_iface->mapCanvas();
        
        // 获取中心点坐标
        QgsPointXY center = geoCanvas->center();
        
        // 显示地理坐标
        QMessageBox::information(nullptr, 
            tr("地理插件"),
            tr("地理中心坐标：\n经度：%1\n纬度：%2\n\n"
               "纯C++地理计算实现！")
            .arg(center.x(), 0, 'f', 6)
            .arg(center.y(), 0, 'f', 6));
    }

private:
    QgisInterface* m_iface;
    QAction* m_action;
};

Q_EXPORT_PLUGIN2(myplugin, MyPlugin)