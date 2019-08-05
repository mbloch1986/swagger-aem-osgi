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


#include "OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties() {
    init();
}

OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::~OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::init() {
    bucket_size = new OAIConfigNodePropertyInteger();
    m_bucket_size_isSet = false;
}

void
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::cleanup() {
    if(bucket_size != nullptr) { 
        delete bucket_size;
    }
}

OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties*
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&bucket_size, pJson["bucketSize"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::asJsonObject() {
    QJsonObject obj;
    if((bucket_size != nullptr) && (bucket_size->isSet())){
        toJsonValue(QString("bucketSize"), bucket_size, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::getBucketSize() {
    return bucket_size;
}
void
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::setBucketSize(OAIConfigNodePropertyInteger* bucket_size) {
    this->bucket_size = bucket_size;
    this->m_bucket_size_isSet = true;
}


bool
OAIComAdobeGraniteWorkflowCoreJcrWorkflowBucketManagerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(bucket_size != nullptr && bucket_size->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
