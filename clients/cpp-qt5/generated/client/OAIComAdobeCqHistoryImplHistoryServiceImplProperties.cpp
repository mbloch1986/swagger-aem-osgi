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


#include "OAIComAdobeCqHistoryImplHistoryServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqHistoryImplHistoryServiceImplProperties::OAIComAdobeCqHistoryImplHistoryServiceImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqHistoryImplHistoryServiceImplProperties::OAIComAdobeCqHistoryImplHistoryServiceImplProperties() {
    init();
}

OAIComAdobeCqHistoryImplHistoryServiceImplProperties::~OAIComAdobeCqHistoryImplHistoryServiceImplProperties() {
    this->cleanup();
}

void
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::init() {
    history_service_resource_types = new OAIConfigNodePropertyArray();
    m_history_service_resource_types_isSet = false;
    history_service_path_filter = new OAIConfigNodePropertyArray();
    m_history_service_path_filter_isSet = false;
}

void
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::cleanup() {
    if(history_service_resource_types != nullptr) { 
        delete history_service_resource_types;
    }
    if(history_service_path_filter != nullptr) { 
        delete history_service_path_filter;
    }
}

OAIComAdobeCqHistoryImplHistoryServiceImplProperties*
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&history_service_resource_types, pJson["history.service.resourceTypes"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&history_service_path_filter, pJson["history.service.pathFilter"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::asJsonObject() {
    QJsonObject obj;
    if((history_service_resource_types != nullptr) && (history_service_resource_types->isSet())){
        toJsonValue(QString("history.service.resourceTypes"), history_service_resource_types, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((history_service_path_filter != nullptr) && (history_service_path_filter->isSet())){
        toJsonValue(QString("history.service.pathFilter"), history_service_path_filter, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::getHistoryServiceResourceTypes() {
    return history_service_resource_types;
}
void
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::setHistoryServiceResourceTypes(OAIConfigNodePropertyArray* history_service_resource_types) {
    this->history_service_resource_types = history_service_resource_types;
    this->m_history_service_resource_types_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::getHistoryServicePathFilter() {
    return history_service_path_filter;
}
void
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::setHistoryServicePathFilter(OAIConfigNodePropertyArray* history_service_path_filter) {
    this->history_service_path_filter = history_service_path_filter;
    this->m_history_service_path_filter_isSet = true;
}


bool
OAIComAdobeCqHistoryImplHistoryServiceImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(history_service_resource_types != nullptr && history_service_resource_types->isSet()){ isObjectUpdated = true; break;}
        if(history_service_path_filter != nullptr && history_service_path_filter->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

