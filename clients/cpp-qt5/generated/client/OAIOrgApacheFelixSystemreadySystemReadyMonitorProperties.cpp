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


#include "OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties() {
    init();
}

OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::~OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties() {
    this->cleanup();
}

void
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::init() {
    poll_interval = new OAIConfigNodePropertyInteger();
    m_poll_interval_isSet = false;
}

void
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::cleanup() {
    if(poll_interval != nullptr) { 
        delete poll_interval;
    }
}

OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties*
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&poll_interval, pJson["poll.interval"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::asJsonObject() {
    QJsonObject obj;
    if((poll_interval != nullptr) && (poll_interval->isSet())){
        toJsonValue(QString("poll.interval"), poll_interval, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::getPollInterval() {
    return poll_interval;
}
void
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::setPollInterval(OAIConfigNodePropertyInteger* poll_interval) {
    this->poll_interval = poll_interval;
    this->m_poll_interval_isSet = true;
}


bool
OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(poll_interval != nullptr && poll_interval->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
