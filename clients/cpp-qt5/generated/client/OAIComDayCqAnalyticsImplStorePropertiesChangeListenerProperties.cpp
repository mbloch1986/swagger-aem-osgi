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


#include "OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties() {
    init();
}

OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::~OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties() {
    this->cleanup();
}

void
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::init() {
    cq_store_listener_additional_store_paths = new OAIConfigNodePropertyArray();
    m_cq_store_listener_additional_store_paths_isSet = false;
}

void
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::cleanup() {
    if(cq_store_listener_additional_store_paths != nullptr) { 
        delete cq_store_listener_additional_store_paths;
    }
}

OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties*
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_store_listener_additional_store_paths, pJson["cq.store.listener.additionalStorePaths"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_store_listener_additional_store_paths != nullptr) && (cq_store_listener_additional_store_paths->isSet())){
        toJsonValue(QString("cq.store.listener.additionalStorePaths"), cq_store_listener_additional_store_paths, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::getCqStoreListenerAdditionalStorePaths() {
    return cq_store_listener_additional_store_paths;
}
void
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::setCqStoreListenerAdditionalStorePaths(OAIConfigNodePropertyArray* cq_store_listener_additional_store_paths) {
    this->cq_store_listener_additional_store_paths = cq_store_listener_additional_store_paths;
    this->m_cq_store_listener_additional_store_paths_isSet = true;
}


bool
OAIComDayCqAnalyticsImplStorePropertiesChangeListenerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_store_listener_additional_store_paths != nullptr && cq_store_listener_additional_store_paths->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

