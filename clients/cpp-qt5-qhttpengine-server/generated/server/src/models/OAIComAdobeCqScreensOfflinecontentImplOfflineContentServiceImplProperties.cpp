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


#include "OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties() {
    this->init();
}

OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::~OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties() {
    
}

void
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::init() {
    m_disable_smart_sync_isSet = false;
}

void
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(disable_smart_sync, json[QString("disableSmartSync")]);
    
}

QString
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(disable_smart_sync.isSet()){
        obj.insert(QString("disableSmartSync"), ::OpenAPI::toJsonValue(disable_smart_sync));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::getDisableSmartSync() const {
    return disable_smart_sync;
}
void
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::setDisableSmartSync(const OAIConfigNodePropertyBoolean &disable_smart_sync) {
    this->disable_smart_sync = disable_smart_sync;
    this->m_disable_smart_sync_isSet = true;
}


bool
OAIComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(disable_smart_sync.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
