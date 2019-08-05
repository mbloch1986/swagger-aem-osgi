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


#include "OAIComDayCqReplicationImplReverseReplicatorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqReplicationImplReverseReplicatorProperties::OAIComDayCqReplicationImplReverseReplicatorProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqReplicationImplReverseReplicatorProperties::OAIComDayCqReplicationImplReverseReplicatorProperties() {
    this->init();
}

OAIComDayCqReplicationImplReverseReplicatorProperties::~OAIComDayCqReplicationImplReverseReplicatorProperties() {
    
}

void
OAIComDayCqReplicationImplReverseReplicatorProperties::init() {
    m_scheduler_period_isSet = false;
}

void
OAIComDayCqReplicationImplReverseReplicatorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqReplicationImplReverseReplicatorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(scheduler_period, json[QString("scheduler.period")]);
    
}

QString
OAIComDayCqReplicationImplReverseReplicatorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqReplicationImplReverseReplicatorProperties::asJsonObject() const {
    QJsonObject obj;
	if(scheduler_period.isSet()){
        obj.insert(QString("scheduler.period"), ::OpenAPI::toJsonValue(scheduler_period));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComDayCqReplicationImplReverseReplicatorProperties::getSchedulerPeriod() const {
    return scheduler_period;
}
void
OAIComDayCqReplicationImplReverseReplicatorProperties::setSchedulerPeriod(const OAIConfigNodePropertyInteger &scheduler_period) {
    this->scheduler_period = scheduler_period;
    this->m_scheduler_period_isSet = true;
}


bool
OAIComDayCqReplicationImplReverseReplicatorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(scheduler_period.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
