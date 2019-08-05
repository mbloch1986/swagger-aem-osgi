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


#include "OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties() {
    init();
}

OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::~OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::init() {
    service_ranking = new OAIConfigNodePropertyInteger();
    m_service_ranking_isSet = false;
    serviceusers_simple_subject_population = new OAIConfigNodePropertyBoolean();
    m_serviceusers_simple_subject_population_isSet = false;
    serviceusers_list = new OAIConfigNodePropertyArray();
    m_serviceusers_list_isSet = false;
}

void
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::cleanup() {
    if(service_ranking != nullptr) { 
        delete service_ranking;
    }
    if(serviceusers_simple_subject_population != nullptr) { 
        delete serviceusers_simple_subject_population;
    }
    if(serviceusers_list != nullptr) { 
        delete serviceusers_list;
    }
}

OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties*
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&service_ranking, pJson["service.ranking"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&serviceusers_simple_subject_population, pJson["serviceusers.simpleSubjectPopulation"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&serviceusers_list, pJson["serviceusers.list"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::asJsonObject() {
    QJsonObject obj;
    if((service_ranking != nullptr) && (service_ranking->isSet())){
        toJsonValue(QString("service.ranking"), service_ranking, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((serviceusers_simple_subject_population != nullptr) && (serviceusers_simple_subject_population->isSet())){
        toJsonValue(QString("serviceusers.simpleSubjectPopulation"), serviceusers_simple_subject_population, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((serviceusers_list != nullptr) && (serviceusers_list->isSet())){
        toJsonValue(QString("serviceusers.list"), serviceusers_list, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::getServiceRanking() {
    return service_ranking;
}
void
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::setServiceRanking(OAIConfigNodePropertyInteger* service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::getServiceusersSimpleSubjectPopulation() {
    return serviceusers_simple_subject_population;
}
void
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::setServiceusersSimpleSubjectPopulation(OAIConfigNodePropertyBoolean* serviceusers_simple_subject_population) {
    this->serviceusers_simple_subject_population = serviceusers_simple_subject_population;
    this->m_serviceusers_simple_subject_population_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::getServiceusersList() {
    return serviceusers_list;
}
void
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::setServiceusersList(OAIConfigNodePropertyArray* serviceusers_list) {
    this->serviceusers_list = serviceusers_list;
    this->m_serviceusers_list_isSet = true;
}


bool
OAIComAdobeGraniteRepositoryServiceUserConfigurationProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(service_ranking != nullptr && service_ranking->isSet()){ isObjectUpdated = true; break;}
        if(serviceusers_simple_subject_population != nullptr && serviceusers_simple_subject_population->isSet()){ isObjectUpdated = true; break;}
        if(serviceusers_list != nullptr && serviceusers_list->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
