/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties() {
    this->init();
}

OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::~OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties() {
    
}

void
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::init() {
    m_extendable_widgets_isSet = false;
    m_widgetextensionprovider_debug_isSet = false;
}

void
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(extendable_widgets, json[QString("extendable.widgets")]);
    
    ::OpenAPI::fromJsonValue(widgetextensionprovider_debug, json[QString("widgetextensionprovider.debug")]);
    
}

QString
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(extendable_widgets.isSet()){
        obj.insert(QString("extendable.widgets"), ::OpenAPI::toJsonValue(extendable_widgets));
    }
	if(widgetextensionprovider_debug.isSet()){
        obj.insert(QString("widgetextensionprovider.debug"), ::OpenAPI::toJsonValue(widgetextensionprovider_debug));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::getExtendableWidgets() const {
    return extendable_widgets;
}
void
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::setExtendableWidgets(const OAIConfigNodePropertyArray &extendable_widgets) {
    this->extendable_widgets = extendable_widgets;
    this->m_extendable_widgets_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::getWidgetextensionproviderDebug() const {
    return widgetextensionprovider_debug;
}
void
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::setWidgetextensionproviderDebug(const OAIConfigNodePropertyBoolean &widgetextensionprovider_debug) {
    this->widgetextensionprovider_debug = widgetextensionprovider_debug;
    this->m_widgetextensionprovider_debug_isSet = true;
}


bool
OAIComDayCqWidgetImplWidgetExtensionProviderImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(extendable_widgets.isSet()){ isObjectUpdated = true; break;}
    
        if(widgetextensionprovider_debug.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

