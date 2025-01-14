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


#include "OAIComDayCqDamScene7ImplScene7APIClientImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamScene7ImplScene7APIClientImplProperties::OAIComDayCqDamScene7ImplScene7APIClientImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamScene7ImplScene7APIClientImplProperties::OAIComDayCqDamScene7ImplScene7APIClientImplProperties() {
    init();
}

OAIComDayCqDamScene7ImplScene7APIClientImplProperties::~OAIComDayCqDamScene7ImplScene7APIClientImplProperties() {
    this->cleanup();
}

void
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::init() {
    cq_dam_scene7_apiclient_recordsperpage_nofilter_name = new OAIConfigNodePropertyInteger();
    m_cq_dam_scene7_apiclient_recordsperpage_nofilter_name_isSet = false;
    cq_dam_scene7_apiclient_recordsperpage_withfilter_name = new OAIConfigNodePropertyInteger();
    m_cq_dam_scene7_apiclient_recordsperpage_withfilter_name_isSet = false;
}

void
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::cleanup() {
    if(cq_dam_scene7_apiclient_recordsperpage_nofilter_name != nullptr) { 
        delete cq_dam_scene7_apiclient_recordsperpage_nofilter_name;
    }
    if(cq_dam_scene7_apiclient_recordsperpage_withfilter_name != nullptr) { 
        delete cq_dam_scene7_apiclient_recordsperpage_withfilter_name;
    }
}

OAIComDayCqDamScene7ImplScene7APIClientImplProperties*
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_dam_scene7_apiclient_recordsperpage_nofilter_name, pJson["cq.dam.scene7.apiclient.recordsperpage.nofilter.name"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cq_dam_scene7_apiclient_recordsperpage_withfilter_name, pJson["cq.dam.scene7.apiclient.recordsperpage.withfilter.name"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_dam_scene7_apiclient_recordsperpage_nofilter_name != nullptr) && (cq_dam_scene7_apiclient_recordsperpage_nofilter_name->isSet())){
        toJsonValue(QString("cq.dam.scene7.apiclient.recordsperpage.nofilter.name"), cq_dam_scene7_apiclient_recordsperpage_nofilter_name, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cq_dam_scene7_apiclient_recordsperpage_withfilter_name != nullptr) && (cq_dam_scene7_apiclient_recordsperpage_withfilter_name->isSet())){
        toJsonValue(QString("cq.dam.scene7.apiclient.recordsperpage.withfilter.name"), cq_dam_scene7_apiclient_recordsperpage_withfilter_name, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::getCqDamScene7ApiclientRecordsperpageNofilterName() {
    return cq_dam_scene7_apiclient_recordsperpage_nofilter_name;
}
void
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::setCqDamScene7ApiclientRecordsperpageNofilterName(OAIConfigNodePropertyInteger* cq_dam_scene7_apiclient_recordsperpage_nofilter_name) {
    this->cq_dam_scene7_apiclient_recordsperpage_nofilter_name = cq_dam_scene7_apiclient_recordsperpage_nofilter_name;
    this->m_cq_dam_scene7_apiclient_recordsperpage_nofilter_name_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::getCqDamScene7ApiclientRecordsperpageWithfilterName() {
    return cq_dam_scene7_apiclient_recordsperpage_withfilter_name;
}
void
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::setCqDamScene7ApiclientRecordsperpageWithfilterName(OAIConfigNodePropertyInteger* cq_dam_scene7_apiclient_recordsperpage_withfilter_name) {
    this->cq_dam_scene7_apiclient_recordsperpage_withfilter_name = cq_dam_scene7_apiclient_recordsperpage_withfilter_name;
    this->m_cq_dam_scene7_apiclient_recordsperpage_withfilter_name_isSet = true;
}


bool
OAIComDayCqDamScene7ImplScene7APIClientImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_dam_scene7_apiclient_recordsperpage_nofilter_name != nullptr && cq_dam_scene7_apiclient_recordsperpage_nofilter_name->isSet()){ isObjectUpdated = true; break;}
        if(cq_dam_scene7_apiclient_recordsperpage_withfilter_name != nullptr && cq_dam_scene7_apiclient_recordsperpage_withfilter_name->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

